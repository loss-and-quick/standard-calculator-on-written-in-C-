#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	int b;
	string c;
	cout << "������� �����: ";
	cin >> a;
	cout << "������� �����: ";
	cin >> b;
	cout << "������� ����: ";
	cin >> c;
	if (c=="+" or c=="-" or c=="*" or c=="/"){
		if (c=="+"){
			int otvet=a+b;
			cout << otvet;
		}else if (c=="-"){
			int otvet=a-b;
			cout<< otvet;
		}else if (c=="*"){
			int otvet=a*b;
			cout<< otvet;
		}else {
			int otvet=a/b;
			cout<< otvet;
		}
	}else{
		cout<< "�� �� ���� ���� ���� ��� �� ����!"<<end1;
	}
		
	return 0;
}
