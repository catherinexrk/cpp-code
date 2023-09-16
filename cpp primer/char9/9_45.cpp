#include <bits/stdc++.h>

using namespace std;


void replace(string &s,const string &str1,const string &str2){
	auto cur=s.begin();
	s.insert(cur,str1.begin(),str1.end());//插入前缀
	
	s.append(str2.begin(),str2.end());//追加后缀
}

void replaceVersion2(string &s,const string &str1,const string &str2){
	int pos=0;
	/*	s.insert(s,str1.begin(),str1.end());
	s.insert(s+s.size(),str2.begin(),str2.end());*/
	s.insert(0,str1);
	s.insert(s.size(),str2);
	
	
}

int main(){
	
	
	return 0;
}
