// main.cpp
#include"Game.h"
int main() {
	// �Q�[���I�u�W�F�N�g���쐬
	Game game;

	game.execute();

	return 0;
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q14254273899
ID����J����

2021/12/21 23:00

0��

C����ɂ��Ăł��B
���s���ʂ��摜�̂悤�ɂ������̂ł���������Ȃ��̂ŋ����Ē��������ł��B�����ߌ`���ɂȂ��Ă��Ď����Ŗ��߂��Ƃ���͖��߂Ă܂����Ԉ���Ă����炷�݂܂���B(�����߂̏��́H�ł�)

// main.cpp
#include"Game.h"int main() {
// �Q�[���I�u�W�F�N�g���쐬
Game game;

game.execute();

return 0;
}

// Gme.cpp
#include <iostream>
#include <string>
#include "Game.h"
#include "Enemy.h"
using namespace std;

// �R���X�g���N�^
Game::Game() {
//�G�I�u�W�F�N�g��NULL�ŏ�����
for(�H�H�H)

enemy_num = 0;
}
//���s
void Game::execute() {

// ������
initialize();

// �퓬
battle();

// �I��
finalize();

}
// ������
void Game::initialize() {

// �G���𗐐��Ō��߂�
enemy_num = ENEMY_NUM_MIN + rnd() % (ENEMY_NUM_MAX - ENEMY_NUM_MIN+1);

//�G�����J��Ԃ�
for (int index = 0; index <enemy_num; index++) {

// �G�I�u�W�F�N�g�𐶐�
enemy[index] = new Enemy;

// �G�I�u�W�F�N�g�̖��O��ݒ�
string enemy_name = "�X���C��"+ to_string(index);
�H�H�H

// �G�I�u�W�F�N�g��HP��ݒ�
int enemy_hp = ENEMY_HP_MIN + rnd() % (ENEMY_HP_MAX - ENEMY_HP_MIN + 1);
�H�H�H

}
}
// �퓬
void Game::battle() {

int end = 0;

while (end == 0) {

// ���ׂĂ̓G�̏��(���O�A HP) ��\��
for (int index = 0; index <enemy_num; index++) {
if (enemy[index]->getHitpoint() >0) {
cout <<index <<":";
enemy[index] ->showData();
}
}
// �v���C���[�R�}���h����
cout <<"�ǂ̃X���C���ɍU������? (�����œ���) 999 =�I��"<<endl;
int cmd;
cin >>cmd;

//���͒l���I���Ȃ�퓬�I��
�H�H�H

// ���͒l���L��������
if(�H�H�H) {
cout <<"�����Ȓl�ł��B"<<endl;
}
else {
//�w�肵���G�Ƀ_���[�W�^����
int damage rnd()% ATTACK_MAX;
�H�H�H

//�S�Ă̓G���|�ꂽ��퓬�I��
�H�H�H
if(�H�H�H)
cout <<"�S�ẴX���C����|����"<<endl;
}
}
}

void Game::finalize(){
//�G�I�u�W�F�N�g�j��
for(int index=0; index<enemy_num;index++){
�H�H�H�H

}
}

//Game.h
#include <random>
#include "Enemy.h"
#define ENEMY_NUM_MIN 1 // �G�̍ŏ���
#define ENEMY_NUM_MAX 10 // �G�̍ő吔
#define ENEMY_HP_MIN 10 // �G�̍ŏ�HP
#define ENEMY_HP_MAX 50 // �G�̍ő�HP

#define ATTACK_MAX (10+1) // �U���̍ő�l

class Game {
private:

std::random_device rnd; // ���������p�I�u�W�F�N�g

int enemy_num; // �G�̑���

Enemy* enemy [10]; // �G�I�u�W�F�N�g

void initialize(); // ������

void battle(); // �퓬

void finalize(); // �I��

public:

Game(); // �R���X�g���N�^
void execute(); // ���s
};

����

�摜
�⑫
//Enemy.cpp

#include<iostream>
#include "Enemy.h"

//��Ԃ�\��
void Enemy::show Data(){
cout<<�H�H�H<<endl;
}
//�_���[�W���󂯂�
void Enemy::receiveDamage(int damage){
cout<<?<<"�̃_���[�W���󂯂�"<<endl;
if(hitPoint <0){
hitPoint=0;
cout<<�H"�͓|�ꂽ"<<endl;
}
}
//Enemy.h
class Enemy {
private:
std::string name;
int hitPint; //�̗�

public:
void setName(std::string na);
std::string getName();
void setHitPoint(int hit); //HP�̒l�Z�b�g
int getHitpoint(); //HP�̒l���擾
void showData(); //���O��HP��\��
void receiveDamage(int damage);
};

C����֘A�E44�{��
*/
