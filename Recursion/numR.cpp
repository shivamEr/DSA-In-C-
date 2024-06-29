// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printNum(int n){
    if(n==0){
        return;
    }
    else{
     printNum(n-1);
     cout<<n<<" ";
    }
    
}
// void f(int arr[]){
//     cout<<endl<<arr[0-1]<<" "<<arr[1]<<endl;
// }
int main() {
   int n=10;
   int arr[3] = {1,2,3};
//    f(arr+1);
   printNum(n);

    return 0;
}