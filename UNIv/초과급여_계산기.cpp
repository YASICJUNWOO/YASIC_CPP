/*초과 근무 시간에 따른 급여 계산*/

#include <iostream>
#include <iomanip>  /*set,setprecision 같은 매개변수화된
                      스트림 조작자 함수 제공
					   std::dec	변수값을 10진수로 출력
					   std::hex	변수값을 16진수로 출력
					   std::setw	문자열 출력시 개수 지정
					   std::setfill	공백을 채울 문자 지정
					   std::left	왼쪽 정렬(align)*/
using namespace std;

int main() {
	double hours, rate, regularPay, overPay=0.0, totalPay;

	cout << "업무 시간을 입력하세요: ";
	cin >> hours;
	cout << "시간당 급여를 입력하세요: ";
	cin >> rate;
	regularPay = hours * rate;

	if (hours > 40.0) {
		
		overPay = (hours - 40.0) * rate * 0.30;
	}

	totalPay = regularPay + overPay;
	
	cout << fixed << showpoint;  //fixed : 정수부 제외 n자리, showpoint : 뒤에 0표시
	cout << "일반 급여 =" << setprecision(2) << regularPay << endl;
	//setprecision(n) : 소수정 자리수 표시
	cout << "초과 근무에 대한 급여=" << setprecision(2) << overPay << endl;
	cout << "전체 급여 =" << setprecision(2) << totalPay << endl;
	return 0;
}
