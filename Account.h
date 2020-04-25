#ifndef STUFF_ACCOUNT_H
#define STUFF_ACCOUNT_H
using namespace std;


class Account {

private:
    double balance;
    double interest;

public:
    Account();
    int choice;
    double Account_Balance();
    double Account_Withdraw();
    double Account_Deposit();
    double Interest_Accrued();

};


#endif //STUFF_ACCOUNT_H
