#pragma once


#include "BaseAccount.h"
class CheckingAccount :
    public BaseAccount
{
public:
    
   
    CheckingAccount();
    void Withdraw(float amt);
private:

};

