#include<iostream>
using namespace std;

int main(){
	int number = 26;
	float numb = 26.62;
	char ch = 'z';
	short show = 10;
	long lol = 28000;
	char myCountry [8] = {'P','A','K','I','S','T','A','N'};
	char *loc = &myCountry[3];
	double num = 36000;

	cout << "INT Number: " << number << endl;
	cout << "Float Numb: " << numb << endl;
	cout << "Short show: " << show << endl;
	cout << "Long lol: " << lol << endl;
	cout << "Double num: " << num << endl;
	cout << "Char Array myCountry: " << myCountry << endl;
	cout << "Character POINTER \"" << loc << "\" location in memory is " << &loc << endl;
	return 0;
}

