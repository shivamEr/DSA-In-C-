// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int findPower(int x,int n){
    if(n==1)
    return x;
    else
    return x * findPower(x,n-1);
}
int main() {
  int x,n;
  cin>>x>>n;
   cout<<findPower(x,n)<<endl;
   

    return 0;
}