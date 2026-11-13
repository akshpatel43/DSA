#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    
    for (int i = 10; i >= 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i <= 50; i+=5)
    {
        cout << i << " " ;
    }
    cout << endl;

    // for-each loop -> works on array , vector,  list....
    int arr[5] = {1,2,3,4,5};
    for (int i : arr)  //range based for loop
    {
        cout << i << " ";
    }

    return 0;
}