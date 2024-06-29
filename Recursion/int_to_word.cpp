// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void numToWord(int n)
{
    if (n==0)
    {
        return;
    }
    else{
        int r = n%10;
        numToWord(n/10);
        cout<<arr[r]<<" ";
    }
    // else
    // {
    //     int a = n % 10;
    //     n = n / 10;
    //     numToWord(n);
    //     switch (a)
    //     {
    //     case 0:
    //         cout << "zero" << " ";
    //         break;
    //     case 1:
    //         cout << "one" << " ";
    //         break;

    //     case 2:
    //         cout << "two" << " ";
    //         break;
    //     case 3:
    //         cout << "three" << " ";
    //         break;
    //     case 4:
    //         cout << "four" << " ";
    //         break;
    //     case 5:
    //         cout << "five" << " ";
    //         break;
    //     case 6:
    //         cout << "six" << " ";
    //         break;
    //     case 7:
    //         cout << "seven" << " ";
    //         break;
    //     case 8:
    //         cout << "eight" << " ";
    //         break;
    //     case 9:
    //         cout << "nine" << " ";
    //         break;
    //     }
       
    // }

}

int main()
{
    int w;
    cin >> w;
    numToWord(w);

    return 0;
}