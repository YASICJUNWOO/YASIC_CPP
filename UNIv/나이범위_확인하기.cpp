#include <iostream>
using namespace std;

int main() {
	int age;
	bool eligible;

	cout << "나이를 입력하세요: ";
	cin >> age;
	//나이를 입력받는다

	eligible = (age >= 25) && (age <= 100);     //25~100세면 eligible에 true값 아니면 false값 저장

	if (eligible) {
		cout << "자동차를 대여할 수 있습니다";        //eligible값이 true일때
	}
	else {
		cout << "죄송합니다. 자동차를 대여할 수 없습니다.";       //eligible값이 false일때
	}
	return 0;
}

//bool 값을 활용하여 예비 조건식 개념으로 미리 값을 저장하여 if문을 복잡하지않게 작성하는 방식입니다.