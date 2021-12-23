// Gme.cpp
#include <iostream>
#include <string>
#include "Game.h"
using namespace std;

// �R���X�g���N�^
Game::Game()
	: rnd      {}
	, enemy    {}
	, enemy_num{ENEMY_NUM_MIN + rnd() % (ENEMY_NUM_MAX - ENEMY_NUM_MIN + 1)} // �G���𗐐��Ō��߂�
{

	//�G�����J��Ԃ�
	for (auto& r : enemy) {
		const auto index = &r - &enemy.front();
		if (index == enemy_num)
			break;
		else {
			// �G�I�u�W�F�N�g�𐶐�
			r =
			{ "�X���C��" + to_string(index) // �G�I�u�W�F�N�g�̖��O��ݒ�
			, ENEMY_HP_MIN + rnd() % (ENEMY_HP_MAX - ENEMY_HP_MIN + 1)// �G�I�u�W�F�N�g��HP��ݒ�
			};
		}
	}
}
bool Game::�S�Ă̓G���|�ꂽ() const noexcept
{
	for (const auto& r : enemy) {
		if (r)
			return false;
	}
	return true;
}
void Game::���ׂĂ̓G�̏�Ԃ�\��() const
{
	for (const auto& r : enemy) {
		if (r) {
			cout << &r - &enemy.front() << ":";
			r.showData(cout);
		}
	}
}
void Game::�w�肵���G�Ƀ_���[�W�^����(Enemy& r, int damage, std::ostream& ostm)
{
	r.receiveDamage(damage);
	ostm << damage << "�̃_���[�W���󂯂�" << endl;
	if (r)
		ostm << r.getName() << "�͓|�ꂽ" << endl;
}
//���s
void Game::execute() {
	// �퓬
	for (;;) {
		���ׂĂ̓G�̏�Ԃ�\��();
		// �v���C���[�R�}���h����
		cout << "�ǂ̃X���C���ɍU������? (�����œ���) 999 =�I��" << endl;
		int cmd;
		if (cin >> cmd) {
			//���͒l���I���Ȃ�퓬�I��
			if (cmd == 999)
				break;
			else if (0 <= cmd && cmd < enemy_num) {
				�w�肵���G�Ƀ_���[�W�^����(enemy[cmd], rnd() % ATTACK_MAX, cout);
				if (�S�Ă̓G���|�ꂽ()) {
					cout << "�S�ẴX���C����|����" << endl;
					break;
				}
			}
			else {
				cout << "�����Ȓl�ł��B" << endl;
				break;
			}
		}
		else
			break;//���̓G���[
	}
}
