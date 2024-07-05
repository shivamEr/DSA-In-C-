#include <bits/stdc++.h>
using namespace std;
// Template/ Blue Print
class Student
{
public:
    string name;
    int roll;

    Student(){
        cout<<"Default constructor called "<<endl;
    }
    Student(string n, int r){
        cout<<"Parametrized constructor called "<<endl;
        name = n;
        roll = r;
    }
};
// Classes are also called user defined data types
int main(){
    // object creation statically
    Student s1;
    Student s2("shivam",18);

    return 0;
}