#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	int b;
	string c;
	cout << "введите цифру: ";
	cin >> a;
	cout << "введите цифру: ";
	cin >> b;
	cout << "введите знак: ";
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
		cout<< "ТЫ не ввел знак либо ввёл не знак!"<<end1;
	}
		
	return 0;
}
