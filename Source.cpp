#include <iostream>
#include <conio.h>
using namespace std;
void main() {
	int num1,num2,num3;
	float avg=0;
	cout << "inter first number\n";
	cin >> num1;
	cout << "inter secoonnd number:\n";
	cin >> num2;
	cout << "inter third number:\n";
	cin >> num3;
	avg = (num1 + num2 + num3) /3;
	cout << "your evg:" << avg;

}