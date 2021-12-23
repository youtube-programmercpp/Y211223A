//Enemy.h
#include <string>
class Enemy {
private:
	std::string name    ;
	int         hitPoint; //�̗�

public:
	Enemy
	( std::string&& name    
	, int           hitPoint
	) noexcept;
	explicit operator bool() const noexcept;// alive ����



	void setName(std::string na);
	std::string getName() const;
	void setHitPoint(int hit); //HP�̒l�Z�b�g
	int getHitpoint() const noexcept; //HP�̒l���擾
	void showData(std::ostream& ostm) const; //���O��HP��\��
	void receiveDamage(int damage);
};
