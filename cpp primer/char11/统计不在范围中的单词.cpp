#include <bits/stdc++.h>

using namespace std;


int main(){
	/*	map<string,size_t> word_count;
	string word;
	while(cin>>word)
		++word_count[word];
	for(const auto & a:word_count)
		cout<<"first is "<<a.first<<" second is "<<a.second<<endl;*/
	map<string,size_t> word_count;
	set<string> exclude={"or","and","not","a"};
	string word;
	while(cin>>word){
		if(exclude.find(word)==exclude.end())
			++word_count[word];
	}
	
	
	return 0;
}
