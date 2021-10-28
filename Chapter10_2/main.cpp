#include "Monster.h"
using namespace std;

int main()
{
	Monster mon1("Sanson", Position2D(0, 0));
	// mon1.m_location;		
	// m_location은 mon1에 속해있지만, m_location은 mon1의 나머지 원소들(ex.name)은 알 필요가 없지.
	// Position2D class에만 기능 구현해놓으면 됨.
	cout << mon1 << endl;

	Monster mon2("Parsival", Position2D(0, 0));
	// mon2.m_location;

	//while (1) // game loop
	{
		// event
		mon1.moveTo(Position2D(1, 1));
		cout << mon1 << endl;
	}
	return 0;
}
