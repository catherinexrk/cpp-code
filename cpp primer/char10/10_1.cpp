#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> arr={1,2,3,4,5,6,7,8,9,12,23,1,21,213,1,1,1,1,1,1};
	cout<<count(arr.begin(),arr.end(),1)<<endl;
	
	list<string> li={"aaa","bbb","ccc","aaa"};
	cout<<count(li.begin(),li.end(),"aaa")<<endl;
	

	
	
	
	return 0;
}
