#include<iostream>
#include<algorithm>
using namespace std;

void print_DoubleSum(int arr[],int n, int target){
     int left = 0, right = n-1;
        while (left<right)
        {
            int sum = arr[left]+arr[right];
            if (sum == target)
            {
                cout<<arr[left]<<" "<<arr[right]<<endl;
                left++;
                right--;
            }
            else if(target<sum){
                right--;
            }
            else{
                left++;
            }
            

        }
        
    
}
void print_TripleSum(int arr[],int n, int target){
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        int newTarget = target - arr[i];
        int left = i +1, right = n-1;
        while (left<right)
        {
            int sum = arr[left]+arr[right];
            if (sum == newTarget)
            {
                cout<<arr[i]<<" "<<arr[left]<<" "<<arr[right]<<endl;
                left++;
                right--;
            }
            else if(newTarget<sum){
                right--;
            }
            else{
                left++;
            }
            

        }
        
    }
    
}
int main(){
    int arr[] = {1,3,2,4,5,3};
    int n = sizeof(arr)/sizeof(int);
    int target = 6;
    cout<<"Two Pair : "<<endl;
    print_DoubleSum(arr,n,target);
    cout<<"Thre Pair"<<endl;
    print_TripleSum(arr,n,target);
    return 0;
}