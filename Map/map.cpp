#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
// declaration map
//  map<key_data_type,value_data_type>nameOfMap;
    map<int, int> m;
    pair<int,int>p = {0,1051};
    m.insert(p);
    // []-> square bracket
    m[1] = 10;
    m[2] = 20;
    m[3] = 30;
    m[4] = 40;
    m[5]; // by default value will be 0

    // how to access
    // .at(key)
    int value = m.at(3);
    cout<<value<<endl;
    // [key]->  square bracket
    cout<<m[4]<<endl;

    // diff btw .at and m[key];
    // .at() will throw an exception if key is not present
    // m[key] will return 0 if key is not present
    // .at() is safer than m[key]

    // cout<<m.at(88)<<endl; // through exception error
    // cout<<m[88]<<endl;  // print 0


    // .count(key) : it return true/false if key present or not
    cout<<"count(key) : "<<m.count(8)<<endl;
    cout<<"count(key) : "<<m.count(3)<<endl;

    // remove / delete
    // .erase(key)
    m.erase(3); // erase this particular key

    // Iterator for map
    // .begin() .end()
    // .rbegin() .rend()
    // .lower_bound(key)
    // code for it
    // map<int,int>::iterator it = m.begin();

    // for(auto it = m.begin(); it != m.end(); it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // another way to iterate (range base loop)
    // by referance (&) it can modify
    // for(auto &it : m){
    //     it.second = 1051; // change all values
    // }

    // we can't modifiy
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl; 
        it.second = 1000; // it can't modifiy
    }

    // .find(key) : it return iterator if key present
}