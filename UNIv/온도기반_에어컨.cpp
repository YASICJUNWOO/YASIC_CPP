#include <iostream>
using namespace std;

int main() {
	int temperature;
	bool hot, cold;

	cout << "���� �µ��� �Է��ϼ���: ";
	cin >> temperature;

	hot = temperature >= 23;         // �µ��� 23�� �̻��̸� true
	cold = temperature <= 15;        // �µ��� 15�� �����̸� true

	if (hot || cold) {             //�µ��� 23�� �̻��̰ų� 15�� ����
		cout << "�������� �����ϴ�." << endl;
		if (hot) {               //�µ��� 23�� �̻��ϋ�
			cout << "�ù� ���� �۵��մϴ�." << endl;
		}
		else {              //�µ��� 15�� �����ϋ�
			cout << "���� ���� �۵��մϴ�." << endl;
		}
	}
	else {                //�µ��� 23�� �̸��̰ų� 15�� �ʰ�
		cout << "�������� �����ϴ�." << endl;
	}
	return 0;
}

//�Է¹��� �µ��� ���� ���ﶧ, �߿ﶧ�� bool������ ó�����־� �������� ����µ��� ����ó���ǵ��� �Ͽ����ϴ�