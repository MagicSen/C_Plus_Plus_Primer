#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;
	std::cout << a << " " << b << " " << c << " " << *d << " "
		  << *e << std::endl;
	a = 42;
	b = 42;
	c = 42;
//	d = 42;
//	e = 42;
//	g = 42;
	std::cout << a << " " << b << " " << c << " " << *d << " "
		  << *e << std::endl;
	const int ii = 42;
	auto j = ii;
	const auto &k = ii;
	// p 是指向常量整型的指针
	auto *p = &ii;
	p = &j;
//	*p = 14;
	const auto j2 = ii, &k2 = ii;
	return 0;
}
