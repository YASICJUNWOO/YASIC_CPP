#include <iostream>
#include <typeinfo>   //typeid().name() �Լ��� ����ϱ� ���� �ۼ��Ͽ���
using namespace std;

int main() {

	int x = 123;
	long y = 140;
	double z = 114.56;

	cout << "x + y�� �ڷ���: " << typeid(x + y).name() << endl; //���� �ڷ����� �˷��ִ� typeid().name()
	cout << "x + y�� ��: " << x + y << endl << endl;

	cout << "x + y�� �ڷ���: " << typeid(x + y + z).name() << endl;
	cout << "x + y�� ��: " << x + y + z<< endl << endl;
	return 0;
}


//�ٸ� �ڷ������� ������ ���� �� �� ������ ���� �ڷ������� �Ϲ��� ��ȯ�� �Ͼ�ٴ� ���� �˾ҽ��ϴ�.