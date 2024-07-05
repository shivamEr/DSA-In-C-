#include <iostream>
#include <cstring>
using namespace std;
// Template/ Blue Print
class Student
{
public:
    int roll;
    char name[10];
    int age;
};
// Classes are also called user defined data types
int main(){
    // object creation statically
    Student s1;
    // to access properties of object use dot (.) operator
    strcpy(s1.name,"shivam");
    s1.age = 19;
    s1.roll = 1051;

    // to know the value of properties
    cout<<"Name : "<<s1.name<<endl;
    cout<<"Roll : "<<s1.roll<<endl;
    cout<<"Age : "<<s1.age<<endl;

    // object creation dynamically
    Student *s2 = new Student();
    // assigning value
    strcpy(s2->name,"sonoo");
    s2->age = 18;  //(*s2).age = 18;
    s2->roll = 1079; // *(*s2).roll= 100;
    // to know the value of properties
    cout<<"Name : "<<s2->name<<endl;
    cout<<"Roll : "<<s2->roll<<endl;
    cout<<"Age : "<<s2->age<<endl;
    return 0;
}