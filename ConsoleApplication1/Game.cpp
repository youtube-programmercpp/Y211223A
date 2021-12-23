// Gme.cpp
#include <iostream>
#include <string>
#include "Game.h"
using namespace std;

// コンストラクタ
Game::Game()
	: rnd      {}
	, enemy    {}
	, enemy_num{ENEMY_NUM_MIN + rnd() % (ENEMY_NUM_MAX - ENEMY_NUM_MIN + 1)} // 敵数を乱数で決める
{

	//敵数分繰り返す
	for (auto& r : enemy) {
		const auto index = &r - &enemy.front();
		if (index == enemy_num)
			break;
		else {
			// 敵オブジェクトを生成
			r =
			{ "スライム" + to_string(index) // 敵オブジェクトの名前を設定
			, ENEMY_HP_MIN + rnd() % (ENEMY_HP_MAX - ENEMY_HP_MIN + 1)// 敵オブジェクトのHPを設定
			};
		}
	}
}
bool Game::全ての敵が倒れた() const noexcept
{
	for (const auto& r : enemy) {
		if (r)
			return false;
	}
	return true;
}
void Game::すべての敵の状態を表示() const
{
	for (const auto& r : enemy) {
		if (r) {
			cout << &r - &enemy.front() << ":";
			r.showData(cout);
		}
	}
}
void Game::指定した敵にダメージ与える(Enemy& r, int damage, std::ostream& ostm)
{
	r.receiveDamage(damage);
	ostm << damage << "のダメージを受けた" << endl;
	if (r)
		ostm << r.getName() << "は倒れた" << endl;
}
//実行
void Game::execute() {
	// 戦闘
	for (;;) {
		すべての敵の状態を表示();
		// プレイヤーコマンド入力
		cout << "どのスライムに攻撃する? (数字で入力) 999 =終了" << endl;
		int cmd;
		if (cin >> cmd) {
			//入力値が終了なら戦闘終了
			if (cmd == 999)
				break;
			else if (0 <= cmd && cmd < enemy_num) {
				指定した敵にダメージ与える(enemy[cmd], rnd() % ATTACK_MAX, cout);
				if (全ての敵が倒れた()) {
					cout << "全てのスライムを倒した" << endl;
					break;
				}
			}
			else {
				cout << "無効な値です。" << endl;
				break;
			}
		}
		else
			break;//入力エラー
	}
}
