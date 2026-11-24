#pragma once

#include "SceneBase.h"

class SceneManager : public SceneBase
{
private:
		//シーンタイプ
	enum  SceneType
		{
			TITLE,
			MENU,
			INGAME,
			RESULT,
		};
		SceneType select_scene; //現在のシーンタイプ

public:
		//初期化
	void Init() ;
	//更新
	void Update() ;
	//描画
	void Draw() ;

	//シーン切り替え
	void ChangeScene(SceneType scene);


	//終了処理
	void Exit() ;

};
