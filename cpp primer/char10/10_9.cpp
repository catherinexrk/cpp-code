#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> ve={12,33,2,6,8,34,231,1,41,21,1,23,23,32};
	for(auto a:ve)
		cout<<a<<" ";
	cout<<endl;
	
	sort(ve.begin(),ve.end());
	for(auto a:ve)
		cout<<a<<" ";
	cout<<endl;
	
	unique(ve.begin(),ve.end());
	for(auto a:ve)
		cout<<a<<" ";
	cout<<endl;
	
	
	return 0;
}
