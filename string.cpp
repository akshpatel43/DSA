#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name = "Aksh Patel";
    cout << name.length() << endl;
    cout << name.find("sh", 0) << endl;
    cout << name.substr(2, 5) << endl;

    // string str1;
    // cout << "Enter name = ";
    // cin >> str1;
    // cout << str1 << endl;
    // cin.ignore();

    // string str2;
    // cout << "Enter name = ";
    // getline(cin, str2);
    // cout << str2 << endl;

    string name2("aksh patel");  
    cout << name2 << endl << name2[8] << endl; 
    cout << name2.size();


    return 0;
}