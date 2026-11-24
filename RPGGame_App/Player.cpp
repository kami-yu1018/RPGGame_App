#include "Player.h"

Player::Player(std::string playerName, int playerHp, int playerAttack, int playerMagicAttack, int playerMp)
{
	name = playerName;
	hp = playerHp;
	attack = playerAttack;
	magicAttack = playerAttack;
	mp = playerMp;
};

void Player::SwordAttack()
{
	std::cout << name << "の剣攻撃！" << std::endl;
	std::cout << attack << "ダメージ与えた！" << std::endl;
};

void Player::MagicAttack()
{
	std::cout << name << "!の魔法攻撃！" << std::endl;
	std::cout << attack << "ダメージ与えた！" << std::endl;
};