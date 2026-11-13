#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cout <<  "Enter number = ";
    cin >> num;
    cout << num << endl;
    cin.ignore();

    string str1;
    cout <<  "Enter name = ";
    cin >> str1;
    cout << str1 << endl;
    cin.ignore();

    string str2;
    cout <<  "Enter name = ";
    getline(cin, str2);
    cout << str2;

    return 0;
}