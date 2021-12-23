//Enemy.h
#include <string>
class Enemy {
private:
	std::string name    ;
	int         hitPoint; //‘Ì—Í
public:
	Enemy
	( std::string&& name    
	, int           hitPoint
	) noexcept;
	explicit operator bool() const noexcept;// alive ”»’è
	std::string getName() const;
	void showData(std::ostream& ostm) const; //–¼‘O‚ÆHP‚ð•\Ž¦
	void receiveDamage(int damage);
};
