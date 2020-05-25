#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include"Header.h"

using namespace std;
//Zadacha 1
int main() {
	
	cout << "Enter first number->";
	int a;
	cin >> a;
	cout << "Enter secand number->";
	int b;
	cin >> b;
	Number n(a);
	Number m(b);
	int action;
	do {
		cout << "1.Plus" << endl;
		cout << "2.Minus" << endl;
		cout << "3.Mnoj" << endl;
		cout << "4.Dil" << endl;
		cout << "0.Exit" << endl;
		cin >> action;
		system("cls");
		switch (action)
		{
		case 1:
			cout << "Ansver->"<<n.plus(m)<<endl;
			break;
		case 2:
			cout << "Ansver->" << n.min(m) << endl;
			
			break;
		case 3:
			cout << "Ansver->" << n.mnoj(m) << endl;
			
			break;
		case 4:
			cout << "Ansver->" << n.dil(m) << endl;
			break;
		}

	} while (action != 0);
	
}
//Zadacha 2
int main() {
	srand(time(0));
	int number = rand() % 100;
	Arr arr;
	arr.fill(number);
	arr.print();
	int sum=arr.sum();
	cout << "sum items of arr=" << sum << endl;
}
