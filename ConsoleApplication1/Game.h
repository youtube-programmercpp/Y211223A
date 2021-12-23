//Game.h
#include <random>
#include <vector>
#include "Enemy.h"
#define ENEMY_NUM_MIN 1 // �G�̍ŏ���
#define ENEMY_NUM_MAX 10 // �G�̍ő吔
#define ENEMY_HP_MIN 10 // �G�̍ŏ�HP
#define ENEMY_HP_MAX 50 // �G�̍ő�HP

#define ATTACK_MAX (10+1) // �U���̍ő�l

class Game {
	std::random_device   rnd      ; // ���������p�I�u�W�F�N�g
	int                  enemy_num; // �G�̑���
	std::vector<Enemy>   enemy    ; // �G�I�u�W�F�N�g
	bool �S�Ă̓G���|�ꂽ() const noexcept;
	void ���ׂĂ̓G�̏�Ԃ�\��() const;
	static void �w�肵���G�Ƀ_���[�W�^����(Enemy& r, int damage, std::ostream& ostm);
public:
	Game();
	void execute(); // ���s
};
