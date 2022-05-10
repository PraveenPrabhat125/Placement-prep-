#include<iostream>
#include<array>

using namespace std;

int main(){
    // array 
    array<int, 6> arr = {1,2,3,4,5,6};
    array<int, 6> arr1 = {7,8,9,10,11,12};

    cout<<"at(1): "<<arr.at(1)<<endl;

    cout<<"First ele: "<<arr.front()<<endl;
    cout<<"Last ele: "<< arr.back()<<endl;

    cout<<"size: "<<arr.size()<<endl;
    cout<<"max size: "<<arr.max_size()<<endl;

    arr.swap(arr1);
    for (int  i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int  i = 0; i < arr1.size(); i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    // empty or fill
   (arr.empty() == true) ? cout<<"arr is empty" : cout<<"arr is not empty ";

   // fill: is for asigning the same value to array 
   arr.fill(2);

   cout<<endl;
   for (int  i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // int arr2[5];
    // arr2.fill(1); this is not a class so, we are getting error 

    array<int, 5 > arr2;
    arr2.fill(2);

    for (int  i = 0; i <arr2.size(); i++)
    {
        cout<<arr2[i]<<" ";
    }
    



}