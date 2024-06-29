// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sumArray(int arr[],int n){
    if(n==0){
        return 0;
    }
    else{
     return arr[0]+sumArray(arr+1,n-1);
    }
    
}
int sumByit(int arr[],int n,int i){
    if(n==i){
        return 0;
    }
    else{
     return arr[i]+sumByit(arr,n,i+1);
    }
    
}

int main() {
   int arr[] = {1,2,3,4,5,6};
   int n = sizeof(arr)/sizeof(int);
   cout<<sumArray(arr,n)<<endl;
   cout<<sumByit(arr,n,0);

    return 0;
}