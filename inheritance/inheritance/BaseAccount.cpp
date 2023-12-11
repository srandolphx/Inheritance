

#include "BaseAccount.h"





BaseAccount::BaseAccount()
{
	withDrawls = 0;
	balance = 100;
}
void BaseAccount::Withdraw(float amount)
{
	if (this->balance - amount >= 0)
	{
		this->balance -= amount;
		this->withDrawls++;
	}
	else {
		cout << "***Insufficient funds***" << endl;
	}
}
void BaseAccount::Deposit(float amount)
{
	
	this->balance += amount;
}
float BaseAccount::GetBalance() const
{
	return balance;
}