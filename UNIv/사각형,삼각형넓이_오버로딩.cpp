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
	cout << "�� ���� ���� : " <<onelength<< endl;
	triangle triangle(onelength);
	square square(onelength);
	cout << "���ﰢ�� ����: ";
	triangle.cal();
	cout << "���簢�� ����: ";
	square.cal();
}