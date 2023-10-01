#include <bits/stdc++.h>

using namespace std;

void test1(){
	map<string,size_t> word_count;
	string word;
	while(cin>>word){
		//小写字母全部变大写
		for(auto & ch:word)
			ch=toupper(ch);
		//去除标点符号
		/*	word_count.erase(remove_if(word_count.begin(),word_count.end(),ispunct),
			word_count.end());*/
		
	}
}

void test2(){
	map<string,size_t> word_count;
	string word;
	while(cin>>word){
		for(auto &a:word)
			a=toupper(a);//全部转化为大写字母
		
		word.erase(std::remove_if(word.begin(),word.end(),ispunct),word.end());
		++word_count[word];
	}
}

int main(){

	
	return 0;
}
