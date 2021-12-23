//Enemy.h
#include <string>
class Enemy {
private:
	std::string name    ;
	int         hitPoint; //体力

public:
	Enemy
	( std::string&& name    
	, int           hitPoint
	) noexcept;
	explicit operator bool() const noexcept;// alive 判定



	void setName(std::string na);
	std::string getName() const;
	void setHitPoint(int hit); //HPの値セット
	int getHitpoint() const noexcept; //HPの値を取得
	void showData(std::ostream& ostm) const; //名前とHPを表示
	void receiveDamage(int damage);
};
