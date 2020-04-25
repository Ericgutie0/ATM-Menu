#include <iostream>
#include <iomanip>
#include "Account.h"
using namespace std;

int main(){
    Account atm; //"Account" object
    int choice;

    // Option menu user is able to choose from and returns user to menu if invalid entry is attempted.
    do {

        cout << setw(20) << "WELCOME!" << endl;
        cout << "---------------------------------------" << endl;
        cout << "What would you like to do today? \n1. Account Balance\n2. Account Withdraw \n3. Account Deposit \n4. Interest Accrued \n5. Exit\n\nChoice: ";
        cin >> choice;
        cout << endl;

        while (choice < 1 || choice > 5) {
            cout << "You did not enter a valid choice.\n\n Choice: ";
            cin >> choice;
        }

        switch (choice) {
            case 1: atm.Account_Balance(); // Lets user check balance.
                break;
            case 2: atm.Account_Withdraw(); // Lets user withdraw money.
                break;
            case 3: atm.Account_Deposit(); // Lets user deposit money.
                break;
            case 4: atm.Interest_Accrued(); // Lets user check how much interest he will earn and total.
                break;
            case 5:
                cout << "THANK YOU, come back again!" << endl; // Lets user exit the program.
            default:
                break;
        }

    } while (choice != 5);


    return 0;
}