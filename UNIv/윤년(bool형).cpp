#include <iostream>                //3가지 조건을 확인하여 윤년을 찾는 프로그램
using namespace std;

int main() {
	int year;
	bool divBy400, divBy4, divBy100;        // true / false 값 중 하나로 저장됨
	bool leapyear;

	cout << "연도를 입력하세요: ";
	cin >> year;
	divBy400 = ((year % 400) == 0);      //해당 년을 400으로 나눈 나머지가 0 이면 true
	divBy4 = ((year % 4) == 0);          //해당 년을 4으로 나눈 나머지가 0 이면 true
	divBy100 = ((year % 100) == 0);      //해당 년을 100으로 나눈 나머지가 0 이면 true
	leapyear = (divBy400) || (divBy4 && !(divBy100));

	/* 1. 400으로 나누어 지거나 
	   2. 4으로 나누어지지만 100으로는 나누어지면 안됨 */

	if (leapyear)
	{
		cout << year << "년은 윤년입니다." << endl;
	}
	else
	{
		cout << year << "년은 윤년이 아닙니다." << endl;
	}

	return 0;
}

/*윤년은 4로 나누었을 떄 나머지가 0인 해를 윤년이라한다 
* 하지만 이중 100으로 나누었을 떄 나머지가 0인 해는 예외로 평년이다
* 또한 이중 400으로 나누었을 때 나머지가 0인 해는 또한 예외로 윤년이다
* 
* 이 세가지 예시를 bool형으로 따로 처리하고 leapyear로 다시 통합해준 다음
* leapyear가 true일 떄만 윤년이라고 출력하도록 했다*/

