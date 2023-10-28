#include <bits/stdc++.h>
using namespace std;

bool find_index(vector<int>::const_iterator begin(),vector<int>::const_iterator end(),int index){
	while(begin!=end()){
		if(*begin++==index)
			return true;
	}
	return false;
}


vector<int>::const_iterator return_index(vector<int>::const_iterator begin(),vector<int>::const_iterator end(),int index)){
	while(begin!=end()){
		if(*begin++==index)
			return begin;
	}
	return end;
}


