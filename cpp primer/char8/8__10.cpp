#include <bits/stdc++.h>

using namespace std;


void func(){
	//读取文件中的行元素
	ifstream ifs("E:/github");
	if(!ifs){
		cout<<"wrong";
		return;
	}
	
	vector<string> array;
	string buff;
	while(getline(ifs,buff))//按行输入array容器中
		array.push_back(buff);
	
	//使用istringstream读取vector中的元素
	for(auto &a:array){
		istringstream is(a);//获取array中的每一行
		string temp;
		while(is>>temp)//读取一行中的每一个单词
			cout<<temp<<" ";
	}
}


int main(){
	
	
	return 0;
}
