// Gme.cpp
#include <iostream>
#include <string>
#include "Game.h"
#include "Enemy.h"
using namespace std;

// �R���X�g���N�^
Game::Game() {
	//�G�I�u�W�F�N�g��NULL�ŏ�����
	for (�H�H�H)

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
	enemy_num = ENEMY_NUM_MIN + rnd() % (ENEMY_NUM_MAX - ENEMY_NUM_MIN + 1);

	//�G�����J��Ԃ�
	for (int index = 0; index < enemy_num; index++) {

		// �G�I�u�W�F�N�g�𐶐�
		enemy[index] = new Enemy;

		// �G�I�u�W�F�N�g�̖��O��ݒ�
		string enemy_name = "�X���C��" + to_string(index);
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
		for (int index = 0; index < enemy_num; index++) {
			if (enemy[index]->getHitpoint() > 0) {
				cout << index << ":";
				enemy[index]->showData();
			}
		}
		// �v���C���[�R�}���h����
		cout << "�ǂ̃X���C���ɍU������? (�����œ���) 999 =�I��" << endl;
		int cmd;
		cin >> cmd;

		//���͒l���I���Ȃ�퓬�I��
		�H�H�H

		// ���͒l���L��������
		if (�H�H�H) {
			cout << "�����Ȓl�ł��B" << endl;
		}
		else {
			//�w�肵���G�Ƀ_���[�W�^����
			int damage rnd() % ATTACK_MAX;
			�H�H�H

			//�S�Ă̓G���|�ꂽ��퓬�I��
			�H�H�H
			if (�H�H�H)
				cout << "�S�ẴX���C����|����" << endl;
		}
	}
}

void Game::finalize() {
	//�G�I�u�W�F�N�g�j��
	for (int index = 0; index < enemy_num; index++) {
		�H�H�H�H

	}
}

