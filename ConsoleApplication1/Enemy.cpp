//Enemy.cpp

#include<iostream>
#include "Enemy.h"

//��Ԃ�\��
void Enemy::show Data() {
	cout << �H�H�H << endl;
}
//�_���[�W���󂯂�
void Enemy::receiveDamage(int damage) {
	cout << ? << "�̃_���[�W���󂯂�" << endl;
	if (hitPoint < 0) {
		hitPoint = 0;
		cout << �H"�͓|�ꂽ" << endl;
	}
}
