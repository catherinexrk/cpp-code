#include <bits/stdc++.h>

using namespace std;

void copyVersion2(const vector<int> &ve, list<int> li){
	unique_copy(ve.begin(),ve.end(),back_insert_iterator(li));
	for(auto a:li)
		cout<<a<<" ";
	
	cout<<endl;
	
}

int main(){
	list<int> li;
	vector<int> ve={12,23,123,212,3,5,6,654,6,124,12,12,12,12,12,12,12};
	copyVersion2(ve,li);
	return 0;
}
