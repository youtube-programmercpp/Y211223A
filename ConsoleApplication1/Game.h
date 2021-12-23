//Game.h
#include <random>
#include <vector>
#include "Enemy.h"
#define ENEMY_NUM_MIN 1 // 敵の最小数
#define ENEMY_NUM_MAX 10 // 敵の最大数
#define ENEMY_HP_MIN 10 // 敵の最小HP
#define ENEMY_HP_MAX 50 // 敵の最大HP

#define ATTACK_MAX (10+1) // 攻撃の最大値

class Game {
	std::random_device   rnd      ; // 乱数発生用オブジェクト
	int                  enemy_num; // 敵の総数
	std::vector<Enemy>   enemy    ; // 敵オブジェクト
	bool 全ての敵が倒れた() const noexcept;
	void すべての敵の状態を表示() const;
	static void 指定した敵にダメージ与える(Enemy& r, int damage, std::ostream& ostm);
public:
	Game();
	void execute(); // 実行
};
