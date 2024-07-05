#include<iostream>
using namespace std;

void printBinary(string s ,int i){
	//base case 
	if(s[i]=='\0'){
		cout<<s<<" ";
		return;
	}
	if(s[i]=='?'){
		s[i]='0';
		printBinary(s,i+1);
		s[i]='1';
		printBinary(s,i+1);
		return;
	}
	printBinary(s,i+1);
	return;

}
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		printBinary(s,0);
	}
	return 0;
}