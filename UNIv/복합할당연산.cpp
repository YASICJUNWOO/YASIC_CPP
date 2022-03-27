#include <iostream>
using namespace std;

int main() {

	int x = 20;
	int y = 30;
	int z = 40;
	int t = 50;
	int u = 60;
	//변수 선언 및 초기화

	x += 5;
	y -= 3;
	z *= 10;
	t /= 10;
	u %= 7;
	//복합할당

	cout << "x의 값: " << x << endl;
	cout << "y의 값: " << y << endl;
	cout << "z의 값: " << z << endl;
	cout << "t의 값: " << t << endl;
	cout << "u의 값: " << u;

	return 0;
}

//결과는 복합 할당을 통해 모두 변수에 상수를 연산한 수가 출력되었습니다