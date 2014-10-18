#include "Account.h"
void Account::rate(double newInt)
{
	Account::interestRate = newInt; 
}
double Account::initRate()
{
	return 0.01;
}
double Account::interestRate = initRate();

