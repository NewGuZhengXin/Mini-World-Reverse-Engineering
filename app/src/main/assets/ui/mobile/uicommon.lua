
function UpdateItemIconCount(iconbtn, numtext, durbar, grid_index)
	local itemid = ClientBackpack:getGridItem(grid_index);
	if itemid == 0 then
		iconbtn:SetTextureHuires(ClientMgr:getNullItemIcon());
		numtext:SetText("");
		durbar:Hide();
		return;
	end

	local u = 0;
	local v = 0;
	local width = 0;
	local height = 0;
	local r = 255;
	local g = 255;
	local b = 255;
	h, u, v, width, height, r, g, b = ClientMgr:getItemIcon(itemid, u, v, width, height, r, g, b);
	iconbtn:SetTextureHuires(h);
	iconbtn:SetTexUV(u, v, width, height);
	iconbtn:SetColor(r, g, b);

	if ClientBackpack:getGridEnchantNum(grid_index) > 0 then
		iconbtn:setMask("colormap/enchanted_item_glint.png");
		iconbtn:SetOverlay(true);
	else
		iconbtn:SetOverlay(false);
	end


	count = ClientBackpack:getGridNum(grid_index);
	if count > 1 then
		numtext:SetText(count);
	else
		numtext:SetText("");
	end

	maxdur = ClientBackpack:getGridMaxDuration(grid_index);
	if maxdur > 0 then
		dur = ClientBackpack:getGridDuration(grid_index)
		if dur < 0 then dur = 0 end
		dur = dur/maxdur

		durbar:SetTexUV(712, 164, dur*59, 8)
		durbar:SetWidth(72*dur)

		if dur > 0.8 then durbar:SetColor(0, 255, 0) --绿色
		elseif dur > 0.6 then durbar:SetColor(0, 128, 0) --深绿色
		elseif dur > 0.4 then durbar:SetColor(128, 128, 0) --棕色
		elseif dur > 0.2 then durbar:SetColor(255, 255, 0) --橙色
		else durbar:SetColor(255, 0, 0) end --红色

		if dur == 1.0 then durbar:Hide()
		else durbar:Show() end
	else
		durbar:Hide()
	end	
end

function UpdateCratingItemIconCount(iconbtn, numtext, durbar, grid_index, lack)
	local itemid = ClientBackpack:getGridItem(grid_index);
	if itemid == 0 then
		iconbtn:SetTextureHuires(ClientMgr:getNullItemIcon());
		numtext:SetText("");
		lack:Hide();
		durbar:Hide();
		return;
	end

	local u = 0;
	local v = 0;
	local width = 0;
	local height = 0;
	local r = 255;
	local g = 255;
	local b = 255;
	h, u, v, width, height, r, g, b = ClientMgr:getItemIcon(itemid, u, v, width, height, r, g, b);
	iconbtn:SetTextureHuires(h);
	iconbtn:SetTexUV(u, v, width, height);
	iconbtn:SetColor(r, g, b);

	count = ClientBackpack:getGridNum(grid_index);
	numtext:SetText(count);

	if ClientBackpack:getGridEnough(grid_index) == 0 then		--如果材料不足
		iconbtn:SetGray(true);
		lack:Show();
		numtext:SetText("");
	else
		iconbtn:SetGray(false);
		lack:Hide();
	end

	durbar:Hide()	
end

--是否在使用网络
function CanUseNet()
	if ClientMgr:isSharingOWorld() then		
		ShowGameTips(DefMgr:getStringDef(8), 3);
		return false;
	end

	if IsLoadingWorldList() then
		ShowGameTips(DefMgr:getStringDef(9), 3);	
		return false;
	end
	return true;
end

--游戏退到后台的相关处理
function GameStop()
	--暂停下载
	for i=1, #(t_LoadWorldList) do
		if t_LoadWorldList[i].state == 1 then
			AccountManager:abortLoadWorld();
		end
	end
end

-- MiniWorldCleanV3: shared offline UI helpers loaded before all mobile frames.
MiniWorldCleanClickedEnter = MiniWorldCleanClickedEnter or false;
MiniWorldCleanRoleSelected = MiniWorldCleanRoleSelected or false;

function MiniWorldCleanHideFrameByName(name)
    local frame = getglobal(name);
    if frame ~= nil and frame:IsShown() then frame:Hide(); end
end

function MiniWorldCleanHideMenuFrames()
    local frames = {
        "LoginScreenFrame", "InputRoleNameFrame", "SelectRoleFrame",
        "BackgroundFrame", "LobbyFrame", "LobbyFrameArchiveFrame", "LobbyFrameRoleInfo", "LobbyFrameMoreGame",
        "CreateWorldFrame", "AdvancedSetFrame", "FriendFrame", "AddFriendFrame", "ToSeeFriendFrame", "FriendChatFrame",
        "SetMenuFrame", "MessageBoxFrame", "LoadingFrame", "GongNengFrame", "LoadLoopFrame", "ArchiveInfoFrame",
        "MoreGameRankFrame", "MoreGameTypeFrame"
    };
    for i=1, #(frames) do MiniWorldCleanHideFrameByName(frames[i]); end
end

function MiniWorldCleanShowLobby()
    MiniWorldCleanClickedEnter = true;
    MiniWorldCleanHideMenuFrames();
    if BackgroundFrame ~= nil then BackgroundFrame:Show(); end
    if LobbyFrame ~= nil then LobbyFrame:Show(); end
    if LobbyFrameRoleInfo ~= nil then LobbyFrameRoleInfo:Hide(); end
    if LobbyFrameMoreGame ~= nil then LobbyFrameMoreGame:Hide(); end
    if LobbyFrameArchiveFrame ~= nil then LobbyFrameArchiveFrame:Show(); end
    if LobbyFrameArchiveFrameStartBtn ~= nil then LobbyFrameArchiveFrameStartBtn:Enable(); end
    if LobbyFrameArchiveFrameStartBtnNormal ~= nil then LobbyFrameArchiveFrameStartBtnNormal:SetGray(false); end
end

function MiniWorldCleanShowRoleSelect()
    MiniWorldCleanClickedEnter = true;
    MiniWorldCleanHideMenuFrames();
    IsFirstLogin = true;
    if SelectRoleFrame ~= nil then SelectRoleFrame:Show(); end
end

function MiniWorldCleanStartOfflineWorld(worldType, seed)
    MiniWorldCleanClickedEnter = true;
    MiniWorldCleanRoleSelected = true;
    MiniWorldCleanHideMenuFrames();
    if ClientMgr ~= nil then
        ClientMgr:clientLog("MiniWorldCleanV3CreateFix: start offline world");
        ClientMgr:setGameVar("ViewRadius", "1");
        ClientMgr:stopMusic();
    end
    if LoadingFrame ~= nil then LoadingFrame:Show(); end
    if ClientCurGame ~= nil then
        ClientCurGame:offlineCreateWorld(1, "test", worldType or 0, seed or "aaa", 1);
    else
        if ClientMgr ~= nil then ClientMgr:clientLog("MiniWorldCleanV3CreateFix: ClientCurGame is nil"); end
        if LoadingFrame ~= nil then LoadingFrame:Hide(); end
        if CreateWorldFrame ~= nil then CreateWorldFrame:Show(); end
    end
end

function MiniWorldCleanRequestCreateWorld(...)
    MiniWorldCleanStartOfflineWorld(0, "aaa");
    return true;
end

function MiniWorldCleanRequestEnterWorld(...)
    MiniWorldCleanStartOfflineWorld(0, "aaa");
    return true;
end

function MiniWorldCleanOpenFriendFrame()
    MiniWorldCleanClickedEnter = true;
    MiniWorldCleanHideMenuFrames();
    if BackgroundFrame ~= nil then BackgroundFrame:Show(); end
    if FriendFrame ~= nil then FriendFrame:Show(); end
    if GongNengFrame ~= nil then GongNengFrame:Show(); end
    CurShowFrameName = "FriendFrame";
end

function MiniWorldCleanFriendEmptyList()
    if FriendFrameTipsDesc ~= nil then FriendFrameTipsDesc:Show(); end
    for i=1, 30 do
        local friend = getglobal("Friend"..i);
        if friend ~= nil then friend:Hide(); end
    end
    if FriendBoxPlane ~= nil then FriendBoxPlane:SetSize(886, 453); end
end

function MiniWorldCleanOpenMoreGameFrame()
    MiniWorldCleanClickedEnter = true;
    MiniWorldCleanHideMenuFrames();
    if BackgroundFrame ~= nil then BackgroundFrame:Show(); end
    if LobbyFrame ~= nil then LobbyFrame:Show(); end
    if LobbyFrameArchiveFrame ~= nil then LobbyFrameArchiveFrame:Hide(); end
    if LobbyFrameRoleInfo ~= nil then LobbyFrameRoleInfo:Hide(); end
    if LobbyFrameMoreGame ~= nil then LobbyFrameMoreGame:Show(); end
    if GongNengFrame ~= nil then GongNengFrame:Show(); end
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
