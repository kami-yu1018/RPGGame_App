#pragma once

class KeyInput
{
private:

	int nowEnterKey = 0;
	int oldEnterKey = 0;

	int nowUpKey = 0;
	int oldUpKey = 0;

	int nowDownKey = 0;
	int oldDownKey = 0;

	int nowRightKey = 0;
	int oldRightKey = 0;

	int nowLeftKey = 0;
	int oldLeftKey = 0;

public:

	void Updata();

	int PushEnterKey();
	int PushUpKey();
	int PushDownKey();
	int PushRightKey();
	int PushLeftKey();

};