#include <iostream>
using namespace std;

int main() {
	int age;
	bool eligible;

	cout << "���̸� �Է��ϼ���: ";
	cin >> age;
	//���̸� �Է¹޴´�

	eligible = (age >= 25) && (age <= 100);     //25~100���� eligible�� true�� �ƴϸ� false�� ����

	if (eligible) {
		cout << "�ڵ����� �뿩�� �� �ֽ��ϴ�";        //eligible���� true�϶�
	}
	else {
		cout << "�˼��մϴ�. �ڵ����� �뿩�� �� �����ϴ�.";       //eligible���� false�϶�
	}
	return 0;
}

//bool ���� Ȱ���Ͽ� ���� ���ǽ� �������� �̸� ���� �����Ͽ� if���� ���������ʰ� �ۼ��ϴ� ����Դϴ�.