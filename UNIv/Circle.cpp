#include <iostream>
using namespace std;

int main() {
	const double PI = 3.14159;

	double radius;
	double perimeter;
	double area;

	cout << "원의 반지름 입력:";
	cin >> radius;
	perimeter = 2 * PI * radius;
	area = PI * PI * radius;

	cout << "반지름" << radius << endl;
	cout << "둘레:" << perimeter << endl;
	cout << "면적 :" << area;
	return 0;
}

/* double 형을 사용해 실수를 사용하고 PI값을 constant를 붙여
* 고정 상수를 설정하였고 perimeter(둘레),area(면적)을 계산하여
출력하였습니다*/