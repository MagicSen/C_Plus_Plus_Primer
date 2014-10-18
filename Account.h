#pragma once
#include <iostream>
class Account {
public:
	Account(std::string ow = "",double a = 0):owner(ow),amount(a) {}
	void calculate(){ amount += amount * interestRate;}
	static double rate() {return interestRate;}
	static void rate(double);
private:
	static constexpr int period = 30;
//	static const int period = 30;
//	static int period = 30;
	double dail_tbl[period] = {0};
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();
};
