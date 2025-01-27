#include <bits/stdc++.h>
using namespace std;

int vowels(const string&word){
    int vowel=0;
    for(char ch:word){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel++;
        }
        cout<<vowel;
    }
}
int stringPair(const vector<int>&nums){
    unordered_map<int,string>mp={{0,"zero"},{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};
    vector<int>vowel_cnt;
    for(int num:nums){
        if(mp.find(num)!=mp.end()){
            vowel_cnt.push_back(vowels(mp[num]));
        }
        else{
            return -1;
        }
    }
    int d=accumulate(vowel_cnt.begin(),vowel_cnt.end(),0);
    
    int pair_cnt=0;
    for(size_t i=0;i<nums.size();i++){
        for(size_t j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==d){
                pair_cnt++;
            }
        }
    }
    cout<<pair_cnt;
}

int main() {
	vector<int>arr={7,4,2};
	cout<<stringPair(arr)<<endl;

}
