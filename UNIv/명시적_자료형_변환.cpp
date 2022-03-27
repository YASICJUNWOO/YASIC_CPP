#include <iostream>
using namespace std;

int main() {
	double x = 23.56;
	int y = 30;

	cout << "캐스팅을 하지 않는 경우: " << x + y << endl;

	cout << "캐스팅을 한 경우: " << static_cast<int>(x) + y;
	//static_cast<자료형>(변수)를 활용하여 x를 int형으로 바꿔줍니다.
	return 0;
}

//static_cast<자료형>(변수)를 활용하여 자신이 원하는 자료형으로 명식적으로 변환해줄 수 있습니다.