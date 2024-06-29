#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    str = "hellow";

    //find(string)-> find length of string
    cout<<str.find("ellow")<<endl;

    // size()->  find length of string
    cout<<str.size()<<endl;

    // substr(pos,len) -> to find substring
    cout<<str.substr(2,4)<<endl;
    cout<<str.substr(0)<<endl;

    // string -> integer
    string num = "24324";
    int number = stoi(num);
    cout<<number<<endl;

    // integer -> string
    string numToS = to_string(number);
    cout<<numToS<<endl;

    // sort(str.begin(), str.end());
    sort(str.begin(), str.end()); // it change actual string
    cout<<str<<endl;

    // transfor() -> to transform from lowercase to uppercase or vice versa
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    // almost all vector funtions are available for the string

    // we can also create array as string type

    string arr[5]={"shi","hi","hello","sonu","mahan"};
    cout<<"Before Sort : ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // cout<<arr[1][0]; we can use it as 2D array
    // sort
    cout<<"After Sort "<<endl;
    sort(arr,arr+5); // sorting according to the ASCII values (like dictonary)
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    
    return 0;
}