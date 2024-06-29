#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int prize[n];
	for(int i =0;i<n;i++){
		cin>>prize[i];
	}
	int q;
	cin>>q;
	for(int i =0;i<q;i++){
		int a,k,count=0;
		cin>>a>>k;
		for(int j=0;j<n;j++){
			if(a%prize[j]==0)
			count++;
		}
		if(count>=k)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;

	}
	return 0;
}