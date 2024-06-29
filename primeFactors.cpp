#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    while (n % 2 == 0)
    {
        cout << 2 << ", ";
        n = n / 2;
    }

    for(int i =3;i<=sqrt(n);i+=2){
        if(n%i==0){
            cout<<i<<", ";
            n=n/i;
        }
    }
    if(n!=0)
    cout<<n<<", ";

    return 0;
}