#include <iostream>
using namespace std;

int main() {
	const double PI = 3.14159;

	double radius;
	double perimeter;
	double area;

	cout << "���� ������ �Է�:";
	cin >> radius;
	perimeter = 2 * PI * radius;
	area = PI * PI * radius;

	cout << "������" << radius << endl;
	cout << "�ѷ�:" << perimeter << endl;
	cout << "���� :" << area;
	return 0;
}

/* double ���� ����� �Ǽ��� ����ϰ� PI���� constant�� �ٿ�
* ���� ����� �����Ͽ��� perimeter(�ѷ�),area(����)�� ����Ͽ�
����Ͽ����ϴ�*/