#include<iostream>
#include<vector>
using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i =0;i<m;i++){
		for(int j =0;j<n;j++){
			cin>>arr[i][j];
		}	
	}
	vector<int>ans;
	int top =0,buttom=m-1,left=0,right=n-1;
	while(top<=buttom && left<=right){
		for(int i = top;i<=buttom;i++){
			ans.push_back(arr[i][left]);
		}
			left++;
		for(int i = left;i<=right;i++){
			ans.push_back(arr[buttom][i]);

		}
		buttom--;
		for(int i = buttom;i>=top;i--){
			ans.push_back(arr[i][right]);
		}
		right--;
		for(int i =right;i>=left;i--){
			ans.push_back(arr[top][i]);
		}
		top++;
	}
	for(int i = 0;i<ans.size();i++){
		cout<<ans[i]<<", ";
	}
	cout<<"END";
	return 0;
}