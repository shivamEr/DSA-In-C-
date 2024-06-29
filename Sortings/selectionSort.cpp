#include<iostream>
using namespace std;

 // Wrost Case = O(n^2);
 // Best Case = O(n^2);

void selection_sort(int arr[],int size){
    int min_ind;
    for (int i = 0; i < size; i++)
    {
        min_ind=i;
        for (int j = i; j < size; j++)
        {
            if (arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
            
        }
        swap(arr[i],arr[min_ind]);
        
    }
    
}
int main(){
    // Select Min then swap
    int arr[5]{23,45,3,22,11};
    selection_sort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}