#include <bits/stdc++.h>
using namespace std;

string sortBox(const string&S,const string&P){
    unordered_map<char,int>mp;
    for(int i=0;i<26;i++){
        mp[P[i]]=i;
    }
    string res=S;
    sort(res.begin(),res.end(),[&](char a,char b){
       return mp[a]<mp[b]; 
    });
    return res;
}

int main() {
	string S,P;
	cin>>S>>P;
	cout<<sortBox(S,P);

}
`