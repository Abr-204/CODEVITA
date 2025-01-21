#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<pair<int,int>> events ;
	for(int i=0;i<n;i++){
	    int a,b;
	    cin>>a>>b;
	    events.push_back({a,1});
	    events.push_back({a+b,-1});
	}
	sort(events.begin(),events.end(),[](const pair<int,int>&e1,const pair<int,int>&e2){
	    if(e1.first==e2.first) return e1.second<e2.second;
	    return e1.first<e2.first;
	});
	int max_platforms=0,curr_platforms=0;
	for(auto &e:events){
	    curr_platforms+=e.second;
	    max_platforms=max(max_platforms,curr_platforms);
	}
	cout<<max_platforms<<endl;

}
