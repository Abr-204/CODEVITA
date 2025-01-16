#include <bits/stdc++.h>
using namespace std;

int cave(int x,int y){
    if(x==1||y==1) return 1;
    else return cave(x-1,y)+cave(x,y-1);
}
int main() {
    int a,b;
	cin>>a>>b;
	cout<<cave(a,b);
}


