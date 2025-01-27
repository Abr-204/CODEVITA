#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a.begin(),a.end());
	int happy=0;
	for(int i=0;i<n;i++){
	    auto lower=lower_bound(a.begin(),a.end(),a[i]-k);
	    auto upper=upper_bound(a.begin(),a.end(),a[i]+k);
	    if(lower!=upper && lower!=a.begin()+i && upper!=a.begin()+i+1){
	        happy++;
	    }
	}
	cout<<happy<<endl;

}
