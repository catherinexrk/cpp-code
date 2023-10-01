#include <bits/stdc++.h>

using namespace std;

void test(){
	/*map<string,vector<string>> family;
	for(int i=0;i<3;i++){
		string family_name;
		cout<<"家族姓名"<<endl;
		cin>>family_name;
		for(int j=0;j<2;j++){
			string children_name;
			cout<<"children_name"<<endl;
			cin>>children_name;
			family[family_name].push_back(children_name);
		}
	}*/
	
	map<string,vector<string>> family;
	for(int i=0;i<3;i++){
		cout<<"cin family name";
		string family_name;
		cin>>family_name;
		
		int sum_child;
		cout<<"cin the sum of the child";
		cin>>sum_child;
		
		for(int i=0;i<sum_child;i++){
			string child_name;
			cin>>child_name;
			family[family_name].push_back(child_name);
		}
		
	}
	
}
