#include <iostream>
using namespace std;

int main() {
	int temperature;
	bool hot, cold;

	cout << "현재 온도를 입력하세요: ";
	cin >> temperature;

	hot = temperature >= 23;         // 온도가 23도 이상이면 true
	cold = temperature <= 15;        // 온도가 15도 이하이면 true

	if (hot || cold) {             //온도가 23도 이상이거나 15도 이하
		cout << "에어컨이 켜집니다." << endl;
		if (hot) {               //온도가 23도 이상일떄
			cout << "냉방 모드로 작동합니다." << endl;
		}
		else {              //온도가 15도 이하일떄
			cout << "난방 모드로 작동합니다." << endl;
		}
	}
	else {                //온도가 23도 미만이거나 15도 초과
		cout << "에어컨이 꺼집니다." << endl;
	}
	return 0;
}

//입력받은 온도에 따라 더울때, 추울때를 bool형으로 처리해주어 나머지는 정상온도로 예외처리되도록 하였습니다