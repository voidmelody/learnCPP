#pragma once

#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name;
	Position2D m_location;	// 이렇게 그냥 사용하는 관계를 composition, 구성 관계라고 함.
	//int m_x;	// location
	//int m_y;

public:
	Monster(const std::string name_in, const Position2D& pos_in)
		: m_name(name_in), m_location(pos_in)
	{}
	void moveTo(const Position2D& pos_target)
	{
		/*m_x = x_target;
		m_y = y_target;*/
		m_location.set(pos_target); // Monster 입장에선, set 함수가 어떻게 동작하는지 모름. 
									// 이렇게 하는 것이 좋음. 신경 안쓸수록 좋지. 쪼개는 게 좋다.
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}

};
