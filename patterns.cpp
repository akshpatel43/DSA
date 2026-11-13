#include<bits/stdc++.h>

using namespace std; 

void pattern1(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    // for (int i=n; i>0; i--)
    for (int i=1; i<=n; i++)
    {
        for(int j=0; j<n-i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i+1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }
        for(int k=0; k<=2*i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for(int i=n; i>0; i--)
    {
        for(int j=0; j<=n-i-1; j++)
        {
            cout << " ";
        }
        for(int k=1; k<=2*i-1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i-1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    int start = 1;
    for(int i=0; i<n; i++)
    {
        if(i%2==0) start = 1; 
        else start = 0;
        for(int j=0; j<=i; j++)
        {
            cout << start;
            start = 1 - start; // perform flip task 1010101..
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    int space = 2*(n-1);
    for(int i=1; i<=n; i++)
    {
        //numbers
        for(int j=1; j<=i; j++)
        {
            cout << j;
        }

        //space
        for(int k=1; k<=space; k++)
        {
            cout << " ";
        }

        //numbers
        for(int j=i; j>=1; j--)
        {
            cout << j;
        }

        cout << endl;
        space -= 2;
    }
}

void pattern12(int n)
{
    int num = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    for(int i=0; i<n; i++)
    {
        for(char ch = 'A'; ch <='A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for(int i=n; i>=0; i--)
    {
        for(char ch = 'A'; ch <='A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for(int i=0; i<n; i++)
    {
        char ch = 'A' + i;
        for(int j= 0; j<=i; j++)
        {
            cout << ch << " ";
            
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    for(int i=0; i<n; i++)
    {
        //space
        for(int j=0;j<n-i-1; j++)
        {
            cout << " ";
        }

        //char
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int k=1;k<= 2*i+1; k++)
        {
            cout << ch ;
            if(k <= breakpoint) ch++;
            else ch--; 
        }
        
        //space
        for(int j=0;j<n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl; 
    }
}

void pattern17(int n)
{
    
    for(int i=0; i<n; i++)
    {
        char ch = 'E' - i;
        for(int j=0; j<=i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for(int i=0; i<n; i++)
    {
        //star
        for(int j=0; j<n-i; j++)
        {
            cout << "*";
        }

        //space
        for(int k=0; k<2*i; k++)
        {
            cout << " ";
        }

        //star
        for(int j=0; j<n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    int space = 2*(n-1);
    for(int i=1; i<=n; i++)
    {
        //numbers
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }

        //space
        for(int k=1; k<=space; k++)
        {
            cout << " ";
        }

        //numbers
        for(int j=i; j>=1; j--)
        {
            cout << "*";
        }

        cout << endl;
        space -= 2;
    }
}

void pattern19(int n)
{
    for(int i=0; i<n; i++)
    {
        //star
        for(int j=0; j<n-i; j++)
        {
            cout << "*";
        }

        //space
        for(int k=0; k<2*i; k++)
        {
            cout << " ";
        }

        //star
        for(int j=0; j<n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n-1; i>=0; i--)
    {
        //star
        for(int j=0; j<n-i; j++)
        {
            cout << "*";
        }

        //space
        for(int k=0; k<2*i; k++)
        {
            cout << " ";
        }

        //star
        for(int j=0; j<n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    for(int i=n; i>0; i--)
    {
        for(int j=0; j<=n-i; j++)
        {
            cout << "*";
        }
        for(int k=0; k<2*i-2; k++)
        {
            cout << " ";
        }
        for(int j=0; j<=n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=2; i<=n; i++)
    {
        for(int j=0; j<=n-i; j++)
        {
            cout << "*";
        }
        for(int k=0; k<2*i-2; k++)
        {
            cout << " ";
        }
        for(int j=0; j<=n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 or j==0 or i==n-1 or j==n-1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    for(int i=0; i<2*n-1; i++)
    {
        for(int j=0; j<2*n-1; j++)
        {
            int TopDist = i;
            int BottomDist = (2*n-2) - i;
            int leftDist = j;
            int RightDist = (2*n-2) - j;

            cout << (n- min(min(TopDist, BottomDist), min(leftDist, RightDist)));
        }
        cout << endl;
    }
}

// 23 24 25 self
void pattern23(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j==0 or i==n-1 or j==i)cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

void pattern24(int n)
{
    for(int i=n-1; i>0; i--)
    {
        for(int j=0; j<n-i; j++)
        {
            cout << " ";
        }
        for(int k=0; k<=2*i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout << " ";
        }
        for(int k=0; k<=2*i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern25(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j or j==n-i-1) cout << "*";
            else cout << " ";

        }
        cout << endl;
    }
}


int main()
{
    int n = 5;
    pattern23(n);

    return 0;
}