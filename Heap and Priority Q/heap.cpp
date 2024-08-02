#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    cout<<"Max Heap : "<<endl;
    priority_queue<int>pq;
    pq.push(18);
    pq.push(15);
    pq.push(12);
    pq.push(18);

    cout<<pq.top()<<endl;
    cout<<"Min Heap : "<<endl;

    // syntax
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(18);
    pq1.push(15);
    pq1.push(12);
    pq1.push(18);
    cout<<pq1.top()<<endl;
    
}