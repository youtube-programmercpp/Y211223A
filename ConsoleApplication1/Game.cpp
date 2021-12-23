// Gme.cpp
#include <iostream>
#include <string>
#include "Game.h"
using namespace std;

// コンストラクタ
Game::Game() {
	//敵オブジェクトをNULLで初期化
	for (int index = 0; index < sizeof enemy / sizeof * enemy; index++)
		enemy[index] = NULL;

	enemy_num = 0;
}
//実行
void Game::execute() {

	// 初期化
	initialize();

	// 戦闘
	battle();

	// 終了
	finalize();

}
// 初期化
void Game::initialize() {

	// 敵数を乱数で決める
	enemy_num = ENEMY_NUM_MIN + rnd() % (ENEMY_NUM_MAX - ENEMY_NUM_MIN + 1);

	//敵数分繰り返す
	for (int index = 0; index < enemy_num; index++) {

		// 敵オブジェクトを生成
		enemy[index] = new Enemy;

		// 敵オブジェクトの名前を設定
		string enemy_name = "スライム" + to_string(index);
		enemy[index]->setName(enemy_name);

		// 敵オブジェクトのHPを設定
		int enemy_hp = ENEMY_HP_MIN + rnd() % (ENEMY_HP_MAX - ENEMY_HP_MIN + 1);
		enemy[index]->setHitPoint(enemy_hp);

	}
}
// 戦闘
void Game::battle() {

	int end = 0;

	while (end == 0) {

		// すべての敵の状態(名前、 HP) を表示
		for (int index = 0; index < enemy_num; index++) {
			if (enemy[index]->getHitpoint() > 0) {
				cout << index << ":";
				enemy[index]->showData();
			}
		}
		// プレイヤーコマンド入力
		cout << "どのスライムに攻撃する? (数字で入力) 999 =終了" << endl;
		int cmd;
		cin >> cmd;

		//入力値が終了なら戦闘終了
		if (cmd == 999)
			break;

		// 入力値が有効か判定
		if (cmd < 0 || cmd >= enemy_num) {
			cout << "無効な値です。" << endl;
		}
		else {
			//指定した敵にダメージ与える
			int damage = rnd() % ATTACK_MAX;
			enemy[cmd]->receiveDamage(damage);

			//全ての敵が倒れたら戦闘終了
			end = 1;
			for (int index = 0; index < enemy_num; ++index) {
				if (enemy[index]->getHitpoint() > 0) {
					end = 0;
					break;
				}
			}
			if (end) {
				cout << "全てのスライムを倒した" << endl;
				break;
			}
		}
	}
}

void Game::finalize() {
	//敵オブジェクト破棄
	for (int index = 0; index < enemy_num; index++) {
		delete enemy[index];

	}
}

