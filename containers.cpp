#include <iostream>
#include <stack>
#include <set>
#include <map>
using namespace std;

void Stack()
{
    //LIFO dat structure
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout<<"Size: "<<s.size()<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    cout<<"Is the stack empty: "<<s.empty()<<endl;
    //returns true if empty

    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);

    stack<int> s2;
    s2.swap(s);

    cout<<s.size()<<endl<<s2.size()<<endl;
}

void Set()
{
    //does not hold duplicate values
    //stores in sorted order
    //count, erase, find, insert are some common functions
    //unordered_set -> not sorted
    set<int> s;
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(3);

    s.insert(2);
    s.insert(4);
    s.insert(4);

    for(auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<s.size()<<endl;

}

void Map()
{
    //stored in form of key : value
    //contains unique keys
    //map[key] = value
    //stores keys in sorted order 
    map<string, int> m;

    m["tv"] = 100;
    m["phone"] = 200;
    m["laptop"] = 200;
    m["watch"] = 350;

    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<"\n";
    }

    //multi_map can have duplicate keys
    //[] -> X can use insert()/emplace()    
    //unordered_map is not sorted -> basic functions generally use constant time complexity
}



int main()
{
    cout<<"Stack\n";
    Stack();
    cout<<"=================\n";
    cout<<"Set\n";
    Set();
    cout<<"=================\n";
    cout<<"Map\n";
    Map();
    return 0;
}
