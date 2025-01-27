#include <bits/stdc++.h>
using namespace std;

bool isSqFree(int num){
    for(int i=2;i*i<=num;i++){
        if(num%(i*i)==0) return false;
        return true;
    }
}
int sqFreeDivisors(int N){
    int cnt=0;
    for(int i=2;i<=N;i++){
        if(N%i==0 && isSqFree(i)) cnt++;
    }
    return cnt;
}

int main() {
	int N;
	cin>>N;
	cout<<sqFreeDivisors(N);

}
