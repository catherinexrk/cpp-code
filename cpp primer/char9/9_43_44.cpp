#include <bits/stdc++.h>

using namespace std;

/*
	编写一个函数，接受三个string参数是s、oldVal 和newVal。
	使用迭代器及insert和erase函数将s中所有oldVal替换为newVal。
	测试你的程序，用它替换通用的简写形式，如，将"tho"替换为"though",将"thru"替换为"through"。
*/

void replace(string &s,const string &oldVal,const string &newVal){
	auto cur=s.begin();//s的头部
	//
	while(cur!=s.end()-oldVal.size()){
		if(oldVal==string(cur,cur+oldVal.size())){//判断s中有无oldVal元素
			s.erase(cur,cur+oldVal.size());//删除oldVal元素
			s.insert(cur,newVal.begin(),newVal.end());
			cur +=newVal.size();//cur到s中新增加的newVal的下一位
		}	
		else
			cur++;
	}
}

void replaceVersion2(string &s,const string &oldVal,const string &newVal){
	auto cur=s.begin();
	while(cur!=s.end()-oldVal.size()){
		if(oldVal==string(cur,cur+oldVal.size())){
			s.replace(cur,cur+oldVal.size(),newVal);
			cur +=newVal.size();
		}
		else
			cur++;
	}
}

int main(){
	
	
	
	return 0;
}
