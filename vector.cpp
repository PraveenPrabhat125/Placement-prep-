#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

void printFun(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // vector
    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        v.push_back(i + 1);
    }

    printFun(v);

    // begin and end
    cout << " output of begin and end: ";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    auto it = v.begin();

    // int  *it = v.begin();
    cout<<"*1111it first ele: "<<*it<<endl;


    // cbegin and cend
    cout << " output of cbegin and cend: ";
    for (auto it = v.cbegin(); it != v.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // rbegin and rend 
    cout << " output of rbegin and rend: ";
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << " output of crbegin and crend: ";
    for (auto it = v.crbegin(); it != v.crend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    // size 
    cout<<"size of vec: "<<v.size()<<endl;
    cout<<"capacity of vec: "<<v.capacity()<<endl; // double each time 1 - 2,  2 ele get filled then next size was 4, now 4 get filled the next size is 8 which will accomodate the 5th ele
    cout<<"size of vec :"<<v.size()<<endl;
    cout<<"max size of vec :"<<v.max_size()<<endl;

    (v.empty() == true) ? cout<<"vec is empty " : cout<<"vec is not empty "<<endl;

    // reverse: reverse the array
    reverse(v.begin(), v.end());
    printFun(v);

    // at, front, back
    cout<<"at: "<<v.at(1)<<endl;
    cout<<"front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;

    // assign: this will replace the old value with new one
    vector<int> v1;
    v1.assign(5,100); // will copy two ele form v to 
    printFun(v1);


    v1.assign(v.begin(), v.begin() + 3);
    cout<<"check point\n";
    printFun(v);
    printFun(v1);

    // pop_back
    v1.pop_back();
    printFun(v1);

    v1.insert(v1.begin(), 100);
    printFun(v1);

    // erase 
    v1.erase(v1.begin());
    printFun(v1);

    // swap 
    cout<<"before swaping: \n";
    printFun(v1);
    printFun(v);

    cout<<"after swaping: \n";
    v1.swap(v);
    printFun(v1);
    printFun(v);

    // clear
    v1.clear();
    printFun(v1);
    (v1.empty() == true) ? cout<<"vec is empty\n" : cout<<"vec is not empty\n";

    // emplace tc: O(N)
    v.emplace(v.begin(), 100);
    printFun(v);
    v.emplace(v.end(), 200);
    printFun(v);

    v.emplace(v.begin() + 3, 400);
    printFun(v);




}