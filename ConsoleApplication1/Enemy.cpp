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
//��Ԃ�\��
void Enemy::showData(std::ostream& ostm) const
{
	ostm << "name = \"" << name << "\", hitPoint = " << hitPoint << endl;
}
//�_���[�W���󂯂�
void Enemy::receiveDamage(int damage) {
	hitPoint -= damage;
}
int Enemy::getHitpoint() const noexcept //HP�̒l���擾
{
	return hitPoint;
}
void Enemy::setName(std::string na)
{
	name = na;
}
std::string Enemy::getName() const
{
	return name;
}
void Enemy::setHitPoint(int hit) //HP�̒l�Z�b�g
{
	hitPoint = hit;
}
