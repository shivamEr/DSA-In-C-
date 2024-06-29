#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[10] = {'a','b','c'};
    char b[]={'a','b','c','\0'};
    char name[7] = "shivam";

    cout<<a<<endl;
    cout<<b<<endl;

    for (int i = 0; name[i]!= '\0'; i++)
    {
       cout<<name[i]<<" ";
    }
    cout<<endl;


    // char name2 [100];
    // // cin ignore white spaces
    // cin>>name2;
    // cout<<name2;
    // cout<<endl;

    // char name3[100];
    // int i =0;
    // char ch;
    // ch = cin.get();
    // while (ch!='$'){
    //     name3[i]=ch;
    //     i++;
    //     ch = cin.get();
    // }
    // name3[i] = '\0';
    // cout<<name3<<endl;


    // getline(arr_name, num_input_chars, delimeter);
    char c[1000];
    cin.getline(c,100,'\n');
    cout<<c<<endl;


    // find size of string??
    int size =0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        size++;
        /* code */
    }
    cout<<"size : "<<size<<endl;
    cout<<strlen(c)<<endl;

    // check palidrom string
    // trick 1
    // for (int i = 0; i < size/2; i++)
    // {
    //     if (c[i]!=c[size-i-1])
    //     {
    //         cout<<"NOt";
    //         return 0;
    //     }
    // }
    // cout<<"yes";


    // trick 2

    int left = 0,right = size-1;
    while (left<=right && (c[left]==c[right])){
        left++;
        right--;
    }
    if (left>right)
    {
        cout<<"Yes"<<endl;
    }
    else
    cout<<"No"<<endl;

    
    
    return 0;
}

