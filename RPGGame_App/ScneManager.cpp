#include "ScneManager.h"

void SceneManager::Init()
{
	select_scene = TITLE;
}

void SceneManager::Update()
{
	switch (select_scene)
	{
	case TITLE:
		break;
	case MENU:
		break;
	case INGAME:
		break;
	case RESULT:
		break;
	default:
		break;
	}


}

void SceneManager::Draw()
{
	switch (select_scene)
	{
	case TITLE:
		break;
	case MENU:
		break;
	case INGAME:
		break;
	case RESULT:
		break;
	default:
		break;
	}
}

void SceneManager::ChangeScene(SceneType scene)
{
	select_scene = scene;
}

void SceneManager::Exit()
{
}