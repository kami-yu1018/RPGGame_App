#include"KeyInput.h"
#include<Windows.h>

void KeyInput::Updata()
{
	oldEnterKey = nowEnterKey;
	nowEnterKey = GetKeyState(VK_RETURN);

	oldUpKey = nowUpKey;
	nowUpKey = GetKeyState(VK_UP);

	oldDownKey = nowDownKey;
	nowDownKey = GetKeyState(VK_DOWN);

	oldRightKey = nowRightKey;
	nowRightKey = GetKeyState(VK_RIGHT);

	oldLeftKey = nowLeftKey;
	nowLeftKey = GetKeyState(VK_LEFT);
}

int KeyInput::PushEnterKey()
{
	return nowEnterKey = 1 && !oldEnterKey;
}

int KeyInput::PushUpKey()
{
	return nowUpKey = 1 && !oldUpKey;
}

int KeyInput::PushDownKey()
{
	return nowDownKey = 1 && !oldDownKey;
}

int KeyInput::PushRightKey()
{
	return nowRightKey = 1 && !oldRightKey;
}

int KeyInput::PushLeftKey()
{
	return nowLeftKey = 1 && !oldLeftKey;
}
