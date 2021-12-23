//Enemy.cpp

#include<iostream>
#include "Enemy.h"

//状態を表示
void Enemy::show Data() {
	cout << ？？？ << endl;
}
//ダメージを受ける
void Enemy::receiveDamage(int damage) {
	cout << ? << "のダメージを受けた" << endl;
	if (hitPoint < 0) {
		hitPoint = 0;
		cout << ？"は倒れた" << endl;
	}
}
