#include <bits/stdc++.h>

using namespace std;



int main(){
	string str="hello world";
	deque<string> de;
	de.push_back(str);
	for(auto be=de.cbegin();be!=de.cend();be++)
		cout<<*be<<endl;
	
	
	list<string> li;
	li.push_back(str);
	for(auto be=li.cbegin();be!=li.cend();be++)
		cout<<*be;
	
	
	
	return 0;
}
