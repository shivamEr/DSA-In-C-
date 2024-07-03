#include <iostream>
#include <vector>
using namespace std;
string arr[10] = {".","*","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int n;
void solve(string &digits, string &output, int i)
{
    // base case
    if (i == n)
    {
        cout << output << " ";
        return;
    }
    // recursion
    int dig = digits[i] - '0';
    string temp = arr[dig];
    for (int j = 0; j < temp.size(); j++)
    {
        output.push_back(temp[j]);
        solve(digits, output, i + 1);
        // backtrack
        output.pop_back();
    }
}
int main()
{
   string digits = "23";
   n = digits.size();
   string output= "";
   solve(digits, output, 0);
    return 0;
}