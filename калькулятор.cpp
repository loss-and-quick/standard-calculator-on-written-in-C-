#include <iostream>
#include <string>
using namespace std;
void boddy()
{
	string qwe;
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
			cout<< "�� �� ���� ����!"<<endl;
		}
}
int main()
{
	setlocale(0, "");
	boddy();
	return 0;
}
