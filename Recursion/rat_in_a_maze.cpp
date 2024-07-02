#include<iostream>
#include<vector>
using namespace std;

int n,m;
void solve(vector<string>& grid,int i,int j, vector<vector<int>>& path){
    //base case
    // visited at last cell
    if(i==n-1 && j==m-1){
        path[i][j]=1; // for last element
        for(int i=0;i<path.size();i++){
            for (int j = 0; j < m; j++)
            {
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
            
        }
        cout<<endl;
        return;
    }
    // recursion
    if(i<n && j<m && grid[i][j]=='.'){
        // i have current cell
        path[i][j] = 1;
        // check on the right side
        solve(grid,i,j+1,path);
        // check in down side
        solve(grid,i+1,j,path);
        // backtrack
        path[i][j] = 0;

        return;
        }


}

int main(){
    vector<string> grid = {"....","..XX","....",".X.."};
    n = grid.size();
    m = grid[0].size();
    vector<vector<int>> path(n,vector<int>(m,0));
    solve(grid,0,0,path);
    return 0;
}