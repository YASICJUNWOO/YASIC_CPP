#include <iostream>
using namespace std;

class triangle {
private:
	double length;
public:
	triangle(double length) {
		this->length = length;
	}

	void  cal() {
		cout << length * 0.8660 << endl;
	}
};

class square {
private:
	double length;
public:
	square(double length) {
		this->length = length;
	}

	void cal() {
		cout << length * length << endl;
	}
};


int main() {
	double onelength = 7.0;
	cout << "한 변의 길이 : " <<onelength<< endl;
	triangle triangle(onelength);
	square square(onelength);
	cout << "정삼각형 넓이: ";
	triangle.cal();
	cout << "정사각형 넓이: ";
	square.cal();
}