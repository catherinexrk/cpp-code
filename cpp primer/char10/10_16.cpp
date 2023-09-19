#include <bits/stdc++.h>

using namespace std;

//先是对字符串进行排序，然后清理掉重复的字符串
void elimDups(vector<string> &str){
	sort(str.begin(),str.end());
	auto str_end=unique(str.begin(),str.end());
	str.erase(str.begin(),str_end);
}

void isBigger(vector<string> &str,int flag){
	elimDups(str);//排序清楚重复单词
	
	//按照长度排序
	stable_sort(str.begin(),str.end(),
		[](string const &str1,string const &str2){return str1.size()<str2.size();}
	);
	//计算size大于flag的元素数目
	auto wc=find_if(str.begin(),str.end(),
		[flag](string const & str1){return str1.size()>=flag;}
	);
		
	for_each(wc,str.end(),
		[](string const & s){cout<<s<<" ";}
	);
	cout<<endl;
}
