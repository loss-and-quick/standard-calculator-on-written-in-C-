#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	int b;
	string c;
	cout << "ââåäèòå öèôðó: ";
	cin >> a;
	cout << "ââåäèòå öèôðó: ";
	cin >> b;
	cout << "ââåäèòå çíàê: ";
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
		cout<< "ÒÛ íå ââåë çíàê ëèáî ââ¸ë íå çíàê!"<<end1;
	}
		
	return 0;
}
