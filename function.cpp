#include<bits/stdc++.h>

using namespace std; 

// void InputTwoNumAndPrintAddOfThem()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << a + b << endl;
// }

// int SumOfTwoNum(int a, int b) // parameterized function
// {
//     int res = a + b;
//     cout << res << endl;
//     return res;
// }



// void PassByValueAndReference(int x) // pass duplicate/copy of value
// A copy of num is passed. The original variable remains unchanged.

// void PassByValueAndReference(int &x) // reference // x directly refers to the original variable num.
void PassByValueAndReference(int *x) // using pointer
{
    *x = *x + 10;
}
int main()
{
    int num = 5;
    // PassByValueAndReference(num);
    PassByValueAndReference(&num);
    cout << num;
    return 0;
}