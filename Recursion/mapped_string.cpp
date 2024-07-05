#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
char arr[27]= {'.','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
vector<string>ans;
void mapped_string(string s,int i,string out){
	int n = s.size();
	if(i>n){
		return;
	}
	if(i==n){
		ans.push_back(out);
	}
	int digit = s[i]-'0';
	mapped_string(s,i+1,out+arr[digit]);

	// 2 pe mai kam kar rha hu
	if(i+1<n){
		int num = (s[i]-'0')*10+(s[i+1]-'0');
		if(num<=26)
		mapped_string(s,i+2,out+arr[num]);
	}
}
int main() {
	ans.clear();
	int num;
	cin>>num;
	string s = to_string(num);
	mapped_string(s,0,"");
	sort(ans.begin(), ans.end());
	for(auto s: ans){
		cout<<s<<endl;
	}
	return 0;
}