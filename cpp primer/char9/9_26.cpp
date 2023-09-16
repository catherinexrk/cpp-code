#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[]={0,1,1,2,2,3,5,8,13,24,37,89};
	
	vector<int> ve;
	list<int> li;
	for(int i=0;i<sizeof(a)/sizeof(int);i++){
		ve.push_back(a[i]);
		li.push_back(a[i]);
	}
	
	for(auto temp=ve.begin();temp!=ve.end();){
		if(*temp % 2!=0)
			ve.erase(temp);
		
	}
	
	
	
	
	return 0;
}
