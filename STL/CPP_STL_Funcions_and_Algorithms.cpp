#include<bits/stdc++.h>

using namespace std; 

void explainSort()
{
    int arr[5] = {7, 5, 8, 1, 0};
    sort(arr, arr + 5);  //(start position, till position you want)
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    int arr1[5] = {7, 5, 8, 1, 0};
    sort(arr1 + 1, arr1 + 4);  //(start position, till position you want)
    for(int i : arr1){
        cout << i << " ";
    }
    cout << endl;

    vector<int> vec = {9, 4, 7, 3, 0};
    sort(vec.begin(), vec.end());
    for(int i : vec)
    {
        cout << i << " ";
    }
    cout <<endl;
}

void explainAccumulate()
{
    //summation 
    int arr[5] = {5, 8, 2, 0, 1};

    cout << accumulate(arr, arr+5, 0) << endl; //accumulate(first, last, sum=0) if its 5 then sum=5

    list<int> ls = {1,2,3,4,5};
    cout << accumulate(ls.begin(), ls.end(), 0) << endl; 
}

void explainCount()
{
    //count number of element of given number
    int arr[10] = {5, 8, 1, 1, 1, 2, 1, 3};
    int num = 1; //find how many number of 1's in arr
    cout << count(arr, arr+11, num);
}

void explainFind()
{  
    int arr[10] = {5, 8, 1, 1, 1, 2, 1, 3};
    int num = 4;
    auto it = find(arr, arr+11, num);
    if(it != (arr + 11)) cout << "Found";
    else cout << "not found";
}

void explainPermutation()
{
    //Next permutation
    //print permutation in sorted order
    int arr[3] = {1, 2, 3};
    do
    {
        for (int i = 0; i < 3; i++)
            cout << arr[i] << " ";

        cout << endl;

    } while (next_permutation(arr, arr + 3));

    cout << endl;

    string str = "abc";
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
    //its always give next permutation where you started in sored manner

    cout << endl;


    //Prev Permutation -> reverse order of next permutation
    string str1 = "cba";
    do
    {
        cout << str1 << endl;
    } while (prev_permutation(str1.begin(), str1.end()));


}

void explainMinMaxElement()
{
    int arr[] = {1,2,4,8,2,10,1};
    auto it = min_element(arr, arr+8);
    cout << "Min element = " << *it << endl;
    auto it1 = max_element(arr, arr+7);
    cout << "Max element = " << *it1 << endl;
}

void explainReverse()
{
    int arr[] = {1,2,4,8,2,10,1};
    
    reverse(arr, arr+7);
    for(int i : arr)
    {
        cout << i << " ";
    }
}


//comparator
bool ownComparatorrule(int el1, int el2)
{
    if(el1 > el2) return true;
    return false;
}
void explainComparator()
{
    //its nothing but make your own rule in sort()
    int arr[] = {5, 8, 3, 0, 9};
    sort(arr, arr+5, ownComparatorrule);
    for(int i: arr)
    {
        cout << i << " ";
    }
}

int main()
{
    system("cls");
    explainComparator();
    return 0;
}