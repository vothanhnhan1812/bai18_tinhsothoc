// bai18_tinhsothoc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "TINH SO THOC TREN BAN CO VUA\n";
    int SoO;
    double tongThoc = 0;
    cout << "nhap so o: "; cin >> SoO;

    for (int i = 0; i < SoO; i++)
    {
        tongThoc = tongThoc + pow(2, i);
    }
    cout << "TONG SO THOC LA: " << tongThoc;

    return 0;

}
