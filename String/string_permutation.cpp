#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// aproach one with high complexity because of sorting
bool checkPermutation(string s1,string s2){
    if (s1.length()!=s2.length())
    {
        return 0;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i]!=s2[i])
        {
           return 0;
        }
        
    }
    return 1;
    

    
}
// second way to solve with optimize way
bool arePermutation(string s1,string s2){
  vector<int>freq1(26,0);
  vector<int>freq2(26,0);
    if (s1.length()!=s2.length())
    {
       return 0;
    }
    
  for (int i = 0; i < s1.length(); i++)
  {
    int ind = s1[i]-'a';
    freq1[ind]++;
    ind = s2[i]-'a';
    freq2[ind]++;
  }
  for (int i = 0; i < freq1.size(); i++)
  {
    if (freq1[i]!=freq2[i])
    {
       return 0;
    }
    
  }
  return 1;
  
  
}
int main(){
    string s1,s2;
    cin>>s1>>s2;

    if (arePermutation(s1,s2))
    {
       cout<<"Yes";
    }
    else
    cout<<"No";
    
    return 0;
}