
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    
    for(auto it:m){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    cout<<endl;
}