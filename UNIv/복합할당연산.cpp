#include <iostream>
using namespace std;

int main() {

	int x = 20;
	int y = 30;
	int z = 40;
	int t = 50;
	int u = 60;
	//���� ���� �� �ʱ�ȭ

	x += 5;
	y -= 3;
	z *= 10;
	t /= 10;
	u %= 7;
	//�����Ҵ�

	cout << "x�� ��: " << x << endl;
	cout << "y�� ��: " << y << endl;
	cout << "z�� ��: " << z << endl;
	cout << "t�� ��: " << t << endl;
	cout << "u�� ��: " << u;

	return 0;
}

//����� ���� �Ҵ��� ���� ��� ������ ����� ������ ���� ��µǾ����ϴ�