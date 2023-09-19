#include <bits/stdc++.h>

using namespace std;


int main(){
	vector<int> ve={1,2,3,4,5,6,7,8,11,23,123,4,325,6,56456,436,25,34,24,1,11,1,1,11,1,1};

	for(int i=0;i<3;i++){
		vector<int> ve2;
		if(i==0){
			copy(ve.begin(),ve.end(),back_inserter(ve2));
		}
		else if(i==1){
			copy(ve.begin(),ve.end(),front_inserter(ve2));
		}
		else
			copy(ve.begin(),ve.end(),inserter(ve2,ve2.begin()));
		
		for(auto a:ve2 )
			cout<<a<<" ";
		
	}
	
	
	
	
	return 0;
}
