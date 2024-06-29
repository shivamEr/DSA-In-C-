#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // declaration of vector
    // vector <data-type>vector_name;
    vector<int>nums;

    //element push
    nums.push_back(19);
    nums.push_back(12);
    nums.push_back(11);

    //size
    cout<<"Size : "<<nums.size()<<endl;

    // Capacity 
    cout<<"Capacity : "<<nums.capacity()<<endl;

    // print
    for (int i = 0; i < nums.size(); i++)
    {
       cout<<nums[i]<<" ";
    }
    cout<<endl;

    // to remove -> pop_back();

    nums.pop_back();
      //size
    cout<<"Size : "<<nums.size()<<endl;

    // Capacity 
    cout<<"Capacity : "<<nums.capacity()<<endl;

     for (int i = 0; i < nums.size(); i++)
    {
       cout<<nums[i]<<" ";
    }
    cout<<endl;
    // nums.resize(1);
    //size
    // cout<<"Size : "<<nums.size()<<endl;
    // cout<<"Capacity : "<<nums.capacity()<<endl;


    // to check empty or not-> .empty()
    cout<<nums.empty()<<endl;

    // clear -> to clear vector
    nums.clear();
    cout<<nums.empty()<<endl;
    cout<<nums.capacity()<<endl;

    // resize
    nums.resize(10,2);
    cout<<nums.size()<<endl;
    cout<<nums.capacity()<<endl;

    // sort
    sort(nums.begin(), nums.end());



    
    
}