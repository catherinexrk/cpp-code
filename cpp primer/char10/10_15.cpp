#include <bits/stdc++.h>

using namespace std;
/*
	编写一个 lambda ，捕获它所在函数的 int，并接受一个 int参数。lambda 应该返回捕获的 int 和 int 参数的和
*/

int x=10;
auto f=[](int y){return x+y;};

int main(){
	cout<<f(12);
	return 0;
}
