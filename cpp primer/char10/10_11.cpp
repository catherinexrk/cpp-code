#include <bits/stdc++.h>

using namespace std;

bool isShorter(const string &s1,const string &s2){
	return s1.size()>s2.size();
}

int main(){
	vector<string> words={"aaa","bb","ccccc","dd","eeeeeeee","fffff","aaa"};
	for(auto a:words){
		cout<<a<<" ";
	}
	cout<<endl;
	
	stable_sort(words.begin(),words.end(),isShorter);
	for(auto a:words){
		cout<<a<<" ";
	}
	cout<<endl;
	
	sort(words.begin(),words.end(),isShorter);
	for(auto a:words){
		cout<<a<<" ";
	}
	cout<<endl;
	
	
	
	return 0;
}
