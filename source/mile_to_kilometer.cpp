#include<iostream>
using namespace std;

double mile_to_kilometer(double miles)
{
    double kilometers = miles * 1.609;
    return kilometers;
}

int main()
{
    double miles;
    cout << "Enter the distance in miles : ";
    cin >> miles;
    double kilometers = mile_to_kilometer(miles);
    cout << miles << " Miles equals " << kilometers << " Kilometers";
    return 0;
}