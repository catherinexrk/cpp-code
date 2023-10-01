#include <bits/stdc++.h>

using namespace std;

void test(){
	vector<pair<string,int>> vec;
	string str;
	int temp;
	while(cin>>str>>temp){
		vec.push_back(make_pair(str,temp));
		/*		
			vec.push_back({str,temp});
			vec.push_back(pair<string,int>(str,temp));
		*/
	}
	
	for(auto a:vec)
		cout<<a.first<<" "<<a.second<<endl;
	
	
	/*
		vec.push_back(std::make_pair(str, i));
		vec.push_back({ str, i });
		vec.push_back(std::pair<string, int>(str, i)); 
	*/
}
