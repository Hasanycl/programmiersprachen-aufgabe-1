#include<iostream>
using namespace std;

 void quersumme_finder()
{
	int number;
	int quersumme = 0;
	cout << "Ihre Zahl:";
	cin >> number;

	while (number > 0)
	{
		quersumme += number % 10;
		number = number / 10;
	}
	cout << "Quersumme:" <<quersumme << endl;
}
int main()
{
 quersumme_finder();
};