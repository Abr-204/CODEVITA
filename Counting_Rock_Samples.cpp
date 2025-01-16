#include <bits/stdc++.h>
using namespace std;

void rock(vector<vector<int>> ranges,vector<int>arr,int n,int r){
    vector<int>a;
    for(int i=0;i<r;i++){
        int l=ranges[i][0];
        int r=ranges[i][1];
        int c=0;
            for(int j=0;j<arr.size();j++){
                if(l<=arr[j] && arr[j]<=r){
                    c+=1;
                }
            }
            cout<<c<<" ";
    }
}

int main() {
	int n=10;
	int r=2;
	vector<int>arr={300, 604, 350, 433, 704, 470, 808, 718, 517, 811};
	vector<vector<int>> ranges={{300,350},{400,700}};
	rock(ranges,arr,n,r);
}
