#include <iostream>
#include <iomanip>  /*set,setprecision ���� �Ű�����ȭ��
                      ��Ʈ�� ������ �Լ� ����
					   std::dec	�������� 10������ ���
					   std::hex	�������� 16������ ���
					   std::setw	���ڿ� ��½� ���� ����
					   std::setfill	������ ä�� ���� ����
					   std::left	���� ����(align)*/
using namespace std;

int main() {
	double hours, rate, regularPay, overPay=0.0, totalPay;

	cout << "���� �ð��� �Է��ϼ���: ";
	cin >> hours;
	cout << "�ð��� �޿��� �Է��ϼ���: ";
	cin >> rate;
	regularPay = hours * rate;

	if (hours > 40.0) {
		
		overPay = (hours - 40.0) * rate * 0.30;
	}

	totalPay = regularPay + overPay;
	
	cout << fixed << showpoint;  //fixed : ������ ���� n�ڸ�, showpoint : �ڿ� 0ǥ��
	cout << "�Ϲ� �޿� =" << setprecision(2) << regularPay << endl;
	//setprecision(n) : �Ҽ��� �ڸ��� ǥ��
	cout << "�ʰ� �ٹ��� ���� �޿�=" << setprecision(2) << overPay << endl;
	cout << "��ü �޿� =" << setprecision(2) << totalPay << endl;
	return 0;
}

/*�ʰ� �ٹ� �ð��� ���� �޿� ���*/