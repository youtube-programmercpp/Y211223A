//Game.h
#include <random>
#include "Enemy.h"
#define ENEMY_NUM_MIN 1 // 敵の最小数
#define ENEMY_NUM_MAX 10 // 敵の最大数
#define ENEMY_HP_MIN 10 // 敵の最小HP
#define ENEMY_HP_MAX 50 // 敵の最大HP

#define ATTACK_MAX (10+1) // 攻撃の最大値

class Game {
private:

	std::random_device rnd; // 乱数発生用オブジェクト

	int enemy_num; // 敵の総数

	Enemy* enemy[10]; // 敵オブジェクト

	void initialize(); // 初期化

	void battle(); // 戦闘

	void finalize(); // 終了

public:

	Game(); // コンストラクタ
	void execute(); // 実行
};
