#include <bits/stdc++.h>

using namespace std;
class PersonInfo{
public:
	string name;
	vector<string> phones;
};

void func(){
	list<deque<int>> arr;
	
}

bool func2(int index){
	vector<int> array;
	for(int i=0;i<10;i++)
		array.push_back(i);
	while(array.begin()!=array.end()){
		if(*array.begin()==index)
			return true;
		array.begin()++;
	}
	return false;
}

bool func3(vector<int>const_iterator begin,vector<int>const_iterator end,int index){
	while(++begin!=index){
		if(*begin==index)
			return true;
	}
	return false;
}

vector<int>const_iterator func4(vector<int>iterator begin,vector<int>iterator end,int index){
	while(++begin()!=end()){
		if(*begin==index)
			return begin;
	}
	return end;
}

int main(){
	cout<<func2(10);
	
	
	return 0;
}
