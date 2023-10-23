#include <bits/stdc++.h>

using namespace std;


class Person{
public:
	friend ostream& PersonRead(ostream& os,const Person & temp);
	
	Person()=default;
	Person(string name,string address){
		this->name=name;
		this->address=address;
	}
	
	string getName() const {
		return this->name;
	}
	
	string getAddress() const {
		return this->address;
	}
	
private:
	string name;
	string address;
};

ostream& PersonRead(ostream& os,const Person & temp){
	os<<temp.name<<" "<<temp.address;
	return os;
}


int main(){
	
	
	
	
	return 0;
}
