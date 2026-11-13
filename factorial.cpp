#include<bits/stdc++.h>

using namespace std; 

void fact(int n)
{
    int i = 1, fact = 1;
    while(i<=n)
    {
        fact = fact * i;
        i += 1;
    }
    cout << fact;
    
}

int main()
{
    int num;
    cout << "Enter Number = ";
    cin >> num;
    fact(num);
    return 0;
}