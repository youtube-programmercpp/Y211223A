#include "Enemy.h"
#include<iostream>

Enemy::Enemy
( std::string&& name    
, int           hitPoint
) noexcept
	: name    (std::move(name    ))
	, hitPoint(          hitPoint )
{
}
Enemy::operator bool() const noexcept
{
	return hitPoint > 0;
}



//Enemy.cpp

using namespace std;
//状態を表示
void Enemy::showData(std::ostream& ostm) const
{
	ostm << "name = \"" << name << "\", hitPoint = " << hitPoint << endl;
}
//ダメージを受ける
void Enemy::receiveDamage(int damage) {
	hitPoint -= damage;
}
std::string Enemy::getName() const
{
	return name;
}
