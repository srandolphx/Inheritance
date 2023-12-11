#pragma once

#include <string>
#include <iostream>


using namespace std;

class BaseAccount
{
	
protected:
	int withDrawls;
private:
	
	float balance;
	
public:

	BaseAccount();
	
	void Withdraw(float amount); 
	void Deposit(float amount); 
	float GetBalance() const;
};



