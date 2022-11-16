#include <iostream>
using namespace std;

double lokata(double wplata)
{
	return (wplata*0.08)*0.81;
}
int main()
{
	double wplata;
	cout << "Podaj ile pieniedzy wplacasz: ";
	cin >> wplata;
	cout <<"Twoj zysk po roku: " << lokata(wplata);
}