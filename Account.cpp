#include <iostream>
#include "Account.h"
using namespace std;

Account::Account()
{
    balance = 1500.00; //Sets the account's starting balance.
    interest = 0.01; //Sets the interest the account is using.
}

double Account::Account_Balance() // Goes to class to retrieve balance.
{
    cout << "Your balance is $" << balance << endl;
    cout << endl;
    return 0;
}

double Account::Account_Withdraw() // Sets limits as to the numbers the user is able to input in order to withdraw.
{
    double Withdraw_Amount;

    cout << "Please enter an amount to withdraw: " << endl;
    cin >> Withdraw_Amount;
    cout << endl;

    if (Withdraw_Amount < 0)
    {
        cout << "Negative amounts are not allowed. Please try a positive amount." << endl;
        cout << endl;
    }

    else if (Withdraw_Amount > balance)
    {
        cout << "Insuffient funds." << endl;
        cout << endl;
    }

    else // Tells user new balance.
    {
        balance = balance - Withdraw_Amount;
        cout << "Balance withdrawal was successful.\nYour new balance is $" << balance << endl;
        cout << "Have a nice day!" << endl;
        cout << endl;
    }

    return 0;
}

double Account::Account_Deposit() // Sets limit as to what the user is able to deposit.
{
    double Deposit_Amount;

    cout << "How much would you like to deposit today: " << endl;
    cin >> Deposit_Amount;
    cout << endl;


    if (Deposit_Amount < 0)
    {
        cout << "Negative amounts are not allowed. Please enter a positive number." << endl;
        cout << endl;
    }

    else // Tells user new balance.
    {
        balance = balance + Deposit_Amount;
        cout << "Money deposit was successful.\nYour new balance is $" << balance << endl;
        cout << "Have a nice day!" << endl;
        cout << endl;
    }

    return 0;
}


double Account::Interest_Accrued() // Lets user see how much money will be accrued with interest along with new balance.
{
    double New_Balance;
    double Interest_Earned;
    double months;

    cout << "How many months would you like to calculate interest for?" << endl;
    cin >> months;
    cout << endl;

    if (months <= 0) {
        cout << "Sorry, that's an invalid entry. Please enter a positive number." << endl;
        cout << endl;

    }else
    {
        Interest_Earned = balance * interest * months;
        cout << "Your total interest accrued would be $" << Interest_Earned << endl;
        cout << "   " << endl;

        New_Balance = Interest_Earned + balance;
        cout << "Your total balance with interest would be $" << New_Balance << endl;
        cout << endl;
    }

    return 0;
}