#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
struct food{
    int Protein,Carbs,Fats;
};
vector<food> parseFoodItems(string &input){
    vector<food>Food;
    stringstream ss(input);
    string item;
    while(getline(ss,item,'|')){
        int p=0,c=0,f=0;
        stringstream ss1(item);
        string nutrient;
        while(ss1>>nutrient){
            if(nutrient.back()=='P')p=stoi(nutrient.substr(0,nutrient.size()-1));
            else if(nutrient.back()=='C')c=stoi(nutrient.substr(0,nutrient.size()-1));
            else if(nutrient.back()=='F')f=stoi(nutrient.substr(0,nutrient.size()-1));
        }
        Food.push_back({p,c,f});
    }
    return Food;
}


int main() {
	int maxP,maxC,maxF;
	string line1,line2;
	getline(cin,line1);
	getline(cin,line2);
	stringstream ss(line1);
	string nutrient;
	while(ss>>nutrient){
	    if(nutrient.back()=='P')maxP=stoi(nutrient.substr(0,nutrient.size()-1));
	    if(nutrient.back()=='C')maxC=stoi(nutrient.substr(0,nutrient.size()-1));
	    if(nutrient.back()=='F')maxF=stoi(nutrient.substr(0,nutrient.size()-1));
	}
	vector<food>ans=parseFoodItems(line2);
	
	int totP=0,totC=0,totF=0;
	vector<int>units(ans.size(),0);
	bool canAdd=true;
	while(canAdd){
	    canAdd=false;
	    for(size_t i=0;i<ans.size();i++){
	        if(totP+ans[i].Protein<=maxP && totC+ans[i].Carbs<=maxC && totF+ans[i].Fats<=maxF){
	            totP+=ans[i].Protein;
	            totC+=ans[i].Carbs;
	            totF+=ans[i].Fats;
	            units[i]++;
	            canAdd=true;
	        }
	    }
	}
	int shortP=max(0,maxP-totP);
	int shortC=max(0,maxC-totC);
	int shortF=max(0,maxF-totF);
	cout<<shortP<<" "<<shortC<<" "<<shortF<<endl;

}
