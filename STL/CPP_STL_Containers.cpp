#include<bits/stdc++.h>

using namespace std; 

void explainPair()
{ 
    pair <int, int> pr1 = {1, 2}; // Two value in one variable
    cout << pr1.first << " " << pr1.second << endl;

    pair <int, string> pr2 = make_pair(1, "aksh");
    cout << pr2.first << " " << pr2.second << endl;
    
    pair < pair<int, char>, string> pr3 = {{2, 'a'}, "patel"}; //nested pair
    cout << pr3.first.second << " " << pr3.second << endl;
    
}

void explainVector()
{
    system("cls");

    //initialize the vector
    vector<int> vec = {5, 11, 2}; //vector<data_type> variable_name;
    vec.push_back(31);  // adds a new element at the end of the vector
    vec.emplace_back(4); 
    vec.emplace_back(52);

    //print elements
    cout << "Access at index = "<<vec[0] << endl; // vec.at(0) is also use for access at index
    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // auto assigned elements in vector 
    vector<int> vec2(5); //auto assign element with 0 or we can assign our own values(5, 2)
    vec2.push_back(1); // after the 5 zero
    for(int i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;

    // duplicate the vector
    // vector<int> dupVec(vec); // duplicate the vector 
    vector<int> dupVec(vec.begin() + 1, vec.end()); // start with perticular index 
    for(int i : dupVec)
    {
        cout << i << " ";
    }
    cout << endl;
    
    //front()
    cout << "Front Element = " << vec.front() << endl;

    //back()
    cout << "Last Element = " << vec.back() << endl;

    //pop_back() -> delete last element
    vec.pop_back();
    cout << "After pop Last Element = " << vec.back() << endl;


    //erase() -> delete element in range not a single element
    // vec.erase(vec.begin() + 1);
    // vec2.erase(vec2.begin() + 1, vec2.end());


    //clear() -> delete all element from vector 
    // vec2.clear();

    //swap() -> swap two vectors element
    swap(vec, vec2);
    for(int i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;
    for(int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;


    //insert() -> insert element at iterator position
    vec2.insert(vec2.begin() + 2, 200); //(position, element)
    for(int i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;
    




/*  //iterator -> to access element with their address
    vector<int>::iterator beginItr = vec.begin();
    // vector<int>::iterator endItr = vec.end(); //pointing to After the last element 
    auto endItr = vec.end(); // auto is c++ keyword assign for iterator

    for(vector<int>::iterator i = beginItr; i<endItr; i++){
        cout << *i << " ";
    }
    cout << endl;

    auto reverceBegin = vec.rbegin();
    auto reverceEnd = vec.rend(); // pointing to before the first element 

    for(auto i=reverceBegin; i<reverceEnd ; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
*/



}

void explainList()
{
    system("cls");

    list<int> ls = {3, 4};
    ls.push_front(1); //
    ls.emplace_front(2);
    ls.push_back(2);

    // print list only using iterator
    for(int i : ls)
    {
        cout << i << " ";
    }
    cout << endl;

    //and all other function as it Vector all functions iterator, swap, erase, clear......
}

void explainStack()
{
    system("cls");

    stack<int> s;
    s.push(11);
    s.push(12);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);

    //print stack 
    while(s.empty() == false){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // s.push(1);

    cout << s.empty() << endl; // 0 - false, 1 - true

    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    // no functions like a vector/list
}

void explainQueue()
{
    system("cls");

    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

    //print queue
    while(q.empty() == false)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    //rest of functions same as stack

}

void explainPriorityQueue()
{
    //highest element at the top
    priority_queue<int> pq;
    pq.push(5);
    pq.push(7);
    pq.push(4);
    pq.push(10);

    //print pq
    while(pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    //smallest element at the top
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq1.push(7);
    pq1.push(4);
    pq1.push(10);

    //print pq1
    while(pq1.empty() == false)
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;
}

void explainSet()
{
    system("cls");

    // store only unique element in ascending order
    set<int> st;
    st.insert(11);
    st.insert(12);
    st.insert(13);
    st.insert(12);
    st.insert(15);
    st.insert(12);

    //print set only using iterator
    for(auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;

    //find element using iterator
    auto it = st.find(121);
    if(it != st.end())  cout << "Yes is it in set." << endl;
    else cout << "No isn't in set. " << endl;

    //count
    cout << st.count(121) << endl; //if element in set it's give a 1, otherwise gives 0.
    
    //erase
    // st.erase(12); //erase perticular element
    // auto it1 = st.end(); // erase single element at perticular position
    // it1--;
    // it1--;
    // st.erase(it1);
    // for(auto i : st)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // auto itt1 = st.begin(); // erase multiple element from index to other index
    // itt1++;
    // auto itt2 = st.end();
    // itt2--;
    // st.erase(itt1, itt2);
    // for(auto i : st)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    //Lower Bound 
    // returns the iterator that points to an element that is >= number given
    auto i = st.lower_bound(11); // find closest greater number of given number
    cout << *i << endl; 
    
    //Upper Bound 
    // returns the iterator that points to an element that is > number given
    auto i1 = st.upper_bound(13); // find closest greater number of given number
    cout << *i1 << endl; 


}

void explainMultiSet()
{
    //store values in ascending order
    //allows duplicate values
    system("cls");

    multiset<int> ms;
    ms.insert(12);
    ms.insert(12);
    ms.insert(12);
    ms.insert(21);
    ms.insert(21);
    ms.insert(22);

    //print ms using iterator
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;

    auto it = ms.find(12); //find first element of duplicates
    // auto it1 = ms.erase(12); //Delete all element of duplicates
    auto it1 = ms.erase(ms.find(12)); //Delete first element of duplicates
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;
}

void explainUnorderedSet()
{
    //stores unique elements in an unsorted manner
    // it has better time complexity compare as set/multiset
    system("cls");

    unordered_set<int> ust;
    ust.insert(12);
    ust.insert(12);
    ust.insert(11);
    ust.insert(10);
    ust.insert(12);
    ust.insert(15);
    ust.insert(11);

    //print ust using iterator
    for(auto i : ust)
    {
        cout << i << " ";
    }
    cout << endl;

    //find
    auto it = ust.find(12);
    if(it != ust.end()) cout << "Found: " << *it << endl;
    else cout << "Not Found" << endl;

    //erase
    ust.erase(12); //erase like that or using iterator as same as set
    for(auto i : ust)
    {
        cout << i << " ";
    }
    cout << endl;


}

void explainMap()
{
    system("cls");
    // key and value could be anything we want
    map<int, string> mpp; //map<key, value>
    // map store value in ascending order of key
    // use unique key for every value
    mpp[1] = "Aksh";
    mpp[2] = "Shivam";
    mpp.insert({4, "Karan"}); 
    mpp[3] = "Aksh";

    // print map 
    for(auto it: mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;

    auto it = mpp.find(4);
    cout << (*it).first << " -> " << (*it).second << endl;

}

void explainUnorderedMap()
{
    system("cls");
    // key and value could be anything we want
    unordered_map<int, string> umpp; //map<key, value>
    // map store value in reverse order of key init
    // use unique key for every value
    umpp[1] = "Aksh";
    umpp.insert({4, "Karan"}); 
    umpp[2] = "Shivam";
    umpp[3] = "Rahul";

    // print map 
    for(auto it: umpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;

    auto it = umpp.find(4);
    cout << (*it).first << " -> " << (*it).second << endl;

}

void explainMultiMap()
{
    system("cls");

    // store duplicate key in ascending order 
    multimap<int, string> mmp;
    mmp.insert({1, "Aksh"});
    mmp.insert({3, "Shivam"});
    mmp.insert({2, "Aksh"});
    mmp.insert({3, "Shivam"});
    mmp.insert({1, "Rahul"});
    mmp.insert({1, "Aksh"});

    for(auto it : mmp)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;

    //equal range function
    auto it = mmp.equal_range(1);
    for(auto i = it.first; i != it.second ; i++)
    {
        cout << (*i).first << " -> " << (*i).second << endl;
    }
    cout << endl;

}

int main()
{
    explainMultiMap();
    return 0;
}