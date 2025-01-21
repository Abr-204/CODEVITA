#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    while(k-- && !pq.empty()){
        int top=pq.top();
        pq.pop();
        top=floor(top/2);
        pq.push(top);
    }
    int sum=0;
    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
    }
    cout<<sum<<endl;

}
