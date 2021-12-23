//Enemy.cpp

#include<iostream>
#include "Enemy.h"
using namespace std;
//状態を表示
void Enemy::showData() {
	cout << "name = \"" << name << "\", hitPoint = " << hitPoint << endl;
}
//ダメージを受ける
void Enemy::receiveDamage(int damage) {
	hitPoint -= damage;
	cout << damage << "のダメージを受けた" << endl;
	if (hitPoint < 0) {
		hitPoint = 0;
		cout << name << "は倒れた" << endl;
	}
}
int Enemy::getHitpoint() //HPの値を取得
{
	return hitPoint;
}
void Enemy::setName(std::string na)
{
	name = na;
}
std::string Enemy::getName()
{
	return name;
}
void Enemy::setHitPoint(int hit) //HPの値セット
{
	hitPoint = hit;
}
