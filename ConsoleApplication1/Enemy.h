//Enemy.h
class Enemy {
private:
	std::string name;
	int hitPoint; //�̗�

public:
	void setName(std::string na);
	std::string getName();
	void setHitPoint(int hit); //HP�̒l�Z�b�g
	int getHitpoint(); //HP�̒l���擾
	void showData(); //���O��HP��\��
	void receiveDamage(int damage);
};
