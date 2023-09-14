#include <bits/stdc++.h>

using namespace std;

class PersonInfo{
public:
	string name;
	vector<string> phones;
};

void func(){
	string line,word;
	vector<PersonInfo> people;
	istringstream record;
	while(getline(cin,line)){
		PersonInfo info;
		record.str(line);
		record>>info.name;
		
		string temp;
		while(record>>temp){
			info.phones.push_back(temp);
		}	
	}
	
	
}


int main(){
	
	
	return 0;
}
