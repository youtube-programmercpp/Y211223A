//Enemy.cpp

#include<iostream>
#include "Enemy.h"
using namespace std;
//��Ԃ�\��
void Enemy::showData() {
	cout << "name = \"" << name << "\", hitPoint = " << hitPoint << endl;
}
//�_���[�W���󂯂�
void Enemy::receiveDamage(int damage) {
	hitPoint -= damage;
	cout << damage << "�̃_���[�W���󂯂�" << endl;
	if (hitPoint < 0) {
		hitPoint = 0;
		cout << name << "�͓|�ꂽ" << endl;
	}
}
int Enemy::getHitpoint() //HP�̒l���擾
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
void Enemy::setHitPoint(int hit) //HP�̒l�Z�b�g
{
	hitPoint = hit;
}
