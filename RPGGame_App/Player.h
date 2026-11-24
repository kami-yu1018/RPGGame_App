#pragma once
#include <iostream>
#include <string>

/// <summary>
/// プレイヤークラス
/// </summary>
class Player
{
public:

	/// <summary>
	/// プレイヤーの最大HP
	/// </summary>
	const int MAX_HP = 100;

	/// <summary>
	/// プレイヤー名
	/// </summary>
	std::string name;

	/// <summary>
	/// プレイヤーHP
	/// </summary>
	int hp;

	/// <summary>
	/// プレイヤー攻撃力
	/// </summary>
	int attack;

	/// <summary>
	/// 魔力
	/// </summary>
	int magicAttack;

	/// <summary>
	/// プレイヤーマナ
	/// </summary>
	int mp;

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="playerName">名前</param>
	/// <param name="playerHp">HP</param>
	/// <param name="playerAttack">攻撃力</param>
	/// <param name="playerMagicAttack">魔力</param>
	/// <param name="playerMp">マナ</param>
	Player(std::string playerName, int playerHp, int playerAttack, int playerMagicAttack, int playerMp);

	/// <summary>
	/// 剣攻撃
	/// </summary>
	void SwordAttack();

	/// <summary>
	/// 魔法攻撃
	/// </summary>
	void MagicAttack();

};