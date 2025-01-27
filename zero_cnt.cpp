#include <bits/stdc++.h>
using namespace std;

int zerocnt(int L,int K){
    if(K==0) return L;
    if(K==L) return 0;
    int max_zero=0;
    if(K>0){
        max_zero=1;
    }
    return max_zero;
}

int main() {
	cout<<zerocnt(3,1);

}
