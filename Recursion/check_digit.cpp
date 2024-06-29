// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int checkLast(int arr[], int n, int t)
{
    if (n < 0)
    {
        return 0;
    }
    else if (arr[n]==t)
    {
        return n;
    }
    else
    return checkLast(arr,n-1,t);
}

int checkFirst(int arr[], int n, int t, int i)
{
    if (i == n)
    {
        return 0;
    }
    else if (arr[i] == t)
        return i;
    else
        return checkFirst(arr, n, t, i + 1);
}
int checkAll(int arr[], int n, int t)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return arr[0] == t * checkAll(arr + 1, n - 1, t);
}
int checkCon(int arr[], int n, int t)
{
    if (n == 0)
    {
        return 0;
    }
    else if (arr[0] == t)
    {
        return 1;
    }
    else
        return checkCon(arr + 1, n - 1, t);
}

int main()
{
    int n;
    cout<<"Enter size : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target : ";
    int t;
    cin >> t;
    cout<<endl;
    cout <<"First ind : "<< checkFirst(arr, n, t, 0) << endl;
    cout << "Last ind : "<<checkLast(arr, n-1, t) << endl;
    cout << "Contains : "<<checkCon(arr, n, t) << endl;
    cout << "Check All : "<<checkAll(arr, n, t) << endl;

    return 0;
}