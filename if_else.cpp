#include<bits/stdc++.h> 
using namespace std; 

int main()
{

    int age;
    cout << "Enter age = ";
    cin >> age;
    if(age >= 18)
    {
        cout << "Adult";
    }
    if(age >= 13 and age < 18)
    // else if (age >= 13)
    {
        cout << "Teen";
    }
    if(age >= 1 && age < 13)
    // else if (age >= 1)
    {
        cout << "child";
    }

    cout << endl;

    // greatest among three
    int a, b, c;
    cout << "Enter numbers = ";
    cin >> a >> b >> c;
    
    int largest = a;

    if(b >= largest){
        largest = b;
    }
    if(c >= largest){
        largest = c;
    }
    cout << "largest number is " << largest;



    return 0;
}