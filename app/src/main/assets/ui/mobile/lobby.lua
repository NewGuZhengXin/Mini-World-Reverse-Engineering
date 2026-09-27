
------------------------------------------------------------------GongNengFrame--------------------------------------------------------------
CurShowFrameName = nil;
function GongNengFrame_OnShow()
	GongNengFrameList:Hide();
--	GongNengFrameVipUVAnimationTex:SetUVAnimation(120, true);
--	GongNengFrameVipUVAnimationTex:Show();
	GongNengFrameGongNengBtn:Show();
	GongNengFrameGongNengCheckBtn:Hide();
end

function GongNengFrame_OnHide()
	CurShowFrameName = nil;
end

function GongNengFrameGongNengBtn_OnClick()
	GongNengFrameGongNengBtn:Hide();
	GongNengFrameGongNengCheckBtn:Show();
	GongNengFrameList:Show();
--[[
	AccountManager:delLoadWorldData(10001);
--]]
end

local owid = 10000;
local loadOwid = 20000;
function GongNengFrameGongNengCheckBtn_OnClick()
	GongNengFrameGongNengBtn:Show();
	GongNengFrameGongNengCheckBtn:Hide();
	GongNengFrameList:Hide();
end

function GongNengFrameVipBtn_OnClick()
--[[
	GiftFrame:Show();
	owid = owid + 1;
	loadOwid = loadOwid + 1;
	AccountManager:addLoadWorldData(owid, loadOwid, 0.1);
--]]
end

function GongNengFrameListFriendBtn_OnClick()	
	if CurShowFrameName ~= nil and ClientCurGame:getName() == "MainMenuStage" then	--游戏外的才把先前的面板关掉
		local frame = getglobal(CurShowFrameName);
		frame:Hide();
	end
	FriendFrame:Show();
end

function GongNengFrameListActivityBtn_OnClick()
end

function GongNengFrameListSetBtn_OnClick()
	SetMenuFrame:Show();
	GongNengFrameList:Hide();
	GongNengFrameGongNengBtn:Show();
	GongNengFrameGongNengCheckBtn:Hide();
end
---------------------------------------------------下载相关------------------------------------------------------------------
FirstOpenLobbyFrame = true;		--登录游戏后第一次打开lobbyframe标记

--worldId 	根据下载的世界创建的新世界的id
--state 	1正在下载 2等待下载 3暂停下载 4下载完成
--name 捆绑的存档条名字 
t_LoadWorldList = {}; 

--新加入列表的下载任务的状态
function GetNewLoadWorldListState()
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].state == 1 then
			return 2;
		end
	end

	return 1;
end

--暂停所有下载任务
function PauseLoadList()
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].state == 1 then
			t_LoadWorldList[i].state = 2;
		end
	end	
end

--开始下载列表的等待下载任务
function BeginWaitLoadlist()
	ClientMgr:clientLog("keeeeeeeeeeeeBeginWaitLoadlistNum:"..#(t_LoadWorldList));
	for i=1, #(t_LoadWorldList) do
		ClientMgr:clientLog("keeeeeeeeeeeeBeginWaitLoadlistState:"..t_LoadWorldList[i].state);
		if t_LoadWorldList[i].state == 2 then
			ClientMgr:clientLog("keeeeeeeeeeeeBeginWaitLoadlist");
			t_LoadWorldList[i].state = 1;
			
			AccountManager:requestLoadWorld(t_LoadWorldList[i].worldId);
			if LobbyFrameMoreGame:IsShown() then
				local name = LobbyFrameMoreGameAttentionBtnName:GetText();
				if string.find(name, "我的关注") then
					ClientMgr:clientLog("keeeeeeeeeeeeBeginWaitUpdateMoreGameShareInfo");
					UpdateMoreGameShareInfo();
				else
					ClientMgr:clientLog("keeeeeeeeeeeeBeginWaitUpdateMoreGameAttentionInfo");
					UpdateMoreGameAttentionInfo();
				end	
			end
			break;
		end
	end
end

--下载任务的状态
function GetLoadWorldListState(worldId)
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].worldId == worldId then
			return t_LoadWorldList[i].state;
		end
	end

	return 0;
end

--改变下载任务的状态
function SetLoadWorldListState(worldId, state)
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].worldId == worldId then
			t_LoadWorldList[i].state = state;
		end
	end
end

--是否有任务正在下载
function IsLoadingWorldList()
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].state == 1 then
			return true;
		end
	end

	return false;
end

--获取等待下载任务的世界ID
function GetWaitLoadWorldList()
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].state == 2 then
			return t_LoadWorldList[i].worldId;
		end
	end

	return -1;
end

--是否存在下载列表中
function IsInLoadWorldList(worldId)
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].worldId == worldId then
			return true;
		end
	end	

	return false;
end

--删除下载列表的任务
function DelLoadWorldList(worldId)
	ClientMgr:clientLog("keeeeeeeeeeeeeeeeeeeeeeeDelLoadWorldList");
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].worldId == worldId then
			ClientMgr:clientLog("keeeeeeeeeeeeeeeeeeeeeeeDworldId == worldId");

			if not t_LoadWorldList[i].state == 1 then
				UseNetType = 0;
			end
			table.remove(t_LoadWorldList, i);
			RemoveLoadWathchOWWorld(worldId);

			if LobbyFrameMoreGame:IsShown() then
				local name = LobbyFrameMoreGameAttentionBtnName:GetText();
				if string.find(name, "我的关注") then
					UpdateMoreGameShareInfo();
				else
					UpdateMoreGameAttentionInfo();
				end	
			end						
			break;
		end
	end

	AccountManager:delLoadWorldData(worldId);
end

--暂停正在下载的任务
function PauseLoadWorld()
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].state == 1 then
			t_LoadWorldList[i].state = 3;
		end
	end
end

--获取对应的存档的控件名字
function GetArchiveNameForWorldId(worldId)
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].worldId == worldId then
			return t_LoadWorldList[i].name;
		end
	end

	return nil;
end

--登录第一次打开lobbyframe时，初始化下载列表,全部为暂停状态
function InitLoadWorldList()
	for i=1, ARCHIVE_MAX do 
		if i <= AccountManager:getMyWorldList():getNumWorld() then
			local worldInfo = AccountManager:getMyWorldList():getWorldDesc(i-1);
			if worldInfo.realowneruin ~= 0 and worldInfo.owneruin ~= worldInfo.realowneruin then   --下载别人的地图
				local process = AccountManager:checkLoadWorld(worldInfo.worldid)
				if process ~= 100 then				--未下载完成的
					if not IsInLoadWorldList(worldInfo.worldid) then
						local ArchiveBtnName = "ArchiveBtn"..i;
						local bar = getglobal(ArchiveBtnName.."LoadProgressTex")		
						bar:SetWidth(0.68*process);
						table.insert(t_LoadWorldList, {worldId = worldInfo.worldid, state= 3, name=ArchiveBtnName});
					end
				end
			end	
		end
	end
end
--------------------------------------------------------LobbyFrame-------------------------------------------------------------
ARCHIVE_MAX 		= 30;
SelectArchiveIndex 	= 0;
DeleteMapIndex		= 0;
ShareingMapIndex 	= 0;			--当前正在上传分享的地图
IsDownWorld		= false;		--标识一下如果刚下载地图，打开存档的时候用默认选择刚下载的地图		
IsNeedReset 		= false;		--更新存档的时候滑动条是否要重置;
UseNetType 		= 0;			--使网络时用的网络类型 0未使用 1wifi 2手机流量

local ArchiveWorldDesc = nil;			--存档的信息
local ArchiveForBtnName = nil;			--存档条名字

function ArchiveContent_OnClick()
	local parent = this:GetParentFrame()
	if parent ~= nil and parent:GetParent() ~= nil then
		SetHightLightArchiveBtn(parent:GetParent());
		local archive = parent:GetParentFrame();
		if archive ~= nil then
			local index = archive:GetClientID() - 1;
			ArchiveWorldDesc = AccountManager:getMyWorldList():getWorldDesc(index);

			if ArchiveWorldDesc.realowneruin == 1 then
				return;
			end

			local offsetY = archive:GetRealTop();
			ArchiveInfoFrame:SetClientUserData(0, offsetY);
			ArchiveForBtnName = archive:GetName();
			ArchiveInfoFrame:Show();
		end
	end
end

function LobbyFrame_OnLoad()
	this:setUpdateTime(0.05);

	this:RegisterEvent("GE_WORLDLIST_CHANGE");
	this:RegisterEvent("GE_WATCHBUDDY_SUCCESS");
	this:RegisterEvent("GIE_WORLD_OPENPUSH");
	this:RegisterEvent("GIE_NET_CHANGE");
	this:RegisterEvent("GIE_APPBACK_PRESSED");
	this:RegisterEvent("GIE_WORLD_DOWNLOAD_COMPLETE");

	FirstOpenLobbyFrame = true;
	IsNeedReset = false;
end

function LobbyFrame_OnEvent()
	if arg1 == "GE_WORLDLIST_CHANGE" then
		if LobbyFrame:IsShown() then
			local ge = GameEventQue:getCurEvent();
			if ge.body.worldlist.openchangetype == 1 then
				UseNetType = 0;
				ShowGameTips(DefMgr:getStringDef(11), 3);
				BeginWaitLoadlist();			
			elseif ge.body.worldlist.openchangetype == 2 then
				if ShareingMapIndex > 0 then
					UseNetType = 0;
					ShareingMapIndex = 0;
					local bar = getglobal("ArchiveBtn"..ShareingMapIndex.."UploadProgressTex");	
					bar:SetWidth(0);
				end
			end
			UpdateArchive();
			--设置高亮
			if SelectArchiveIndex == 0 or DeleteMapIndex == SelectArchiveIndex then
				SelectArchiveIndex = 0;
				SetHightLightArchiveBtn(nil);
			else
				if DeleteMapIndex ~= 0 and DeleteMapIndex < SelectArchiveIndex then
					SelectArchiveIndex = SelectArchiveIndex - 1;
				end
				local btnName = "ArchiveBtn"..SelectArchiveIndex;
				SetHightLightArchiveBtn(btnName);
			end

			if DeleteMapIndex > 0 then
				DeleteMapIndex = 0;
			end	
		end
	elseif arg1 == "GE_WATCHBUDDY_SUCCESS"  then
		if LobbyFrameArchiveFrame:IsShown() and ForFrameName == "LobbyFrameArchiveFrame" then
			if ArchiveInfoFrame:IsShown() then
				ArchiveInfoFrame:Hide();
			end
			LobbyFrame:Hide();
			LoadLoopFrame:Hide();
			ToSeeFriendFrame:Show();
		end
	elseif arg1 == "GIE_WORLD_OPENPUSH" then
		if LobbyFrame:IsShown() then
			UpdateShareMapProcess();
		end
	elseif arg1 == "GIE_NET_CHANGE" then
		if UseNetType ~= 0 and (ShareingMapIndex ~= 0 or IsLoadingWorldList()) then
			local netState = ClientMgr:getNetworkState();
			if netState ==  0 then
				ShowGameTips(DefMgr:getStringDef(12), 3)
				if isSharingOWorld then
					PauseShare(ShareingMapIndex);
				end
				if IsLoadingWorldList then
					PauseLoadList();
					if LobbyFrameArchiveFrame:IsShown() then
						UpdateArchive();
						
						--设置高亮
						if SelectArchiveIndex == 0 then
							SetHightLightArchiveBtn(nil);
						else
							local btnName = "ArchiveBtn"..SelectArchiveIndex;
							SetHightLightArchiveBtn(btnName);
						end
					elseif LobbyFrameMoreGame:IsShown() then
						local name = LobbyFrameMoreGameAttentionBtnName:GetText();
						if string.find(name, "我的关注") then
							UpdateMoreGameShareInfo();
						else
							UpdateMoreGameAttentionInfo();
						end
					end
				end
			end
		end
	elseif arg1 == "GIE_APPBACK_PRESSED" then
		if SetMenuFrame:IsShown() then
			SetMenuFrame:Hide();
		else	
			SetMenuFrame:Show();
		end
	elseif arg1 == "GIE_WORLD_DOWNLOAD_COMPLETE" then
		local ge = GameEventQue:getCurEvent();
		for i=1, #(t_LoadWorldList) do
			if ge.body.downloadWorld.worldid == t_LoadWorldList[i].worldId then
				local bar = getglobal(t_LoadWorldList[i].name.."LoadProgressTex")
				bar:SetWidth(68);

				t_LoadWorldList[i].state = 4;

				local waitId = GetWaitLoadWorldList();		--有等待下载的任务，开始下载
				if waitId > 0 then			
					SetLoadWorldListState(waitId, 1);
					AccountManager:requestLoadWorld(waitId);
				else
					UseNetType = 0;
				end

				UpdateArchive();
				--设置高亮
				if SelectArchiveIndex == 0 then
					SetHightLightArchiveBtn(nil);
				else
					local btnName = "ArchiveBtn"..SelectArchiveIndex;
					SetHightLightArchiveBtn(btnName);
				end

				local name = LobbyFrameMoreGameAttentionBtnName:GetText();
				if string.find(name, "我的关注") then
					UpdateMoreGameShareInfo()
				else
					UpdateMoreGameAttentionInfo();
				end
				break;
			end
		end
	end
end

--获取最新的存档条index
function GetNewestIndex()
	for i=1, ARCHIVE_MAX do
		if i == AccountManager:getMyWorldList():getNumWorld() then
			return i;
		end
	end

	return nil;
end

function LobbyFrame_OnShow()
	GongNengFrame:Show();
	CurShowFrameName = "LobbyFrame";

	local model = 1;
	local player = BuddyManager:getSelectRole(model-1);
	player:attachUIModelView(LobbyFrameRoleView);
	LobbyFrameRoleView:playActorAnim(100100,0);
	LobbyFrameHeadBtnIcon:SetTexture("ui/roleicons/"..model..".png");
	
	LobbyFrameRoleName:SetText("OfflinePlayer");
	LobbyFrameUin:SetText(1);
	LobbyFrameJewelFont:SetText(0);

	if FirstOpenLobbyFrame then	--登录第一次打开主菜单，要初始化下载列表
		InitLoadWorldList();
		FirstOpenLobbyFrame = false;
	end
	UpdateArchive();
	SetDefaultArchiveBtn();
	UpdateShareMapProcess();

	if AccountManager:getMyWorldList():getNumWorld() == 0 then
		--"创建新的世界" 按钮闪烁
	end
end

function LobbyFrame_OnHide()
	GongNengFrame:Hide();
	
	if LoadLoopFrame:IsShown() then
		LoadLoopFrame:Hide();
	end

	local model = 1;
	local player = BuddyManager:getSelectRole(model-1);
	player:detachUIModelView(LobbyFrameRoleView);
end

function SetDefaultArchiveBtn()
	local archiveNum = 23;
	local recentlyTime = 0;
	local index = 0

	if IsDownWorld then		--选择刚下载的地图为默认
		for i=1, ARCHIVE_MAX do 
			if i <= archiveNum and i == AccountManager:getMyWorldList():getNumWorld() then
				index = i;
			end
		end
	else				--选择最近登录的地图为默认
		for i=1, ARCHIVE_MAX do 
			if i <= archiveNum and i <= AccountManager:getMyWorldList():getNumWorld() then
				local worldInfo = AccountManager:getMyWorldList():getWorldDesc(i-1);
				if worldInfo.logintime > recentlyTime then
					recentlyTime = worldInfo.logintime;
					index = i;
				end
			end
		end
	end
		
	if index > 0 then
		if index <= 3 then
			ArchiveBoxPlane:SetPoint("topleft", "ArchiveBox", "topleft", 0, 0);
			ArchiveBox:setCurOffsety(0);
		else
			local i = index - 3;
			ArchiveBoxPlane:SetPoint("topleft", "ArchiveBox", "topleft", 0, -i*(134+index) );
			ArchiveBox:setCurOffsety(-i*(134+index));
		end
		local btnName = "ArchiveBtn"..index;
		SetHightLightArchiveBtn(btnName);
	else
		SetHightLightArchiveBtn(nil);
	end
end

function UpdateArchive()
	local playerArchiveNum = 23;

	--设置滚动层大小
	local archiveNum = AccountManager:getMyWorldList():getNumWorld();
	if archiveNum < 3 then
		archiveNum = 3;
	end
	ArchiveBoxPlane:SetSize(588,archiveNum*(134+archiveNum));

	--更新存档信息
	for i=1, ARCHIVE_MAX do 
		local archiveBtn 	= getglobal("ArchiveBtn"..i);
		local slidingFrame 	= getglobal("ArchiveBtn"..i.."SlidingFrame");
		local shareIcon 	= getglobal("ArchiveBtn"..i.."ShareIcon");
		local bkg		= getglobal("ArchiveBtn"..i.."Bkg");

		if i <= playerArchiveNum then
			archiveBtn:Show();
			if IsNeedReset then
				slidingFrame:resetOffsetPos();
			end
			if i <= AccountManager:getMyWorldList():getNumWorld() then
				archiveBtn:Show();
				UpdateArchiveBtnInfo(i);
			else
				archiveBtn:Hide();
			end
			
		else
			archiveBtn:Hide();
		end
	end
	
	if AccountManager:getMyWorldList():getNumWorld() > 0 then
		LobbyFrameArchiveFrameStartBtnNormal:SetGray(false);
		LobbyFrameArchiveFrameStartBtn:Enable();	
	else
		LobbyFrameArchiveFrameStartBtnNormal:SetGray(true);
		LobbyFrameArchiveFrameStartBtn:Disable();
	end
end

--把选中的设置高亮
function SetHightLightArchiveBtn(btnName)
	if btnName ~= nil then
		local archive = getglobal(btnName);
		SelectArchiveIndex = archive:GetClientID();
	end

	for i=1,AccountManager:getMyWorldList():getNumWorld() do
		local worldInfo = AccountManager:getMyWorldList():getWorldDesc(i-1);

		local shareIcon = getglobal("ArchiveBtn"..i.."ShareIconNormal");
		local modelIcon = getglobal("ArchiveBtn"..i.."SlidingFrameContentModelIcon");
		local nameRich	= getglobal("ArchiveBtn"..i.."SlidingFrameContentName");
		local headIcon 	= getglobal("ArchiveBtn"..i.."SlidingFrameContentHeadIcon");
		local timeFont	= getglobal("ArchiveBtn"..i.."SlidingFrameContentTime");
		local bkg	= getglobal("ArchiveBtn"..i.."SlidingFramebg112Bkg");
		
		shareIcon:SetGray(true);
		modelIcon:SetGray(true);
		headIcon:SetGray(true);
		nameRich:SetText(worldInfo.worldname, 96, 96, 96);
		timeFont:SetTextColor(96,96,96);
	end

	if SelectArchiveIndex == 0 or btnName == nil then return; end
	local worldInfo = AccountManager:getMyWorldList():getWorldDesc(SelectArchiveIndex-1);

	local shareIcon = getglobal(btnName.."ShareIconNormal");
	local modelIcon = getglobal(btnName.."SlidingFrameContentModelIcon");
	local nameRich	= getglobal(btnName.."SlidingFrameContentName");
	local headIcon 	= getglobal(btnName.."SlidingFrameContentHeadIcon");
	local timeFont	= getglobal(btnName.."SlidingFrameContentTime");
	local bkg	= getglobal(btnName.."SlidingFramebg112Bkg");

	shareIcon:SetGray(false);
	modelIcon:SetGray(false);
	headIcon:SetGray(false);
	nameRich:SetText(worldInfo.worldname, 255, 230, 67);
	timeFont:SetTextColor(255,230,67);
end

function UpdateArchiveBtnInfo(index)
	local worldInfo = AccountManager:getMyWorldList():getWorldDesc(index-1);

	local shareIcon		= getglobal("ArchiveBtn"..index.."ShareIcon");
	local modelIcon 	= getglobal("ArchiveBtn"..index.."SlidingFrameContentModelIcon");
	local nameRich 		= getglobal("ArchiveBtn"..index.."SlidingFrameContentName");
	local headIcon 		= getglobal("ArchiveBtn"..index.."SlidingFrameContentHeadIcon");
	local timeFont		= getglobal("ArchiveBtn"..index.."SlidingFrameContentTime");
	local loadDesc		= getglobal("ArchiveBtn"..index.."SlidingFrameContentLoadDesc");
	local bkg		= getglobal("ArchiveBtn"..index.."SlidingFramebg112Bkg");
	local delBtn		= getglobal("ArchiveBtn"..index.."Delete");			--删除存档
	local shareBtn		= getglobal("ArchiveBtn"..index.."Share");			--分享存档
	local authorBtn		= getglobal("ArchiveBtn"..index.."Author");			--查看作者
	local calUpload		= getglobal("ArchiveBtn"..index.."CancelUpload");		--取消上传
	local uploadBtn 	= getglobal("ArchiveBtn"..index.."Upload");			--上传
	local pauseBtn		= getglobal("ArchiveBtn"..index.."UploadPause");		--暂停上传
	local cancelBtn 	= getglobal("ArchiveBtn"..index.."Cancel");			--取消分享
	local updateBtn 	= getglobal("ArchiveBtn"..index.."Update");			--更新上传
	local loadBtn 		= getglobal("ArchiveBtn"..index.."Load");			--下载
	local pauseLoad 	= getglobal("ArchiveBtn"..index.."LoadPause");			--暂停下载
	local proBkg		= getglobal("ArchiveBtn"..index.."ProgressBarBkg");		--上传进度条背景
	local bar		= getglobal("ArchiveBtn"..index.."UploadProgressTex");		--上传进度条
	local loadBkg		= getglobal("ArchiveBtn"..index.."LoadProgressBarBkg");		--下载进度条背景
	local loadBar		= getglobal("ArchiveBtn"..index.."LoadProgressTex");		--下载进度条

	local slidingFrame = getglobal("ArchiveBtn"..index.."SlidingFrame");

	if worldInfo.open == 1 then
		shareIcon:Show();
	else
		shareIcon:Hide();
	end

	if worldInfo.realowneruin ~= 0 and worldInfo.owneruin ~= worldInfo.realowneruin then   		--下载别人的地图
		if not IsInLoadWorldList(worldInfo.worldid) or GetLoadWorldListState(worldInfo.worldid) == 4 then	
			authorBtn:Show();
			timeFont:Show();
			loadBtn:Hide();
			pauseLoad:Hide();
			loadBkg:Hide();
			loadBar:Hide();
			loadDesc:Hide();	
		else		
			authorBtn:Hide();
			timeFont:Hide();
			loadDesc:Show();
			loadBkg:Show();
			loadBar:Show();			
			if GetLoadWorldListState(worldInfo.worldid) == 1 or GetLoadWorldListState(worldInfo.worldid) == 2 then
				pauseLoad:Show();
				loadBtn:Hide();
				if GetLoadWorldListState(worldInfo.worldid) == 2 then
					loadDesc:SetText("等待下载");
				end
			elseif GetLoadWorldListState(worldInfo.worldid) == 3 then
				loadBtn:Show();
				pauseLoad:Hide();

				local process = AccountManager:checkLoadWorld(worldInfo.worldid);
				local text = "暂停下载："..process.."%";
				loadDesc:SetText(text);
			end
		end

		delBtn:Show();
		loadBtn:Show();

		proBkg:Hide();
		bar:Hide();

		shareBtn:Hide();		
		cancelBtn:Hide();
		updateBtn:Hide();
		calUpload:Hide();
		uploadBtn:Hide();
		pauseBtn:Hide();
		bkg:SetColor(255, 187, 126);	
	else											--自己的地图
		local state = worldInfo.open;		--三种状态未分享、分享中、分享
		if worldInfo.open == 2 or worldInfo.open == 3 then		--分享中

			delBtn:Hide();
			shareBtn:Hide();
			cancelBtn:Hide();
			updateBtn:Hide();
			calUpload:Show();
			
			proBkg:Show();
			bar:Show();
			if worldInfo.open == 2 then
				uploadBtn:Hide();
				pauseBtn:Show();
			else					--暂停分享
				uploadBtn:Show();
				pauseBtn:Hide();
			end
		elseif worldInfo.open == 1 then		--已分享

			delBtn:Hide();	
			calUpload:Hide();
			uploadBtn:Hide();
			pauseBtn:Hide();
			shareBtn:Hide();
			cancelBtn:Show();
			updateBtn:Show();
			proBkg:Hide();
			bar:Hide();
		elseif worldInfo.open == 0 then 	--未分享
			delBtn:Show();
			shareBtn:Show();
			cancelBtn:Hide();
			updateBtn:Hide();
			calUpload:Hide();
			uploadBtn:Hide();
			pauseBtn:Hide();
			proBkg:Hide();
			bar:Hide();
		end
		timeFont:Show();
		loadDesc:Hide();
		authorBtn:Hide();
		loadBtn:Hide();
		pauseLoad:Hide();
		loadBkg:Hide();
		loadBar:Hide();
		bkg:SetColor(255, 255, 255);
	end

	local time = "上次登录   ";
	if worldInfo.worldtype == 0 then
		modelIcon:SetTexUV(822, 84, 76, 76);
	--	time = time.."世界探索";
	elseif worldInfo.worldtype == 1 then
		modelIcon:SetTexUV(901, 84, 76, 76);
	--	time = time.."创造世界";
	end

	local name = worldInfo.worldname;
	nameRich:SetText(name, 255, 230, 67);
	if nameRich:GetTextLines() >  1 then
		nameRich:SetPoint("left", modelIcon:GetName(), "right", 10, 0);
	else
		nameRich:SetPoint("left", modelIcon:GetName(), "right", 10, 25);
	end
	
	local h = AccountManager:getRoleIcon(worldInfo.createdata.rolemodel);
	headIcon:SetTextureHuires(h);

	if worldInfo.logintime == 0 then
		timeFont:SetText(time.."未登录过");
	else
		local curTime 	= os.time();
		local times	= math.floor(worldInfo.logintime/86400) * 86400
		if curTime - times >= 86400 then		--大于一天，显示日期天数。
			if GetApartDay(curTime, times) == 1 then
				timeFont:SetText(time.."昨天");
			else
				timeFont:SetText(time..GetApartDay(curTime, times).."天前");
			end
		--	timeFont:SetText(time..os.date("%x", worldInfo.logintime));
		else
			timeFont:SetText(time..os.date("%H", worldInfo.logintime)..":"..os.date("%M", worldInfo.logintime));
		end
	end
end

function GetApartDay(time1, time2)
	local day = math.floor( (time1-time2)/86400 );
	if day > 7 then day = 7 end;
	return day;
end

local t_process = {0, 0.1, 0.45, 0.55, 0.65, 0.7, 0.75, 0.8, 0.9, 0.95, 1};
--更新上传进度
function UpdateShareMapProcess()
	for i=1, ARCHIVE_MAX do 
		if i <= AccountManager:getMyWorldList():getNumWorld() then
			local worldInfo = AccountManager:getMyWorldList():getWorldDesc(i-1);
			local bar = getglobal("ArchiveBtn"..i.."UploadProgressTex");
			
			if worldInfo.open == 2 or worldInfo.open == 3 then				
				local type = worldInfo.openpushtype+1;
				local process = t_process[type] + worldInfo.openpushprocess*(t_process[type+1]-t_process[type])/100;
				bar:SetWidth(68*process);
			elseif worldInfo.open == 0 or worldInfo.open == 1 then
				bar:SetWidth(0);
			end
		end
	end
end

function LobbyFrame_OnUpdate()
	--更新下载进度
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].state == 1 then
			local bar = getglobal(t_LoadWorldList[i].name.."LoadProgressTex")
			local loadDesc = getglobal(t_LoadWorldList[i].name.."SlidingFrameContentLoadDesc");
	
			local process = AccountManager:getLoadProgress();
			bar:SetWidth(0.68*process);
			loadDesc:SetText("正在下载："..process.."%");
			break;
		end
	end
end

function LobbyFrameCreateNewWorldBtn_OnClick()
    MiniWorldCleanClickedEnter = true;
    if BackgroundFrame ~= nil then BackgroundFrame:Show(); end
    if LobbyFrameArchiveFrame ~= nil then LobbyFrameArchiveFrame:Hide(); end
    if LobbyFrameMoreGame ~= nil then LobbyFrameMoreGame:Hide(); end
    if LobbyFrameRoleInfo ~= nil then LobbyFrameRoleInfo:Hide(); end
    if LobbyFrame ~= nil then LobbyFrame:Hide(); end
    if GongNengFrame ~= nil then GongNengFrame:Hide(); end
    if CreateWorldFrame ~= nil then CreateWorldFrame:Show(); end
    CurShowFrameName = "CreateWorldFrame";
end

function LobbyFrameStartBtn_OnClick()
    MiniWorldCleanClickedEnter = true;
    MiniWorldCleanRoleSelected = true;
    MiniWorldCleanStartOfflineWorld(0, "aaa");
end

--商城
function LobbyFrameCollectBtn_OnClick()
--	ClientMgr:changeNetState(0);
--	LobbyFrame:Hide();
--	StoreFrame:Show();
end

--更多游戏
function LobbyFrameMoreGameBtn_OnClick()
	if LobbyFrameMoreGame:IsShown() then
		LobbyFrameMoreGame:Hide();
		LobbyFrameArchiveFrame:Show();
	else
		if AccountManager:getWarchOwNum() <= 0 and not CanUseNet() then	--要请求观察列表，但网络被占用
			return;
		end
		if LobbyFrameArchiveFrame:IsShown() then
			LobbyFrameArchiveFrame:Hide();
		end
		if LobbyFrameRoleInfo:IsShown() then
			LobbyFrameRoleInfo:Hide();
		end
		if LoadLoopFrame:IsShown() then
			LoadLoopFrame:Hide();
		end
		LobbyFrameMoreGame:Show();
		LobbyFrameMoreGameRankBtn:Show();
		LobbyFrameMoreGameTypeBtn:Show();
		LobbyFrameMoreGameAttentionBtnName:SetText("我的关注");
	end
end

function LobbyFrameHeadBtn_OnClick()
	if LobbyFrameArchiveFrame:IsShown() then
		LobbyFrameArchiveFrame:Hide();
		if LoadLoopFrame:IsShown() then
			LoadLoopFrame:Hide();
		end
		LobbyFrameRoleInfo:Show()
	elseif LobbyFrameRoleInfo:IsShown() then
		LobbyFrameRoleInfo:Hide();
		LobbyFrameArchiveFrame:Show();		
	elseif LobbyFrameMoreGame:IsShown() then
	--	LobbyFrameMoreGame:Hide();
	--	LobbyFrameArchiveFrame:Show();	
	end
end

function LobbyFrameBackBtn_OnClick()
	LobbyFrameRoleInfo:Hide();
	LobbyFrameArchiveFrame:Show();
end

--删除存档
function ArchiveDelete_OnClick()
	if not CanUseNet() then
		return;
	end

	local clientId = this:GetParentFrame():GetClientID();
	if clientId > 0 then
		local worldInfo = AccountManager:getMyWorldList():getWorldDesc(clientId-1);
		local process = AccountManager:checkLoadWorld(worldInfo.worldid);
		if GetLoadWorldListState(worldInfo.worldid) > 0 and GetLoadWorldListState(worldInfo.worldid) ~= 4 then
			IsNeedReset = true;
			MessageBox(1, DefMgr:getStringDef(16));
			MessageBoxFrame:SetClientUserData(0, clientId);
			MessageBoxFrame:SetClientString( "删除未下载完成地图" );
		else
			IsNeedReset = true;
			MessageBox(1, DefMgr:getStringDef(17));
			MessageBoxFrame:SetClientUserData(0,clientId);
			MessageBoxFrame:SetClientString( "删除地图" );
		end
	end
end

--放弃上传
function ArchiveCancelUpload_OnClick()
	local clientId = this:GetParentFrame():GetClientID();
	if clientId > AccountManager:getMyWorldList():getNumWorld() then return end

	local worldInfo = AccountManager:getMyWorldList():getWorldDesc(clientId-1);
	IsNeedReset = false;
	ShareingMapIndex = 0;
	UseNetType = 0;
	AccountManager:requestAbortOpenWorld(worldInfo.worldid);
end

--分享存档
function ArchiveShare_OnClick()
	if not CanUseNet() then
		return;
	end

	local clientId = this:GetParentFrame():GetClientID();
	if clientId > AccountManager:getMyWorldList():getNumWorld() then return end

	local netState = ClientMgr:getNetworkState();
	if netState == 0 then
		ShowGameTips(DefMgr:getStringDef(18), 3);
	elseif netState == 2 then		
		if clientId > 0 then
			MessageBox(2, DefMgr:getStringDef(21));
			MessageBoxFrame:SetClientUserData(0, clientId);
			MessageBoxFrame:SetClientString( "网络提示" );
		end
	else
		IsNeedReset = false;
		local bar = getglobal("ArchiveBtn"..clientId.."UploadProgressTex");
		bar:SetWidth(0);
		ShareMap(clientId);
	end
end

function ShareMap(clientId)
	local worldInfo = AccountManager:getMyWorldList():getWorldDesc(clientId-1);	
	IsNeedReset = false;
	
	if AccountManager:requestOpenOWorld(worldInfo.worldid) then
		UseNetType = 1;
		ShareingMapIndex = clientId;
	else
		UseNetType = 0;
	end
end

--上传地图
function ArchiveUpload_OnClick()
	if not CanUseNet() then
		return;
	end
	local clientId = this:GetParentFrame():GetClientID();
	if clientId > AccountManager:getMyWorldList():getNumWorld() then return end

	local netState = ClientMgr:getNetworkState();
	if netState == 0 then
		ShowGameTips(DefMgr:getStringDef(18), 3);
	elseif netState == 2 then		
		if clientId > 0 then
			MessageBox(2, DefMgr:getStringDef(21));
			MessageBoxFrame:SetClientUserData(0, clientId);
			MessageBoxFrame:SetClientString( "继续分享" );
		end
	else
		UseNetType = 1;
		ContunueShare(clientId);
	end
end

--继续上传
function ContunueShare(clientId)
	local worldInfo = AccountManager:getMyWorldList():getWorldDesc(clientId-1);
	AccountManager:requestContinueOpenWorld(worldInfo.worldid);
	ShareingMapIndex = clientId;
end

--暂停上传地图
function ArchiveUploadPause_OnClick()
	local clientId = this:GetParentFrame():GetClientID();
	if clientId > AccountManager:getMyWorldList():getNumWorld() then return end

	PauseShare(clientId);
end

function PauseShare(clientId)
	local worldInfo = AccountManager:getMyWorldList():getWorldDesc(clientId-1);
	AccountManager:requestPauseOpenWorld(worldInfo.worldid);

	ShareingMapIndex = 0;	
	UseNetType = 0;
end

--取消分享
function ArchiveCancel_OnClick()
	local clientId = this:GetParentFrame():GetClientID();
	if clientId > AccountManager:getMyWorldList():getNumWorld() then return end

	local worldInfo = AccountManager:getMyWorldList():getWorldDesc(clientId-1);
	IsNeedReset = false;
	if AccountManager:requestOpenOWorld(worldInfo.worldid, false) then
		ShowGameTips("取消了分享，小伙伴们看不到这个地图了", 3);
	end
end

--上传更新
function ArchiveUpdate_OnClick()
	if not CanUseNet() then
		return;
	end

	--实质上先删掉这个分享存档 再重新分享
	local clientId = this:GetParentFrame():GetClientID();
	if clientId > AccountManager:getMyWorldList():getNumWorld() then return end

	local netState = ClientMgr:getNetworkState();
	if netState == 0 then
		ShowGameTips(DefMgr:getStringDef(20), 3);
	elseif netState == 2 then		
		if clientId > 0 then
			MessageBox(2, DefMgr:getStringDef(21));
			MessageBoxFrame:SetClientUserData(0, clientId);
			MessageBoxFrame:SetClientString( "网络提示" );
		end
	else
		local worldInfo = AccountManager:getMyWorldList():getWorldDesc(clientId-1);	
		if AccountManager:requestOpenOWorld(worldInfo.worldid, false) then
			IsNeedReset = false;
			ShareMap(clientId);
		end
	end

end

--查看作者
function ArchiveAuthor_OnClick()
	if not CanUseNet() then
		return;
	end

	local clientId = this:GetParentFrame():GetClientID();
	local worldInfo = AccountManager:getMyWorldList():getWorldDesc(clientId-1);
	if not AccountManager:requestBuddyWatch(worldInfo.realowneruin) then
		ShowGameTips("查看失败", 3);		
	else
		ForFrameName = "LobbyFrameArchiveFrame";
		LoadLoopFrame:Show();
	end
end

--下载
function ArchiveLoad_OnClick()
	local clientId = this:GetParentFrame():GetClientID();
	local worldInfo = AccountManager:getMyWorldList():getWorldDesc(clientId-1);

	if IsLoadingWorldList() or ClientMgr:isSharingOWorld() then				--有任务在下载or别的地方占用了网络, 设置状态为等待下载
		SetLoadWorldListState(worldInfo.worldid, 2);	
	else
		local netState = ClientMgr:getNetworkState();
		if netState == 0 then
			ShowGameTips(DefMgr:getStringDef(19), 3);
		elseif netState == 2 then		
			if clientId > 0 then
				MessageBox(2, DefMgr:getStringDef(21));
				MessageBoxFrame:SetClientUserData(0, clientId);
				MessageBoxFrame:SetClientString( "恢复下载地图网络提示" );
			end
		else
			UseNetType = 1;
			SetLoadWorldListState(worldInfo.worldid, 1);
			AccountManager:requestLoadWorld(worldInfo.worldid);
		end
	end
	IsNeedReset = false;
	UpdateArchiveBtnInfo(clientId);
end

--暂停下载
function ArchiveLoadPause_OnClick()
	local clientId = this:GetParentFrame():GetClientID();
	local worldInfo = AccountManager:getMyWorldList():getWorldDesc(clientId-1);

	AccountManager:abortLoadWorld();
	SetLoadWorldListState(worldInfo.worldid, 3);

--[[
	local waitId = GetWaitLoadWorldList();
	if waitId > 0 then				--有在等待下载的任务，状态变为下载
		SetLoadWorldListState(waitId, 1);
		AccountManager:requestLoadWorld(waitId);
	else
		UseNetType = 0;
	end
]]

	local waitId = GetWaitLoadWorldList();
	if waitId <0 then				--有在等待下载的任务，状态变为下载
		UseNetType = 0;
	end

	IsNeedReset = false
	UpdateArchiveBtnInfo(clientId);
end

--下载网络错误
function LoadWorldNetFail()
	ShowGameTips(DefMgr:getStringDef(22), 3);
	PauseLoadWorld();
	local waitId = GetWaitLoadWorldList();
	if waitId > 0 then				--有在等待下载的任务，状态变为下载
		SetLoadWorldListState(waitId, 1);
		AccountManager:requestLoadWorld(waitId);
	else
		UseNetType = 0;
	end
	UpdateArchive();
	UpdateMoreGameShareInfo();
end

function LobbyFrameArchiveFrame_OnShow()
	GongNengFrame:Show()
	CurShowFrameName = "LobbyFrame";
	LobbyFrameBackBtn:Hide();

	LobbyFrameMoreGameBtn:Show();
	LobbyFrameMoreGameBtnName:SetText("更 多\n游 戏");
	
	UpdateArchive();
	SetDefaultArchiveBtn();
	UpdateShareMapProcess();
end

function LobbyFrameArchiveFrame_OnHide()
	GongNengFrame:Hide();
end

function MainMenuStage_Enter()
	if AccountManager:isLogin() then
		AccountManager:updateWorld();
		BackgroundFrame:Show();
		LobbyFrame:Show();
		LobbyFrameRoleInfo:Hide();
		LobbyFrameMoreGame:Hide();
		LobbyFrameArchiveFrame:Show();
	else
		LoginScreenFrame:Show();
	end
end

function MainMenuStage_Quit()
	LoadingFrame:Hide();
	BackgroundFrame:Hide();
end

function SurviveGame_Enter()
	PlayMainFrame:Show()
	if CurMainPlayer:getCurShortcut() == 0 then
		CurMainPlayer:setCurShortcut(0);
	end
end

function SurviveGame_Quit()
	PlayMainFrame:Hide()
end

------------------------------------------------LobbyFrameRoleInfo--------------------------------------------------------
local CurShowShareMapIndex = -1;
local t_shareMapInfo = {};

function LobbyFrameRoleInfo_OnLoad()
	this:setUpdateTime(0.05);
end
function LobbyFrameRoleInfo_OnShow()
	GongNengFrame:Show();
	CurShowFrameName = "LobbyFrame";

	LobbyFrameMoreGameBtn:Hide();
	LobbyFrameBackBtn:Show();
	UpdateShareMapInfoTable();
	if #(t_shareMapInfo) > 0 then
		SetSharpMapShowState(true);
		CurShowShareMapIndex = 1;
		UpdateShareMap(CurShowShareMapIndex);
	else
		SetSharpMapShowState(false);
	end

	UpdateRoleInfo();

	LobbyFrameMoreGameBtnName:SetText("更 多\n游 戏");
end

function SetSharpMapShowState(state)
	if state then
		LobbyFrameRoleInfoMapBkg:Show();
		LobbyFrameRoleInfoRemarkBkg:Show();
		LobbyFrameRoleInfoGameModel:Show();
		LobbyFrameRoleInfoHeadIcon:Show();
		LobbyFrameRoleInfoTime:Show();
		LobbyFrameRoleInfoPraiseFont:Show();
		LobbyFrameRoleInfoMapPraiseIcon:Show();
		LobbyFrameRoleInfoMapPraiseNum:Show();
		LobbyFrameRoleInfoMapName:Show();
		LobbyFrameRoleInfoEdit:Show();
		LobbyFrameRoleInfoModificationBtn:Show();
	else
		LobbyFrameRoleInfoMapBkg:Hide();
		LobbyFrameRoleInfoRemarkBkg:Hide();
		LobbyFrameRoleInfoGameModel:Hide();
		LobbyFrameRoleInfoHeadIcon:Hide();
		LobbyFrameRoleInfoTime:Hide();
		LobbyFrameRoleInfoPraiseFont:Hide();
		LobbyFrameRoleInfoMapPraiseIcon:Hide();
		LobbyFrameRoleInfoMapPraiseNum:Hide();
		LobbyFrameRoleInfoMapName:Hide();
		LobbyFrameRoleInfoEdit:Hide();
		LobbyFrameRoleInfoModificationBtn:Hide();
		LobbyFrameRoleInfoLeftArrowBtn:Hide();
		LobbyFrameRoleInfoRightArrowBtn:Hide();
	end
end

function UpdateShareMapInfoTable()
	local num = AccountManager:getMyWorldList():getNumWorld();
	t_shareMapInfo = {};
	for i=1, num do
		local worldDesc = AccountManager:getMyWorldList():getWorldDesc(i-1);
		if worldDesc ~= nil and worldDesc.open == 1 then
			table.insert(t_shareMapInfo, worldDesc);
		end
	end
end

function UpdateRoleInfo()
	LobbyFrameRoleInfoAchiPoint:SetText(AccountManager:getAchievementPoints());
	local ratio = AccountManager:getAchievementFinishNum()/AchievementMgr:getAchievementSize();
	
	local text = string.format("%2.2f", ratio*100) .. "%";
	LobbyFrameRoleInfoAchiPercent:SetText(text);
	LobbyFrameRoleInfoAchiProgressBar:SetValue(ratio);

	LobbyFrameRoleInfoFlowerFont:SetText(0);
	LobbyFrameRoleInfoPraiseNum:SetText(0);
end

function LobbyFrameRoleInfo_OnHide()
	GongNengFrame:Hide();
end
--修改备注
function LobbyFrameRoleInfoModificationBtn_OnClick()
	if #(t_shareMapInfo) > 0 and CurShowShareMapIndex <= #(t_shareMapInfo) then
		local worldInfo = t_shareMapInfo[CurShowShareMapIndex];
		local text 	= LobbyFrameRoleInfoEdit:GetText();
		if AccountManager:requestMemoOWorld(worldInfo.worldid, text) then
			AccountManager:updateWorld();
			--修改成功;
		end
	end
end

function LobbyFrameRoleInfoLeftArrowBtn_OnClick()
	CurShowShareMapIndex = CurShowShareMapIndex - 1
	UpdateShareMap(CurShowShareMapIndex);
	if CurShowShareMapIndex == 1 then
		LobbyFrameRoleInfoLeftArrowBtn:Hide();
	end
end

function LobbyFrameRoleInfoRightArrowBtn_OnClick()
	CurShowShareMapIndex = CurShowShareMapIndex + 1;
	UpdateShareMap(CurShowShareMapIndex);
	if CurShowShareMapIndex == #(t_shareMapInfo) then
		LobbyFrameRoleInfoRightArrowBtn:Hide();
	end
end

function UpdateShareMap(index)
	if index > 1 then
		LobbyFrameRoleInfoLeftArrowBtn:Show();
	else
		LobbyFrameRoleInfoLeftArrowBtn:Hide();
	end

	if index < #(t_shareMapInfo) then
		LobbyFrameRoleInfoRightArrowBtn:Show();
	else
		LobbyFrameRoleInfoRightArrowBtn:Hide();
	end
	  
	local gameModel	= getglobal("LobbyFrameRoleInfoGameModel");
	local headIcon	= getglobal("LobbyFrameRoleInfoHeadIcon");
	local worldTime = getglobal("LobbyFrameRoleInfoTime");
	local mapName = getglobal("LobbyFrameRoleInfoMapName"); 
	if index > #(t_shareMapInfo) then
		gameModel:Hide();
		headIcon:Hide();
		worldTime:SetText("");
		mapName:Clear();
		LobbyFrameRoleInfoMapPraiseNum:SetText(0);
	else
		local worldInfo = t_shareMapInfo[index];
		gameModel:Show();
		headIcon:Show();

		local time = "";
		if worldInfo.worldtype == 0 then
			gameModel:SetTexUV(822, 84, 76, 76);
			time = time.."世界探索";
		elseif worldInfo.worldtype == 1 then
			gameModel:SetTexUV(901, 84, 76, 76);
			time = time.."创造世界";
		end

		local name = worldInfo.worldname;
		mapName:SetText(name, 255, 230, 67);
		if mapName:GetTextLines() >  1 then
			mapName:SetPoint("left", gameModel:GetName(), "right", 10, 10);
		else
			mapName:SetPoint("left", gameModel:GetName(), "right", 10, 27);
		end
		
		local h = AccountManager:getRoleIcon(worldInfo.createdata.rolemodel);
		headIcon:SetTextureHuires(h);

		local curTime = os.time();
		if curTime - worldInfo.logintime >= 86400 then
			worldTime:SetText(time.."："..os.date("%x", worldInfo.logintime));
		else
			worldTime:SetText(time.."："..os.date("%X", worldInfo.logintime));
		end

		LobbyFrameRoleInfoMapPraiseNum:SetText(worldInfo.credit);
		LobbyFrameRoleInfoEdit:SetText(worldInfo.memo);
	end	
end

--更新箭头
local changeSpeed = 2;
local changeOffset = changeSpeed
local curOffset = 0;
function LobbyFrameRoleInfo_OnUpdate()
	curOffset = curOffset + changeOffset;
	if curOffset > 15 then
		curOffset = 15;
		changeOffset = -changeSpeed*0.5;
	elseif curOffset <= 0 then
		curOffset = 0;
		changeOffset = changeSpeed;
	end

	if LobbyFrameRoleInfoLeftArrowBtn:IsShown() then
		LobbyFrameRoleInfoLeftArrowBtnNormal:SetPoint("right", "LobbyFrameRoleInfoMapBkg", "left", -(10+curOffset), 0);
	end
	if LobbyFrameRoleInfoRightArrowBtn:IsShown() then
		LobbyFrameRoleInfoRightArrowBtnNormal:SetPoint("left", "LobbyFrameRoleInfoMapBkg", "right", 10+curOffset, 0);
	end
end

function LobbyFrameRoleInfoAchievementBtn_OnClick()
--[[
	if AchievementFrame:IsShown() then
		AchievementFrame:Hide();
	else
		AchievementFrameType = 0;
		AchievementFrame:Show();
		AchievementFrame:SetPoint("center", "$parent", "center", 0, 0);
	end
]]
end

-----------------------------------------------LobbyFrameMoreGame----------------------------------------------------------
SHARE_LIST_MAX_NUM = 150;
RankFlag = 1;			--1默认 2推荐 3赞 4下载量 5最新
TypeFlag = 1;			--1综合 2生存 3创造
t_WatchOWWorld = {};		--查看分享的地图
t_LoadWathchOWWorld = {};	--下载分享的地图
t_AttentionWathchOWorld = {}; 	--关注的地图
BeginIndex = 1;			--t_WatchOWWorld从BeginIndex处开始取值
ShareListNeedReset = false;		--分享列表是否需要还原位置

function LobbyFrameMoreGame_OnLoad()
	this:RegisterEvent("GIE_OWWATCH_RESULT");
	this:RegisterEvent("GE_WATCHBUDDY_SUCCESS");
	this:RegisterEvent("GIE_ATTENTION_OWWATCH_RESULT");
end

function LobbyFrameMoreGame_OnEvent()
	if arg1 == "GIE_OWWATCH_RESULT" then
		if LoadLoopFrame:IsShown() then
			LoadLoopFrame:Hide();
		end

		local ge = GameEventQue:getCurEvent();
		if ge.body.owresult.result == 0 then
			ShowGameTips(DefMgr:getStringDef(23), 3);
		elseif ge.body.owresult.result == 1 then
			RemoveLoadComplete();			
		end
		UpdateWatchOw();
	elseif arg1 == "GE_WATCHBUDDY_SUCCESS" then
		--[[
		if LobbyFrameMoreGame:IsShown() and ForFrameName=="LobbyFrameMoreGame" then
			LoadLoopFrame:Hide();
			ArchiveInfoFrame:Show();
		end
		]]
		if LobbyFrameMoreGame:IsShown() and ForFrameName=="LobbyFrameMoreGame" then
			LoadLoopFrame:Hide();
			ArchiveInfoFrame:Hide();
			LobbyFrame:Hide();
			ToSeeFriendFrame:Show();
		end
	elseif arg1 == "GIE_ATTENTION_OWWATCH_RESULT" then
		if LoadLoopFrame:IsShown() then
			LoadLoopFrame:Hide();
		end

		local ge = GameEventQue:getCurEvent();
		if ge.body.attentionresult.result == 0 then
		--	ShowGameTips("", 3);
		elseif ge.body.owresult.result == 1 then
			LobbyFrameMoreGameRankBtn:Hide();
			LobbyFrameMoreGameTypeBtn:Hide();
			LobbyFrameMoreGameAttentionBtnName:SetText("返回列表");
			UpdateAttentionWatchOw();			
		end	
	end
end

--移除t_LoadWathchOWWorld
function RemoveLoadWathchOWWorld(myWorldId)
	for i=1, #(t_LoadWathchOWWorld) do 
		if AccountManager:isInMyWorld(myWorldId, t_LoadWathchOWWorld[i].worldid, t_LoadWathchOWWorld[i].shareVersion) then
			table.remove(t_LoadWathchOWWorld, i);
			break;
		end
	end
end

--更新t_WatchOWWorld
function UpdateWatchOw()
	t_WatchOWWorld = {};
	local num = AccountManager:getWarchOwNum();

	for i=1, num do
		local worldDesc = AccountManager:getWarchOwDesc(i-1);
		table.insert(t_WatchOWWorld, worldDesc);
	end

	UpdateMoreGameShareInfo();
end

--清除t_LoadWathchOWWorld已经下载完成的
function RemoveLoadComplete()
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].state == 4 then
			RemoveLoadWathchOWWorld(t_LoadWorldList[i].worldId)	
		end
	end
end

function LobbyFrameMoreGame_OnShow()
	GongNengFrame:Show();
	CurShowFrameName = "LobbyFrame";

	LobbyFrameMoreGameBtn:Show();
	LobbyFrameMoreGameBtnName:SetText(" 返 回\n主界面");
	if AccountManager:getWarchOwNum() <= 0 then
		if CanUseNet() then
			AccountManager:requestWatchOWList(RankFlag-1, TypeFlag-1);
			LoadLoopFrame:Show();
		end
	else
		UpdateMoreGameShareInfo();
	end
end

--根据下载地图的id和版本找到由此创建的最后一张地图id和clientId
function GetMyWorldId(owid, version)
	local worldId = 0;
	local clientId = 0;
	local num = AccountManager:getMyWorldList():getNumWorld();
	for i=1, num do
		local worldInfo = AccountManager:getMyWorldList():getWorldDesc(i-1);
		if AccountManager:isInMyWorld(worldInfo.worldid, owid, version) then
			worldId = worldInfo.worldid;
			clientId = i;
		end
	end

	return worldId, clientId;
end

--根据创建的地图id找到相应的下载地图存档条
function GetMoreGameShareBtn(myWorldId)
	local name = LobbyFrameMoreGameAttentionBtnName:GetText();
	for i=1, SHARE_LIST_MAX_NUM do
		local shareBtn 	= getglobal("ShareBtn"..i);
		local worldId = shareBtn:GetClientUserData(0);
		local version = shareBtn:GetClientUserData(1);

		if worldId > 0 then
			if AccountManager:isInMyWorld(myWorldId, worldId, version) then
				return shareBtn;
			end
		end
	end

	return nil;
end

--type 1t_WatchOWWorld 2t_AttentionWathchOWorld
--根据owid和version在相应的表中找到WorldDesc
function GetWorldDescForType(type, owid, version)
	if type == 1 then
		for i=1, #(t_WatchOWWorld) do
			if t_WatchOWWorld[i].worldid == owid and t_WatchOWWorld[i].shareVersion == version then
				return t_WatchOWWorld[i];
			end
		end
	elseif type == 2 then
		for i=1, #(t_AttentionWathchOWorld) do
			if t_AttentionWathchOWorld[i].worldid == owid and t_AttentionWathchOWorld[i].shareVersion == version then
				return t_AttentionWathchOWorld[i];
			end
		end
	end
	return nil
end

function GetWorldDescForWatchOWWorld()
	for i=BeginIndex, #(t_WatchOWWorld) do
		local canReturn = true;
		for j=1, #(t_LoadWathchOWWorld) do
			if t_LoadWathchOWWorld[j].worldid == t_WatchOWWorld[i].worldid and t_LoadWathchOWWorld[j].shareVersion == t_WatchOWWorld[i].shareVersion then
				canReturn = false;
			end
		end
		if canReturn then
			BeginIndex = i+1;
			return t_WatchOWWorld[i];
		end
	end

	return nil;
end

--更多游戏
function MoreGameSearchBtn_OnClick()
	local name = LobbyFrameMoreGameAttentionBtnName:GetText();
	if string.find(name, "我的关注") then
		AccountManager:requestWatchOWList(RankFlag-1, TypeFlag-1);
	else
		if AccountManager:requestWatchAttention() then
			LoadLoopFrame:Show();
		else
			ShowGameTips(DefMgr:getStringDef(24), 3);
		end
	end
	
end

--更新分享列表面板
function UpdateMoreGameShareInfo()
	local shareListNum = #(t_WatchOWWorld);

	ClientMgr:clientLog("--------------ShareInfoshareListNum:"..shareListNum);
	if ShareListNeedReset then
		ShareListBox:resetOffsetPos();
		ShareListNeedReset = false;
	end

	for i=1, SHARE_LIST_MAX_NUM do
		local shareBtn 		= getglobal("ShareBtn"..i);
		local slidingFrame      = getglobal("ShareBtn"..i.."SlidingFrame");
		local attentionBtn	= getglobal("ShareBtn"..i.."Attention");			--关注
		local calAttrentionBtn  = getglobal("ShareBtn"..i.."CalAttention");			--取消关注
		local modelIcon		= getglobal("ShareBtn"..i.."SlidingFrameContentModelIcon");	--存档类型
		local praiseNum		= getglobal("ShareBtn"..i.."SlidingFrameContentPraiseNum");	--赞数量
		local barBkg		= getglobal("ShareBtn"..i.."SlidingFrameContentProgressBarBkg");--进度条背景
		local bar		= getglobal("ShareBtn"..i.."SlidingFrameContentProgressTex");	--进度条
		local mapSize		= getglobal("ShareBtn"..i.."SlidingFrameContentSize");		--地图大小
		local downTime		= getglobal("ShareBtn"..i.."SlidingFrameContentDownTime");	--下载次数
		local mapName		= getglobal("ShareBtn"..i.."SlidingFrameContentName");		--地图名字
		local downBtnName	= getglobal("ShareBtn"..i.."SlidingFrameContentDownBtnName");	--下载按钮名字(下载、取消、继续下载)
		local flagIcon		= getglobal("ShareBtn"..i.."FlagIcon");				--标记图标
		local flagName 		= getglobal("ShareBtn"..i.."FlagIconName");			--标记名字
		
		slidingFrame:resetOffsetPos();
		flagIcon:Hide();
		flagName:SetText("");
		if i <= shareListNum then
			shareBtn:Show();
			shareBtn:SetPoint("topleft", "ShareListBoxPlane", "topleft", 0, (i-1)*140);			

			barBkg:Hide();
			bar:Hide();

			local worldDesc = t_WatchOWWorld[i];
			shareBtn:SetClientUserData(0, worldDesc.worldid);		
			shareBtn:SetClientUserData(1, worldDesc.shareVersion);

			if AccountManager:isAttentionWorld(worldDesc.worldid) then
				attentionBtn:Hide();
				calAttrentionBtn:Show();
			else
				attentionBtn:Show();
				calAttrentionBtn:Hide();
			end

			if worldDesc.worldtype == 0 then
				modelIcon:SetTexUV(822, 84, 76, 76);
			elseif worldDesc.worldtype == 1 then
				modelIcon:SetTexUV(901, 84, 76, 76);
			end
			praiseNum:SetText(worldDesc.credit);

			mapName:SetText(worldDesc.worldname, 255, 230, 67);
			if mapName:GetTextLines() >  1 then
				mapName:SetPoint("left", modelIcon:GetName(), "right", 10, 5);
			else
				mapName:SetPoint("left", modelIcon:GetName(), "right", 10, 20);
			end

			local myWorldId = GetMyWorldId(worldDesc.worldid, worldDesc.shareVersion);
			if myWorldId > 0 then
				local state = GetLoadWorldListState(myWorldId);
				ClientMgr:clientLog("--------------ShareInfoState:"..state);
				if state == 1 then
					barBkg:Show();
					bar:Show();
					downBtnName:SetText("取消");
					downBtnName:SetTextColor(253, 230, 66);	
				elseif state == 2 then
					barBkg:Show();
					bar:Show();
					downBtnName:SetText("取消");
					downBtnName:SetTextColor(253, 230, 66);
				elseif state == 3 then
					barBkg:Show();
					bar:Show();
					downBtnName:SetText("继续");
					downBtnName:SetTextColor(253, 230, 66);
				elseif state == 4 then
					bar:SetWidth(0);
					downBtnName:SetText("进入");
					downBtnName:SetTextColor(255, 255, 255);
				end
			else
				downBtnName:SetText("下载");
				downBtnName:SetTextColor(253, 230, 66);
			end

			mapSize:SetText(string.format("%2.2f", worldDesc.fileSize/1048576).."M");
		--	mapSize:SetText(worldDesc.fileSize);
			downTime:SetText(worldDesc.downloadNum);
			if worldDesc.flag == 1 then
				
			elseif worldDesc.flag == 2 then
				flagIcon:Show();
				flagName:SetText("推荐");
			elseif worldDesc.flag == 4 then
				flagIcon:Show();
				flagName:SetText("赞");
			elseif worldDesc.flag == 8 then
				flagIcon:Show();
				flagName:SetText("最热");
			elseif worldDesc.flag == 16 then
				flagIcon:Show();
				flagName:SetText("最新");
			end
		else
			shareBtn:Hide();
			shareBtn:SetClientUserData(0, 0);
			shareBtn:SetClientUserData(1, 0);
		end
	end

	if shareListNum > 0 then
		ShareListBoxSearchBtn:Show();
	else
		ShareListBoxSearchBtn:Hide();
	end
	ShareListBoxSearchBtn:SetPoint("top", "ShareListBoxPlane", "top", 0, shareListNum*140);
	if (shareListNum+1) <= 3 then
		ShareListBoxPlane:SetSize(588, 410);
	else
		ShareListBoxPlane:SetSize(588, (shareListNum+1)*140 - 10);
	end

--[[
	local shareListNum = #(t_WatchOWWorld);
	local loadListNum = #(t_LoadWathchOWWorld);
	local shareShowNum = shareListNum + loadListNum;
	BeginIndex = 1;

	ClientMgr:clientLog("--------------ShareInfoloadListNum:"..loadListNum);
	if ShareListNeedReset then
		ShareListBox:resetOffsetPos();
		ShareListNeedReset = false;
	end

	for i=1, SHARE_LIST_MAX_NUM do
		local shareBtn 		= getglobal("ShareBtn"..i);
		local slidingFrame      = getglobal("ShareBtn"..i.."SlidingFrame");
		local attentionBtn	= getglobal("ShareBtn"..i.."Attention");			--关注
		local calAttrentionBtn  = getglobal("ShareBtn"..i.."CalAttention");			--取消关注
		local modelIcon		= getglobal("ShareBtn"..i.."SlidingFrameContentModelIcon");	--存档类型
		local praiseNum		= getglobal("ShareBtn"..i.."SlidingFrameContentPraiseNum");	--赞数量
		local barBkg		= getglobal("ShareBtn"..i.."SlidingFrameContentProgressBarBkg");--进度条背景
		local bar		= getglobal("ShareBtn"..i.."SlidingFrameContentProgressTex");	--进度条
		local mapSize		= getglobal("ShareBtn"..i.."SlidingFrameContentSize");		--地图大小
		local downTime		= getglobal("ShareBtn"..i.."SlidingFrameContentDownTime");	--下载次数
		local mapName		= getglobal("ShareBtn"..i.."SlidingFrameContentName");		--地图名字
		local downBtnName	= getglobal("ShareBtn"..i.."SlidingFrameContentDownBtnName");	--下载按钮名字(下载、取消、继续下载)
		local recommend		= getglobal("ShareBtn"..i.."RecommendIcon");			--推荐icon
		local hotIcon		= getglobal("ShareBtn"..i.."HotIcon");				--热度icon
		
		slidingFrame:resetOffsetPos();
		recommend:Hide();
		hotIcon:Hide();
		if i <= loadListNum then
			shareBtn:Show();
			shareBtn:SetPoint("topleft", "ShareListBoxPlane", "topleft", 0, (i-1)*140);
			

			barBkg:Show();
			bar:Show();

			local worldDesc = t_LoadWathchOWWorld[i];
			shareBtn:SetClientUserData(0, worldDesc.worldid);		
			shareBtn:SetClientUserData(1, worldDesc.shareVersion);

			if AccountManager:isAttentionWorld(worldDesc.worldid) then
				attentionBtn:Hide();
				calAttrentionBtn:Show();
			else
				attentionBtn:Show();
				calAttrentionBtn:Hide();
			end

			if worldDesc.worldtype == 0 then
				modelIcon:SetTexUV(822, 84, 76, 76);
			elseif worldDesc.worldtype == 1 then
				modelIcon:SetTexUV(901, 84, 76, 76);
			end
			praiseNum:SetText(worldDesc.credit);

			mapName:SetText(worldDesc.worldname, 255, 230, 67);
			if mapName:GetTextLines() >  1 then
				mapName:SetPoint("left", modelIcon:GetName(), "right", 10, 5);
			else
				mapName:SetPoint("left", modelIcon:GetName(), "right", 10, 20);
			end

			ClientMgr:clientLog("--------------loadworldId:"..worldDesc.worldid.."---version:"..worldDesc.shareVersion);
			local myWorldId = GetMyWorldId(worldDesc.worldid, worldDesc.shareVersion);
			ClientMgr:clientLog("--------------ShareInfomyWorldId:"..myWorldId);
			if myWorldId > 0 then
				local state = GetLoadWorldListState(myWorldId);
				ClientMgr:clientLog("--------------ShareInfoState:"..state);
				if state == 1 then
					downBtnName:SetText("取消");
					downBtnName:SetTextColor(253, 230, 66);	
				elseif state == 2 then
					downBtnName:SetText("取消");
					downBtnName:SetTextColor(253, 230, 66);
				elseif state == 3 then
					downBtnName:SetText("继续");
					downBtnName:SetTextColor(253, 230, 66);
				elseif state == 4 then
					barBkg:Hide();
					bar:Hide();
					bar:SetWidth(0);
					downBtnName:SetText("进入");
					downBtnName:SetTextColor(255, 255, 255);
				end
			end

			downTime:SetText(worldDesc.downloadNum);
			if worldDesc.flag == 1 then
				recommend:Show();
			elseif worldDesc.flag == 2 then
				hotIcon:Show();
			end
		elseif i <= loadListNum+shareListNum then
			local worldDesc = GetWorldDescForWatchOWWorld();
			if worldDesc ~= nil then
				shareShowNum = i;
				shareBtn:Show();
				shareBtn:SetPoint("topleft", "ShareListBoxPlane", "topleft", 0, (i-1)*140);
				shareBtn:SetClientUserData(0, worldDesc.worldid);		
				shareBtn:SetClientUserData(1, worldDesc.shareVersion);

				barBkg:Hide();
				bar:Hide();
				bar:SetWidth(0);

				if AccountManager:isAttentionWorld(worldDesc.worldid) then
					attentionBtn:Hide();
					calAttrentionBtn:Show();
				else
					attentionBtn:Show();
					calAttrentionBtn:Hide();
				end

				if worldDesc.worldtype == 0 then
					modelIcon:SetTexUV(822, 84, 76, 76);
				elseif worldDesc.worldtype == 1 then
					modelIcon:SetTexUV(901, 84, 76, 76);
				end
				praiseNum:SetText(worldDesc.credit);
				local uin = worldDesc.owneruin;

				mapName:SetText(worldDesc.worldname, 255, 230, 67);
				if mapName:GetTextLines() >  1 then
					mapName:SetPoint("left", modelIcon:GetName(), "right", 10, 5);
				else
					mapName:SetPoint("left", modelIcon:GetName(), "right", 10, 20);
				end

				downBtnName:SetText("下载");
				downBtnName:SetTextColor(253, 230, 66);
				downTime:SetText(worldDesc.downloadNum);

				if worldDesc.flag == 1 then
					recommend:Show();
				elseif worldDesc.flag == 2 then
					hotIcon:Show();
				end
			else				
				shareBtn:Hide();
				shareBtn:SetClientUserData(0, 0);
				shareBtn:SetClientUserData(1, 0);
			end
		else
			shareBtn:Hide();
			shareBtn:SetClientUserData(0, 0);
			shareBtn:SetClientUserData(1, 0);
		end
	end

	if shareShowNum > 0 then
		ShareListBoxSearchBtn:Show();
	else
		ShareListBoxSearchBtn:Hide();
	end
	ShareListBoxSearchBtn:SetPoint("top", "ShareListBoxPlane", "top", 0, shareShowNum*140);
	if (shareShowNum+1) <= 3 then
		ShareListBoxPlane:SetSize(588, 410);
	else
		ShareListBoxPlane:SetSize(588, (shareShowNum+1)*140 - 10);
	end
--]]
end

function LobbyFrameMoreGame_OnHide()
	GongNengFrame:Hide();
end

function LobbyFrameMoreGame_OnUpdate()
	--更新下载进度
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].state == 1 then
			ClientMgr:clientLog("keeeeeeeeeeeeeeeeeeprocessWorlId:"..t_LoadWorldList[i].worldId);
			local btn = GetMoreGameShareBtn(t_LoadWorldList[i].worldId);
			if btn~= nil then
				local bar = getglobal(btn:GetName().."SlidingFrameContentProgressTex");
				local process = AccountManager:getLoadProgress();
				bar:SetWidth(1.34*process);
				break;
			end
		end
	end
end

--排行
function MoreGameRankBtn_OnClick()
	MoreGameRankFrame:Show();
end

--类型
function MoreGameTypeBtn_OnClick()
	MoreGameTypeFrame:Show();
end

--我的关注
AttentionListNeetReset = false;
function MoreGameAttentionBtn_OnClick()
	local name = LobbyFrameMoreGameAttentionBtnName:GetText();
	if string.find(name, "我的关注") then
		if not CanUseNet() then
			return;		
		end
		AttentionListNeetReset = true;
		if AccountManager:requestWatchAttention() then
			LoadLoopFrame:Show();
		else
			LobbyFrameMoreGameRankBtn:Hide();
			LobbyFrameMoreGameTypeBtn:Hide();
			LobbyFrameMoreGameAttentionBtnName:SetText("返回列表");
			UpdateAttentionWatchOw();
		end
	else
		ShareListNeedReset = true;
		UpdateMoreGameShareInfo();
		LobbyFrameMoreGameRankBtn:Show();
		LobbyFrameMoreGameTypeBtn:Show();
		LobbyFrameMoreGameAttentionBtnName:SetText("我的关注");		
	end
end

--关注
function ShareAttention_OnClick()
	if AccountManager:getAttentionOwNum() >= 100 then
		ShowGameTips(DefMgr:getStringDef(25), 3);
		return;
	end

	local shareBtn = this:GetParentFrame();
	local worldId = 0;
	if shareBtn ~= nil then
		worldId = shareBtn:GetClientUserData(0);
	end

	if worldId > 0 then
		if AccountManager:addAttentionIds(worldId) then
			ShowGameTips(DefMgr:getStringDef(26), 3); 
			local name = LobbyFrameMoreGameAttentionBtnName:GetText();
			if string.find(name, "我的关注") then
				UpdateMoreGameShareInfo();			
			else
				UpdateAttentionWatchOw();	
			end
		else
			--关注失败
		end
	end
end

--取消关注
function ShareCalAttention_OnClick()
	local shareBtn = this:GetParentFrame();
	local worldId = 0;
	if shareBtn ~= nil then
		worldId = shareBtn:GetClientUserData(0);
	end

	if worldId > 0 then
		MessageBox(5, DefMgr:getStringDef(27));
		MessageBoxFrame:SetClientUserData(0, worldId);
		MessageBoxFrame:SetClientString( "取消关注" );	
	end
end

--点击分享存档条
function ShareArchiveContent_OnClick()
	local shareBtn = this:GetParentFrame():GetParentFrame();
	local name = LobbyFrameMoreGameAttentionBtnName:GetText();
	
	if shareBtn ~= nil then
		local name = LobbyFrameMoreGameAttentionBtnName:GetText();
		local type = 1;
		if string.find(name, "返回列表") then
			type = 2
		end
		ArchiveWorldDesc = GetWorldDescForType(type, shareBtn:GetClientUserData(0), shareBtn:GetClientUserData(1));

		if ArchiveWorldDesc ~= nil then
			local offsetY = shareBtn:GetRealTop();
			ArchiveInfoFrame:SetClientUserData(0, offsetY);
			ArchiveForBtnName = shareBtn:GetName();
			ArchiveInfoFrame:Show();

			--[[
			if not AccountManager:requestBuddyWatch(ArchiveWorldDesc.owneruin) then
				--观察失败		
			else
				ForFrameName = "LobbyFrameMoreGame";
				LoadLoopFrame:Show();
				ArchiveForBtnName = shareBtn:GetName();
			end
			]]
		end
	end	
end

--根据myWorldId获取我的存档的clientId
function GetClientIdForMyWorldId(myWorldId)
	
end

--shareBtn 
--userdata1 1为下载地图 2为查看地图
--userdata2 为相应的下标
--下载、暂停、进入存档
function ShareArchiveDownBtn_OnClick()
	local shareBtn = this:GetParentFrame():GetParentFrame():GetParentFrame();

	if shareBtn ~= nil then
		local nameFont = getglobal(this:GetName().."Name");
		local funcName = nameFont:GetText();

		local name = LobbyFrameMoreGameAttentionBtnName:GetText();
		 
		local type = 1;
		if string.find(name, "返回列表") then
			type = 2
		end
		local idddddd = shareBtn:GetClientUserData(0);
		local version = shareBtn:GetClientUserData(1);
		local worldDesc = GetWorldDescForType(type, shareBtn:GetClientUserData(0), shareBtn:GetClientUserData(1));
			
		local myWorldId, clientId = GetMyWorldId(worldDesc.worldid, worldDesc.shareVersion);
		
		if string.find(funcName, "下载") then
			if ClientMgr:isSharingOWorld() then
				ShowGameTips(DefMgr:getStringDef(8), 3);
				return false;
			end
			if AccountManager:getMyWorldList():getDownWorldNum() >= DownMapMaxNum then
				MessageBox(5, DefMgr:getStringDef(28));
				MessageBoxFrame:SetClientString( "下载存档满" );
				return;
			end
			local netState = ClientMgr:getNetworkState();
			if netState == 0 then
				ShowGameTips(DefMgr:getStringDef(19), 3);
			elseif netState == 2 then		
				MessageBox(2, DefMgr:getStringDef(21));
				MessageBoxFrame:SetClientUserData(0, worldDesc.worldid)
				MessageBoxFrame:SetClientUserData(1, worldDesc.shareVersion);
				MessageBoxFrame:SetClientUserData(2, type);
				MessageBoxFrame:SetClientString( "更多游戏中下载地图网络提示" );
			else
				MoreGameDownLoadWorld(1, type, worldDesc.worldid, worldDesc.shareVersion);
			end
		elseif string.find(funcName, "继续") then
			if IsLoadingWorldList() or ClientMgr:isSharingOWorld() then				--有任务在下载, 设置状态为等待下载
				SetLoadWorldListState(myWorldId, 2);
			else
				local netState = ClientMgr:getNetworkState();
				if netState == 0 then
					ShowGameTips(DefMgr:getStringDef(19), 3);
				elseif netState == 2 then		
					if clientId > 0 then
						MessageBox(2, DefMgr:getStringDef(21));
						MessageBoxFrame:SetClientUserData(0, clientId);
						MessageBoxFrame:SetClientString( "恢复下载地图网络提示" );
					end
				else
					UseNetType = 1;
					SetLoadWorldListState(myWorldId, 1);
					AccountManager:requestLoadWorld(myWorldId);
				end
			end
		elseif string.find(funcName, "取消") then
			MessageBox(1, DefMgr:getStringDef(16));
			MessageBoxFrame:SetClientUserData(0, clientId);
			MessageBoxFrame:SetClientString( "删除未下载完成地图" );
			return;
		elseif string.find(funcName, "进入") then
			if clientId == ShareingMapIndex and ClientMgr:isSharingOWorld() then
				ShowGameTips(DefMgr:getStringDef(14), 3);
				return;
			end

			ClientMgr:stopMusic();
			LobbyFrame:Hide();	
			LoadingFrame:Show();
			MiniWorldCleanRequestEnterWorld(myWorldId);
		end
	end

	local name = LobbyFrameMoreGameAttentionBtnName:GetText();
	if string.find(name, "我的关注") then
		ClientMgr:clientLog("--------------ShareInfo");
		UpdateMoreGameShareInfo();			
	else
		ClientMgr:clientLog("--------------AttentionInfo");
		UpdateMoreGameAttentionInfo();	
	end
end

function MoreGameDownLoadWorld(useNetType, type, owid, version)
	local worldDesc = GetWorldDescForType(type, owid, version);
	if worldDesc == nil then return end
	
	local downType = 2;
	if type == 2 then downType = 3 end
	if AccountManager:requestDownWorld(owid, downType) then
		IsNeedReset = true;
		UseNetType = useNetType;
		IsDownWorld = true;
		
		--加入下载列表中
		local index = GetNewestIndex();
		if index ~= nil then
			local createWorldInfo = AccountManager:getMyWorldList():getWorldDesc(index-1);
			local loadState = GetNewLoadWorldListState();
			if loadState == 1 then
				if ClientMgr:isSharingOWorld() or IsLoadingWorldList() then
					loadState = 2;
				else				
					AccountManager:requestLoadWorld(createWorldInfo.worldid);
				end				
			end

			local ArchiveBtnName = "ArchiveBtn"..index;				
			AccountManager:addLoadWorldData(createWorldInfo.worldid, worldDesc.worldid, worldDesc.shareVersion);
			table.insert(t_LoadWorldList, {worldId=createWorldInfo.worldid, state= loadState, name=ArchiveBtnName});
			table.insert(t_LoadWathchOWWorld, worldDesc);

			--自动关注
			if not AccountManager:isAttentionWorld(owid) and AccountManager:getAttentionOwNum() < 100 then
				AccountManager:addAttentionIds(owid);
			end
		end
	else
		UseNetType = 0;
		ShowGameTips(DefMgr:getStringDef(29), 3);
	end
end
------------------------------------------------------关注相关--------------------------------------------------------------
--更新t_AttentionWathchOWorld
function UpdateAttentionWatchOw()
	t_AttentionWathchOWorld = {};
	local num = AccountManager:getAttentionOwNum();

	for i=1, num do
		local worldDesc = AccountManager:getAttentionWorldDesc(i-1);
		table.insert(t_AttentionWathchOWorld, worldDesc);
	end

	UpdateMoreGameAttentionInfo();
end

--返回关注列表中已经在本地根据此地图信息创建新地图的列表和除此之外的其它列表
function GetListForAttentionList()
	t_existList = {};
	t_noexistList = {};
	for i=1, #(t_AttentionWathchOWorld) do
		local worldDesc = t_AttentionWathchOWorld[i];
		local myWorldId = GetMyWorldId(worldDesc.worldid, worldDesc.shareVersion);
		if myWorldId > 0 then
			table.insert(t_existList, worldDesc);
		else
			table.insert(t_noexistList, worldDesc);
		end
	end

	return t_existList, t_noexistList;
end

--更新关注列表信息
function UpdateMoreGameAttentionInfo()
	local attentionNum = #(t_AttentionWathchOWorld);

	if AttentionListNeetReset then
		ShareListBox:resetOffsetPos();
		AttentionListNeetReset = false;
	end

	for i=1, SHARE_LIST_MAX_NUM do
		local shareBtn 		= getglobal("ShareBtn"..i);
		local slidingFrame      = getglobal("ShareBtn"..i.."SlidingFrame");
		local attentionBtn	= getglobal("ShareBtn"..i.."Attention");			--关注
		local calAttrentionBtn  = getglobal("ShareBtn"..i.."CalAttention");			--取消关注
		local modelIcon		= getglobal("ShareBtn"..i.."SlidingFrameContentModelIcon");	--存档类型
		local praiseNum		= getglobal("ShareBtn"..i.."SlidingFrameContentPraiseNum");	--赞数量
		local barBkg		= getglobal("ShareBtn"..i.."SlidingFrameContentProgressBarBkg");--进度条背景
		local bar		= getglobal("ShareBtn"..i.."SlidingFrameContentProgressTex");	--进度条
		local mapSize		= getglobal("ShareBtn"..i.."SlidingFrameContentSize");		--地图大小
		local downTime		= getglobal("ShareBtn"..i.."SlidingFrameContentDownTime");	--下载次数
		local mapName		= getglobal("ShareBtn"..i.."SlidingFrameContentName");		--地图名字
		local downBtnName	= getglobal("ShareBtn"..i.."SlidingFrameContentDownBtnName");	--下载按钮名字(下载、取消、继续下载)
		local flagIcon		= getglobal("ShareBtn"..i.."FlagIcon");				--标记图标
		local flagName 		= getglobal("ShareBtn"..i.."FlagIconName");			--标记名字

		slidingFrame:resetOffsetPos();
		flagIcon:Hide();
		flagName:SetText("");
		if i <= attentionNum then
			local worldDesc = t_AttentionWathchOWorld[i];
			shareBtn:Show();
			shareBtn:SetPoint("topleft", "ShareListBoxPlane", "topleft", 0, (i-1)*140);

			barBkg:Show();
			bar:Show();

			local myWorldId = GetMyWorldId(worldDesc.worldid, worldDesc.shareVersion);
			if myWorldId > 0 then
				local state = GetLoadWorldListState(myWorldId);
				if state == 1 then
					downBtnName:SetText("取消");
					downBtnName:SetTextColor(253, 230, 66);	
				elseif state == 2 then
					downBtnName:SetText("取消");
					downBtnName:SetTextColor(253, 230, 66);
				elseif state == 3 then
					downBtnName:SetText("继续");
					downBtnName:SetTextColor(253, 230, 66);
				else
					barBkg:Hide();
					bar:Hide();
					downBtnName:SetText("进入");
					downBtnName:SetTextColor(255, 255, 255);
				end
			else
				barBkg:Hide();
				bar:Hide();
				downBtnName:SetText("下载");
				downBtnName:SetTextColor(253, 230, 66);
			end		

			shareBtn:SetClientUserData(0, worldDesc.worldid);		
			shareBtn:SetClientUserData(1, worldDesc.shareVersion);

			if AccountManager:isAttentionWorld(worldDesc.worldid) then
				attentionBtn:Hide();
				calAttrentionBtn:Show();
			else
				attentionBtn:Show();
				calAttrentionBtn:Hide();
			end

			if worldDesc.worldtype == 0 then
				modelIcon:SetTexUV(822, 84, 76, 76);
			elseif worldDesc.worldtype == 1 then
				modelIcon:SetTexUV(901, 84, 76, 76);
			end
			praiseNum:SetText(worldDesc.credit);

			mapName:SetText(worldDesc.worldname, 255, 230, 67);
			if mapName:GetTextLines() >  1 then
				mapName:SetPoint("left", modelIcon:GetName(), "right", 10, 5);
			else
				mapName:SetPoint("left", modelIcon:GetName(), "right", 10, 20);
			end

			
			mapSize:SetText(string.format("%2.2f", worldDesc.fileSize/1048576).."M");
			downTime:SetText(worldDesc.downloadNum);
			if worldDesc.flag == 1 then
				recommend:Show();
			elseif worldDesc.flag == 2 then
				hotIcon:Show();
			end

		else
			shareBtn:Hide();
			shareBtn:SetClientUserData(0, 0);
			shareBtn:SetClientUserData(1, 0);
		end
	end

	if attentionNum > 0 then
		ShareListBoxSearchBtn:Show();
	else
		ShareListBoxSearchBtn:Hide();
	end
	ShareListBoxSearchBtn:SetPoint("top", "ShareListBoxPlane", "top", 0, attentionNum*140);
	if (attentionNum+1) <= 3 then
		ShareListBoxPlane:SetSize(588, 410);
	else
		ShareListBoxPlane:SetSize(588, (attentionNum+1)*140 - 10);
	end
	

--[[
	local attentionNum = #(t_AttentionWathchOWorld);
	local t_existList, t_noexistList = GetListForAttentionList();

	if AttentionListNeetReset then
		ShareListBox:resetOffsetPos();
		AttentionListNeetReset = false;
	end

	for i=1, SHARE_LIST_MAX_NUM do
		local shareBtn 		= getglobal("ShareBtn"..i);
		local slidingFrame      = getglobal("ShareBtn"..i.."SlidingFrame");
		local attentionBtn	= getglobal("ShareBtn"..i.."Attention");			--关注
		local calAttrentionBtn  = getglobal("ShareBtn"..i.."CalAttention");			--取消关注
		local modelIcon		= getglobal("ShareBtn"..i.."SlidingFrameContentModelIcon");	--存档类型
		local praiseNum		= getglobal("ShareBtn"..i.."SlidingFrameContentPraiseNum");	--赞数量
		local barBkg		= getglobal("ShareBtn"..i.."SlidingFrameContentProgressBarBkg");--进度条背景
		local bar		= getglobal("ShareBtn"..i.."SlidingFrameContentProgressTex");	--进度条
		local mapSize		= getglobal("ShareBtn"..i.."SlidingFrameContentSize");		--地图大小
		local downTime		= getglobal("ShareBtn"..i.."SlidingFrameContentDownTime");	--下载次数
		local mapName		= getglobal("ShareBtn"..i.."SlidingFrameContentName");		--地图名字
		local downBtnName	= getglobal("ShareBtn"..i.."SlidingFrameContentDownBtnName");	--下载按钮名字(下载、取消、继续下载)

		slidingFrame:resetOffsetPos();
		recommend:Hide();
		hotIcon:Hide();
		if i <= attentionNum then
			local worldDesc;
			shareBtn:Show();
			shareBtn:SetPoint("topleft", "ShareListBoxPlane", "topleft", 0, (i-1)*140);

			barBkg:Show();
			bar:Show();

			if i <= #(t_existList) then
				worldDesc = t_existList[i];
				local myWorldId = GetMyWorldId(worldDesc.worldid, worldDesc.shareVersion);
				if myWorldId > 0 then
					local state = GetLoadWorldListState(myWorldId);
					if state == 1 then
						downBtnName:SetText("取消");
						downBtnName:SetTextColor(253, 230, 66);	
					elseif state == 2 then
						downBtnName:SetText("取消");
						downBtnName:SetTextColor(253, 230, 66);
					elseif state == 3 then
						downBtnName:SetText("继续");
						downBtnName:SetTextColor(253, 230, 66);
					else
						barBkg:Hide();
						bar:Hide();
						downBtnName:SetText("进入");
						downBtnName:SetTextColor(255, 255, 255);
					end
				end
			else
				barBkg:Hide();
				bar:Hide();
				worldDesc = t_noexistList[i-#(t_existList)];
				downBtnName:SetText("下载");
				downBtnName:SetTextColor(253, 230, 66);
			end
			shareBtn:SetClientUserData(0, worldDesc.worldid);		
			shareBtn:SetClientUserData(1, worldDesc.shareVersion);

			if AccountManager:isAttentionWorld(worldDesc.worldid) then
				attentionBtn:Hide();
				calAttrentionBtn:Show();
			else
				attentionBtn:Show();
				calAttrentionBtn:Hide();
			end

			if worldDesc.worldtype == 0 then
				modelIcon:SetTexUV(822, 84, 76, 76);
			elseif worldDesc.worldtype == 1 then
				modelIcon:SetTexUV(901, 84, 76, 76);
			end
			praiseNum:SetText(worldDesc.credit);

			mapName:SetText(worldDesc.worldname, 255, 230, 67);
			if mapName:GetTextLines() >  1 then
				mapName:SetPoint("left", modelIcon:GetName(), "right", 10, 5);
			else
				mapName:SetPoint("left", modelIcon:GetName(), "right", 10, 20);
			end

			downTime:SetText(worldDesc.downloadNum);
			if worldDesc.flag == 1 then
				recommend:Show();
			elseif worldDesc.flag == 2 then
				hotIcon:Show();
			end

		else
			shareBtn:Hide();
			shareBtn:SetClientUserData(0, 0);
			shareBtn:SetClientUserData(1, 0);
		end
	end

	if attentionNum > 0 then
		ShareListBoxSearchBtn:Show();
	else
		ShareListBoxSearchBtn:Hide();
	end
	ShareListBoxSearchBtn:SetPoint("top", "ShareListBoxPlane", "top", 0, attentionNum*140);
	if (attentionNum+1) <= 3 then
		ShareListBoxPlane:SetSize(588, 410);
	else
		ShareListBoxPlane:SetSize(588, (attentionNum+1)*140 - 10);
	end
--]]
end


------------------------------------------------------筛选相关--------------------------------------------------------------
t_RankFilterBtnName = {"默认", "推荐", "赞", "下载量", "最新"};
t_TypeFilterBtnName = {"综合", "生存", "创造"};
--点击筛选按钮
function FilterBtn_OnClick()
	if not CanUseNet() then
		MoreGameRankFrame:Hide();
		MoreGameTypeFrame:Hide();
		LobbyFrameMoreGameRankBtn:SetChecked(false);
		LobbyFrameMoreGameTypeBtn:SetChecked(false);
		return;		
	end
	local clientId = this:GetClientID();
	local btnName = this:GetName();
	local request = true;
	if clientId > 0 then
		if string.find(btnName, "Rank") then
			if RankFlag == clientId then
				request = false;
			else
				RankFlag = clientId;
				LobbyFrameMoreGameRankBtnName:SetText("排行-"..t_RankFilterBtnName[RankFlag]);
			end
			LobbyFrameMoreGameRankBtn:SetChecked(false);
			MoreGameRankFrame:Hide();		
		elseif string.find(btnName, "Type") then
			if TypeFlag == clientId then
				request = false;
			else
				TypeFlag = clientId;
				LobbyFrameMoreGameTypeBtnName:SetText("类型-"..t_TypeFilterBtnName[TypeFlag]);
			end
			LobbyFrameMoreGameTypeBtn:SetChecked(false);
			MoreGameTypeFrame:Hide();
		end
	end
	
	if request then
		ShareListNeedReset = true;
		AccountManager:requestWatchOWList(RankFlag-1, TypeFlag-1);
		LoadLoopFrame:Show();
	end
end


--排行筛选面板
function MoreGameRankFrame_OnClick()
	MoreGameRankFrame:Hide();
	LobbyFrameMoreGameRankBtn:SetChecked(false);
end

function MoreGameRankFrame_OnShow()
	for i=1, 5 do
		local btn = getglobal("MoreGameRankFrameFilterBtn"..i);
		local tick = getglobal(btn:GetName().."Tick");
		local clientId = btn:GetClientID();
		if clientId == RankFlag then
			tick:Show();
		else
			tick:Hide();
		end
	end
end

--类型筛选面板
function MoreGameTypeFrame_OnClick()
	MoreGameTypeFrame:Hide();
	LobbyFrameMoreGameTypeBtn:SetChecked(false);
end
function MoreGameTypeFrame_OnShow()
	for i=1, 3 do
		local btn = getglobal("MoreGameTypeFrameFilterBtn"..i);
		local tick = getglobal(btn:GetName().."Tick");		
		local clientId = btn:GetClientID();
		if clientId == TypeFlag then
			tick:Show();
		else
			tick:Hide();
		end
	end
end

---------------------------------------------------ArchiveInfoFrame---------------------------------------------------
function ArchiveInfoFrame_OnShow()
	local offsetY = ArchiveInfoFrame:GetClientUserData(0);
	ArchiveInfoFrameArrow:SetPoint("topleft", "$parent", "topleft", 563, offsetY+65);

	if ArchiveWorldDesc ~= nil then
		UpdateShareArchiveInfo();
	else
		ArchiveInfoFrame:Hide();
	end
end

function UpdateShareArchiveInfo()
--[[
	local buddyInfo = BuddyManager:getWatchBuddyInfo();
	if buddyInfo == nil then return; end;
	
	--头像
	local rolemodel = buddyInfo:getModel();
	ArchiveInfoFrameHeadBtnIcon:SetTexture("ui/roleicons/"..rolemodel..".png");
	--玩家名称	
	ArchiveInfoFrameName:SetText(buddyInfo:getNickName());
]]	
	--头像
	local rolemodel = ArchiveWorldDesc.realModel;
	ArchiveInfoFrameHeadBtnIcon:SetTexture("ui/roleicons/"..rolemodel..".png");
	--玩家名称	
	ArchiveInfoFrameName:SetText(ArchiveWorldDesc.realNickName);

	--mini号	
	ArchiveInfoFrameMini:SetText(ArchiveWorldDesc.owneruin);

	--地图名
	ArchiveInfoFrameMapName:SetText(ArchiveWorldDesc.worldname);
	--版本号
	local integer = math.floor(ArchiveWorldDesc.shareVersion/10);
	local remainder = ArchiveWorldDesc.shareVersion - integer;
	local verText = "版本号：" ..integer.."."..remainder;
	ArchiveInfoFrameVersion:SetText(verText);
	--地图描述
	ArchiveInfoFrameDesc:SetText(ArchiveWorldDesc.memo, 255, 255, 255);
end

function ArchiveInfoFrame_OnClick()
	ArchiveInfoFrame:Hide();
end

--分享存档信息的头像
function ArchiveInfoFrameHeadBtn_OnClick()
	if 1 == ArchiveWorldDesc.realowneruin then
		return;
	end
	if not AccountManager:requestBuddyWatch(ArchiveWorldDesc.realowneruin) then
		--观察失败		
	else
		if LobbyFrameArchiveFrame:IsShown() then
			ForFrameName = "LobbyFrameArchiveFrame";
			LoadLoopFrame:Show();
		elseif LobbyFrameMoreGame:IsShown() then 
			ForFrameName = "LobbyFrameMoreGame";
			LoadLoopFrame:Show();
		end
	end
end

--点赞
function ArchiveInfoFramePraiseBtn_OnClick()
--[[
	local  buddyInfo =  BuddyManager:getWatchBuddyInfo();
	if buddyInfo == nil then return; end;
]]
	if 1 == ArchiveWorldDesc.realowneruin then
		return;
	end

	local uin = ArchiveWorldDesc.owneruin;
	local result = AccountManager:requestAddCreditWorld(ArchiveWorldDesc.owneruin, ArchiveWorldDesc.worldid);
	if 0 == result then
		local num = 3 - BuddyManager:getCreditNumToday();
		ShowGameTips("点赞成功，今天可用的点赞还有"..num.."个");
	--	ToSeeFriendFrameInfoPraiseNum:SetText(buddyInfo:getCredit());
		local creditNum = getglobal(ArchiveForBtnName.."SlidingFrameContentPraiseNum");
		local num = tonumber(creditNum:GetText()) + 1;
		creditNum:SetText(num);
	elseif 1 == result then
		ShowGameTips(DefMgr:getStringDef(30), 3);
	elseif 2 == result then
		ShowGameTips(DefMgr:getStringDef(31), 3);
	end	
end

-- MiniWorldCleanV3: main menu route and safe local-only buttons.
function MainMenuStage_Enter()
    if LoadingFrame ~= nil then LoadingFrame:Hide(); end
    if BackgroundFrame ~= nil then BackgroundFrame:Hide(); end
    if LobbyFrame ~= nil then LobbyFrame:Hide(); end
    if MiniWorldCleanClickedEnter then
        MiniWorldCleanShowLobby();
    else
        if LoginScreenFrame ~= nil then LoginScreenFrame:Show(); end
    end
end

function MainMenuStage_Quit()
    MiniWorldCleanHideMenuFrames();
end

function SurviveGame_Enter()
    MiniWorldCleanHideMenuFrames();
    if PlayMainFrame ~= nil then PlayMainFrame:Show(); end
end

function SurviveGame_Quit()
    if PlayMainFrame ~= nil then PlayMainFrame:Hide(); end
end

function LobbyFrameCreateNewWorldBtn_OnClick()
    MiniWorldCleanClickedEnter = true;
    if LobbyFrame ~= nil then LobbyFrame:Hide(); end
    if CreateWorldFrame ~= nil then CreateWorldFrame:Show(); end
end

function LobbyFrameStartBtn_OnClick()
    MiniWorldCleanStartOfflineWorld(0, "aaa");
end

function GongNengFrameListFriendBtn_OnClick()
    MiniWorldCleanOpenFriendFrame();
end

function LobbyFrameMoreGameBtn_OnClick()
    if LobbyFrameMoreGame ~= nil and LobbyFrameMoreGame:IsShown() then
        MiniWorldCleanShowLobby();
    else
        MiniWorldCleanOpenMoreGameFrame();
    end
end

function LobbyFrameMoreGame_OnShow()
    if GongNengFrame ~= nil then GongNengFrame:Show(); end
    CurShowFrameName = "LobbyFrame";
    if LobbyFrameMoreGameBtn ~= nil then LobbyFrameMoreGameBtn:Show(); end
    if LobbyFrameMoreGameBtnName ~= nil then LobbyFrameMoreGameBtnName:SetText(" 返 回\n主界面"); end
    if LobbyFrameMoreGameRankBtn ~= nil then LobbyFrameMoreGameRankBtn:Show(); end
    if LobbyFrameMoreGameTypeBtn ~= nil then LobbyFrameMoreGameTypeBtn:Show(); end
    if LobbyFrameMoreGameAttentionBtnName ~= nil then LobbyFrameMoreGameAttentionBtnName:SetText("本地列表"); end
    if LoadLoopFrame ~= nil and LoadLoopFrame:IsShown() then LoadLoopFrame:Hide(); end
    t_WatchOWWorld = {};
    t_AttentionWathchOWorld = {};
    t_LoadWathchOWWorld = {};
    if UpdateMoreGameShareInfo ~= nil then UpdateMoreGameShareInfo(); end
end

function MoreGameSearchBtn_OnClick()
    if ShowGameTips ~= nil then ShowGameTips("离线修复版不连接更多游戏服务器", 3); end
end

function UpdateWatchOw()
    t_WatchOWWorld = {};
    if UpdateMoreGameShareInfo ~= nil then UpdateMoreGameShareInfo(); end
end
