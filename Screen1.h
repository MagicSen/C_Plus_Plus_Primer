#pragma once
#include <iostream>
#include <string>

using namespace std;

class Screen{
public:
	using pos = string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
	Screen move(pos r, pos c);
	inline char get(pos r, pos c) const;
	Screen set(char);
	Screen set(pos , pos ,char);
	Screen display(std::ostream &os)
		{do_display(os); return *this;}
	const Screen display(std::ostream &os)  const
		{do_display(os); return *this;}
private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	string contents;
	void do_display(std::ostream &os) const 
		{os << contents;}
};

inline Screen Screen::move(pos r, pos c) 
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row+c];
}

inline Screen Screen::set(char s)
{
	contents[cursor] = s;
	return *this;
}
inline Screen Screen::set(pos r, pos c, char ch)
{
	contents[r*width + c] = ch;
	return *this;
}
