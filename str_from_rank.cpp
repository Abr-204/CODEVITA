#include <bits/stdc++.h>
using namespace std;

struct customer{
    int q_pref,p_pref;
};
struct bag{
    int q,p;
};
bool comparecustomer(const customer&c1,const customer&c2){
    if(c1.q_pref==c2.p_pref){
        return c1.p_pref<c2.p_pref;
    }
    else{
        return c1.q_pref>c2.q_pref;
    }
}
bool comparebag(const bag&b1,const bag&b2){
    if(b1.p==b2.p){
        return b1.q>b2.q;
    }
    else{
        return b1.p<b2.p;
    }
}


int main() {
	int n,m;
	cin>>n>>m;
	vector<customer>c(n);
	vector<bag>b(m);
	for(int i=0;i<n;i++){
	    cin>>c[i].q_pref>>c[i].p_pref;
	}
	for(int i=0;i<m;i++){
	    cin>>b[i].q>>b[i].p;
	}
	sort(c.begin(),c.end(),comparecustomer);
	sort(b.begin(),b.end(),comparebag);
	int soldbags=0;
	vector<bool>usedbags(m,false);
	for(const auto &cust:c){
	    for(int i=0;i<m;i++){
	        if (!usedbags[i] && b[i].p <= cust.p_pref && b[i].q > cust.q_pref) {
                soldbags++;
                usedbags[i] = true;
                break;
            } 
	    }
	}
	cout<<soldbags<<endl;

}
