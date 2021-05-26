
#include<DxLib.h>


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR,int) {
	DxLib::ChangeWindowMode(true);
	if (DxLib::DxLib_Init()) {
		return -1;
	}
	SetWindowText(L"2016186_â¡ì°óDê¨");
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	while (!DxLib::ProcessMessage()) {
		DxLib::ClearDrawScreen();
		DxLib::ScreenFlip();
	}
	DxLib::DxLib_End();
	return 0;
}