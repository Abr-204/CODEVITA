#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n<=1) return 0;
    if(n<=3) return 1;
    if(n%2==0 || n%3==0) return 0;
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return 0;
        }
    }
    return 1;
}
int Prime(int n){
    int cnt=0;
    vector<int> prime;
    for(int i=2;i<=n;i++){
        if(isPrime(i)==1)
            prime.push_back(i);
    }
    int sum=prime[0];
    for(int i=1;i<prime.size();i++){
        sum+=prime[i];
        if(sum>n) break;
        if(isPrime(sum)) cnt++;
    }
    return cnt;
}

int main() {
	int n=20;
	cout<<Prime(n);
    return 0;
}
