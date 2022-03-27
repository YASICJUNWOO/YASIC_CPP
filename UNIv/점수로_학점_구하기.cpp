#include <iostream>
using namespace std;

int main() {
	int score;
	char grade;

	cout << "0~100점 사이의 점수 입력: ";
	cin >> score;
	//점수 입력받기

	if (score >= 90) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else if (score >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	cout << "최종 학점= " << grade;
	return 0;
}

//점수를 입력받아 상위점수대 부터 차례로 if문을 걸어주어 grade에 학점을 저장해 출력하는 프로그램입니다.