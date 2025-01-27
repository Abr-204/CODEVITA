#include <bits/stdc++.h>
using namespace std;

int distance(const string &goodString,const string &name){
    vector<int>goodChars(127,0);
    for(char ch:goodString){
        goodChars[ch]==1;
    }
    int totalDistance=0;
    char prevGoodChar=goodString[0];
    for(char ch:name){
        if(ch==' '||goodChars[ch]){
            prevGoodChar=ch;
            continue;
        }
        int minDistance=INT_MAX;
        int closestGoodChar=prevGoodChar;
        for(char goodChar=32;goodChar<=126;goodChar++){
            if(goodChars[ch]){
                int dst=abs(ch-goodChar);
                if(dst<minDistance||dst==minDistance && abs(prevGoodChar-goodChar)<abs(prevGoodChar-closestGoodChar)){
                minDistance=dst;
                closestGoodChar=goodChar;
                }
            }
        }
    totalDistance+=minDistance;
    prevGoodChar=closestGoodChar;
    }
    return totalDistance;
    
}

	int main() {
    string goodString, name;
    getline(cin, goodString); 
    getline(cin, name);       

    cout <<distance(goodString, name) << endl;
    return 0;
}

