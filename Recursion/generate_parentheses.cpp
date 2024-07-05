#include<iostream>
#include<vector>
using namespace std;
static string ans;
void generate_parentheses(int open,int close,vector<string>& ans,string s){
	if(open>0){
		generate_parentheses(open-1,close,ans,s+'(');
	}
	if(open<close){
		generate_parentheses(open,close-1,ans,s+')');
	}
	if(close==0){
		ans.push_back(s);
        return;
	}
}
int main() {
	int n;
	cin>>n;
	vector<string>ans;
	generate_parentheses(n,n,ans,"");
	 for (const string& s : ans) {
        cout << s << endl;
    }

	return 0;
}
