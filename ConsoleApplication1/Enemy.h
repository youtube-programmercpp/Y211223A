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
	std::string getName() const;
	void showData(std::ostream& ostm) const; //���O��HP��\��
	void receiveDamage(int damage);
};
