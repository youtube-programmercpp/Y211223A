// main.cpp
#include"Game.h"
int main() {
	// ゲームオブジェクトを作成
	Game game;

	game.execute();

	return 0;
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q14254273899
ID非公開さん

2021/12/21 23:00

0回答

C言語についてです。
実行結果を画像のようにしたいのですが分からないので教えて頂きたいです。穴埋め形式になっていて自分で埋めれるところは埋めてますが間違っていたらすみません。(穴埋めの所は？です)

// main.cpp
#include"Game.h"int main() {
// ゲームオブジェクトを作成
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

// コンストラクタ
Game::Game() {
//敵オブジェクトをNULLで初期化
for(？？？)

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
enemy_num = ENEMY_NUM_MIN + rnd() % (ENEMY_NUM_MAX - ENEMY_NUM_MIN+1);

//敵数分繰り返す
for (int index = 0; index <enemy_num; index++) {

// 敵オブジェクトを生成
enemy[index] = new Enemy;

// 敵オブジェクトの名前を設定
string enemy_name = "スライム"+ to_string(index);
？？？

// 敵オブジェクトのHPを設定
int enemy_hp = ENEMY_HP_MIN + rnd() % (ENEMY_HP_MAX - ENEMY_HP_MIN + 1);
？？？

}
}
// 戦闘
void Game::battle() {

int end = 0;

while (end == 0) {

// すべての敵の状態(名前、 HP) を表示
for (int index = 0; index <enemy_num; index++) {
if (enemy[index]->getHitpoint() >0) {
cout <<index <<":";
enemy[index] ->showData();
}
}
// プレイヤーコマンド入力
cout <<"どのスライムに攻撃する? (数字で入力) 999 =終了"<<endl;
int cmd;
cin >>cmd;

//入力値が終了なら戦闘終了
？？？

// 入力値が有効か判定
if(？？？) {
cout <<"無効な値です。"<<endl;
}
else {
//指定した敵にダメージ与える
int damage rnd()% ATTACK_MAX;
？？？

//全ての敵が倒れたら戦闘終了
？？？
if(？？？)
cout <<"全てのスライムを倒した"<<endl;
}
}
}

void Game::finalize(){
//敵オブジェクト破棄
for(int index=0; index<enemy_num;index++){
？？？？

}
}

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

Enemy* enemy [10]; // 敵オブジェクト

void initialize(); // 初期化

void battle(); // 戦闘

void finalize(); // 終了

public:

Game(); // コンストラクタ
void execute(); // 実行
};

続く

画像
補足
//Enemy.cpp

#include<iostream>
#include "Enemy.h"

//状態を表示
void Enemy::show Data(){
cout<<？？？<<endl;
}
//ダメージを受ける
void Enemy::receiveDamage(int damage){
cout<<?<<"のダメージを受けた"<<endl;
if(hitPoint <0){
hitPoint=0;
cout<<？"は倒れた"<<endl;
}
}
//Enemy.h
class Enemy {
private:
std::string name;
int hitPint; //体力

public:
void setName(std::string na);
std::string getName();
void setHitPoint(int hit); //HPの値セット
int getHitpoint(); //HPの値を取得
void showData(); //名前とHPを表示
void receiveDamage(int damage);
};

C言語関連・44閲覧
*/
