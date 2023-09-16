#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<char> vec={'h','e','l','l','o','w','o','r','l','d'};//使用迭代器
	char vec2[]={'h','e','l','l','o'};//string 首地址+复制长度
	string s(vec.begin(),vec.end());
	string s1(vec2,5);
	cout<<s<<endl;
	cout<<s1<<endl;
	
	
	
	
	return 0;
}
