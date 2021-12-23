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
	std::string getName() const;
	void showData(std::ostream& ostm) const; //名前とHPを表示
	void receiveDamage(int damage);
};
