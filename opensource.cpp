#include <iostream>
#include <string>
using namespace std;
void boddy()
{
	string qwe;
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
			cout<< "ТЫ не ввел знак!"<<endl;
		}
}
int main()
{
	setlocale(0, "");
	boddy();
	return 0;
}
