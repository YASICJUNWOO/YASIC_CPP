#include <iostream>
using namespace std;

int main() {
	double x = 23.56;
	int y = 30;

	cout << "ĳ������ ���� �ʴ� ���: " << x + y << endl;

	cout << "ĳ������ �� ���: " << static_cast<int>(x) + y;
	//static_cast<�ڷ���>(����)�� Ȱ���Ͽ� x�� int������ �ٲ��ݴϴ�.
	return 0;
}

//static_cast<�ڷ���>(����)�� Ȱ���Ͽ� �ڽ��� ���ϴ� �ڷ������� ��������� ��ȯ���� �� �ֽ��ϴ�.