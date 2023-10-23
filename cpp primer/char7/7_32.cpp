#include <bits/stdc++.h>
using namespace std;

class Screen{
public:
	friend void clear();
	
private:
	string::size_type height,width,cursor;
};

class Window_mgr{
public:
	void clear();
};

void Window_mgr::clear(){
	cout<<"hello";
}


