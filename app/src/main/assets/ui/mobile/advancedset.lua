CurNewWorldTerrType = 1;

function AdvancedSetFrame_OnShow()
	SelectMapModel("AdvancedSetFrameHugeMapBtn");
	SelectGameModel("AdvancedSetFrameSurvivalBtn");
	
	CurNewWorldTerrType = 1;
	
	local nickName = "OfflinePlayer";
	if CurNewWorldType == 0 then		
		AdvancedSetFrameSurvivalBtn_OnClick();
		AdvancedSetFrameNameEdit:SetDefaultText(nickName..DefMgr:getStringDef(59));
	else
		AdvancedSetFrameCreateBtn_OnClick();
		AdvancedSetFrameNameEdit:SetDefaultText(nickName..DefMgr:getStringDef(60));
	end

	AdvancedSetFrameSeedEdit:Clear();
end

function AdvancedSetFrameBackBtn_OnClick()
	AdvancedSetFrame:Hide();
	CreateWorldFrame:Show();
end

function AdvancedSetFrameLimitedMapBtn_OnClick()
	CurNewWorldTerrType = 2;
	AdvancedSetFrameMapDesc:SetText(DefMgr:getStringDef(32));
	SelectMapModel("AdvancedSetFrameLimitedMapBtn");	
end

function AdvancedSetFrameHugeMapBtn_OnClick()
	CurNewWorldTerrType = 1;
	AdvancedSetFrameMapDesc:SetText(DefMgr:getStringDef(33));
	SelectMapModel("AdvancedSetFrameHugeMapBtn");
end

function AdvancedSetFrameFlatMapBtn_OnClick()
	if AdvancedSetFrameSeedEdit:GetText() ~= "" then return; end

	CurNewWorldTerrType = 0;
	AdvancedSetFrameMapDesc:SetText(DefMgr:getStringDef(34));
	SelectMapModel("AdvancedSetFrameFlatMapBtn");
end

function SelectMapModel(btnName)
	AdvancedSetFrameLimitedMapBtnNormal:SetGray(true);
	AdvancedSetFrameLimitedMapBtnName:SetGray(true);
	AdvancedSetFrameHugeMapBtnNormal:SetGray(true);
	AdvancedSetFrameHugeMapBtnName:SetGray(true);
	AdvancedSetFrameFlatMapBtnNormal:SetGray(true);
	AdvancedSetFrameFlatMapBtnName:SetGray(true);

	local normalTexture = getglobal(btnName.."Normal");
	local nameTexture = getglobal(btnName.."Name");
	normalTexture:SetGray(false);
	nameTexture:SetGray(false);
end

function AdvancedSetFrameSurvivalBtn_OnClick()	
	CurNewWorldType = 0;
	SelectGameModel("AdvancedSetFrameSurvivalBtn");
	
	local nickName = "OfflinePlayer";
	AdvancedSetFrameNameEdit:SetDefaultText(nickName..DefMgr:getStringDef(59));
end

function AdvancedSetFrameCreateBtn_OnClick()
	CurNewWorldType = 1;
	SelectGameModel("AdvancedSetFrameCreateBtn");

	local nickName = "OfflinePlayer";
	AdvancedSetFrameNameEdit:SetDefaultText(nickName..DefMgr:getStringDef(60));
end

function SelectGameModel(btnName)
	AdvancedSetFrameSurvivalBtnNormal:SetGray(true);
	AdvancedSetFrameSurvivalBtnName:SetGray(true);
	AdvancedSetFrameCreateBtnNormal:SetGray(true);
	AdvancedSetFrameCreateBtnName:SetGray(true);	
	
	local normalTexture = getglobal(btnName.."Normal");
	local nameTexture = getglobal(btnName.."Name");
	normalTexture:SetGray(false);
	nameTexture:SetGray(false);
end

function AdvancedSetFrameStartBtn_OnClick()
    MiniWorldCleanClickedEnter = true;
    MiniWorldCleanRoleSelected = true;
    local seed = "aaa";
    if AdvancedSetFrameSeedEdit ~= nil then
        seed = AdvancedSetFrameSeedEdit:GetText();
        if seed == nil or seed == "" then seed = "aaa"; end
    end
    MiniWorldCleanStartOfflineWorld(CurNewWorldType or 0, seed);
end

function AdvancedSetFrameStartBtn_OnClick()
    local seed = AdvancedSetFrameSeedEdit:GetText();
    if seed == nil or seed == "" then seed = "aaa" end
    MiniWorldCleanStartOfflineWorld(CurNewWorldType or 0, seed);
end
