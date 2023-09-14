#include <bits/stdc++.h>

using namespace std;


void ReadFile(const string & FileName,vector<string>& array){
	ifstream ifs(FileName);
	if(ifs){
		string buf;
		while(getline(ifs,buf)){
			array.push_back(buf);
		}
	}
	
	
}



int main(){
	
	return 0;
}
