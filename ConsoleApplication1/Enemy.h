//Enemy.h
class Enemy {
private:
	std::string name;
	int hitPoint; //体力

public:
	void setName(std::string na);
	std::string getName();
	void setHitPoint(int hit); //HPの値セット
	int getHitpoint(); //HPの値を取得
	void showData(); //名前とHPを表示
	void receiveDamage(int damage);
};
