#include <iostream>
#include <typeinfo>   //typeid().name() 함수를 사용하기 위해 작성하였다
using namespace std;

int main() {

	int x = 123;
	long y = 140;
	double z = 114.56;

	cout << "x + y의 자료형: " << typeid(x + y).name() << endl; //값의 자료형을 알려주는 typeid().name()
	cout << "x + y의 값: " << x + y << endl << endl;

	cout << "x + y의 자료형: " << typeid(x + y + z).name() << endl;
	cout << "x + y의 값: " << x + y + z<< endl << endl;
	return 0;
}


//다른 자료형끼리 연산을 했을 때 더 범위가 넓은 자료형으로 암묵적 변환이 일어난다는 것을 알았습니다.