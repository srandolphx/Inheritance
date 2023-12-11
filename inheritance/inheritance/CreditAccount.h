
#include "BaseAccount.h"



class CreditAccount :
    public BaseAccount
{
public:
   
    CreditAccount();

    void Withdraw(float amt);
    double getLimit();
private:
    
    float charge;
    float amount;




};

