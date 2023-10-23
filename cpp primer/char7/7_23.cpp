#include <bits/stdc++.h>

using namespace std;



class Screen{
public:
typedef string::size_type pos;
	Screen()=default;
	
	Screen(pos h,pos w):width(w),height(h),content(width*height,' '){};
	Screen(pos h,pos w,char c):width(w),height(h),content(width*height,c) {};
	
	char get(pos ht,pos wd) const;
	
	Screen &move(pos r,pos c);
	
	Screen &set(char);
	Screen &set(pos,pos,char);
	
	pos size() const;
	
	
private:
	pos width,height;
	pos cursor;
	string content;
};

inline
Screen &Screen::move(pos r,pos c){ // 更新光标位置
	pos row=r*width;
	cursor=row+c;
	
	return * this;
}
char Screen::get(pos r,pos c)const{
	pos row=r*width;
	return content[row+c];//返回给定位置的字符
}
Screen &Screen::set(char c){//存储当前光标指向的位置信息
	content[cursor]=c;
	return *this;
}
Screen &Screen::set(pos row,pos col,char c){
	content[row*width+col]=c;
	return *this;
}

Screen::pos Screen::size() const{
	return height*width;
}
