#include <bits/stdc++.h>

using namespace std;

int main(){
	string str="ab2c3d7R4E6";
	string numbers="0123456789";
	//查找数字字符
	for(int pos=0;(pos=str.find_first_of(numbers,pos))!=string::npos;pos++)
		cout<<str[pos]<<" ";
	
	cout<<endl;
	//查找字母字符
	for(int pos=0;(pos=str.find_first_not_of(numbers,pos))!=string::npos;pos++)
		cout<<str[pos]<<" ";
	
	
	return 0;
}
