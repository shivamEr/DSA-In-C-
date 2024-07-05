#include <bits/stdc++.h>
using namespace std;
// Template/ Blue Print
class Student
{
public:
    int getter(string pwd){
        if (pwd=="abc")
        {
            return bal;
        } 
    }
    void setters(string pwd,int data){
        if (pwd=="abc")
        {
            bal = data;
            cout<<"Balance updated :";
        } 
    }
private:
    char name[10];
    int bal;
};
// Classes are also called user defined data types
int main(){
    // object creation statically
    Student s1;
    s1.setters("abc",1000);
    cout<<s1.getter("abc")<<endl;

    return 0;
}