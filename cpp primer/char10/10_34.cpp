#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> ve={1,2,3,4,5,6,7,8,9,10};
	for(auto iter=ve.crbegin();iter!=ve.crend();iter++)
		cout<<*iter<<" ";
	cout<<endl;
	
	/*	auto iter=ve.begin();
	while(--iter!=ve.begin())
		cout<<*iter<<" ";
	cout<<endl;*/
	auto iter=ve.begin();
	for(iter--;1;iter--){
		if(iter==ve.begin()){
			cout<<*iter;
			break;
		}
		cout<<*iter<<" ";
	}
	
	cout<<endl;
		
	
	return 10;
}
