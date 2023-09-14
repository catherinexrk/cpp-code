#include <bits/stdc++.h>

using namespace std;


struct PersonInfo{
	string name;
	vector<string> phones;
};
//打印istringstream对象的内容
void PrintInfo(istringstream &temp){
	string buff;
	while(temp>>buff)
		cout<<buff<<" ";
	
}


int main(){
	istringstream iss("hello world");
	PrintInfo(iss);
	return 0;
}
