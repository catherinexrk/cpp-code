#include <bits/stdc++.h>
using namespace std;

int main(){
	list<int> l{1,2,3,4,5,6,7};
	vector<int> arr1{1,2,3};
	
	cout<<( vector<int>(l.begin(),l.end())==arr1)<<endl;
	
	
	std::cout << (std::vector<int>(l.begin(), l.end()) == arr1 ? "true" : "false") << std::endl;
	
	return 0;
}
