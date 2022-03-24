// Input output stream, importing iostrem library HEADER FILE
#include <iostream>

// Using std on a global level 
using namespace std;


// Function to output Menu options 
void Menu() {
    // Printing menu options with new line seperator
    cout << "********** MENU **********" << endl;
    cout << "1. Check balance " << endl; 
    cout << "2. Deposit " << endl;
    cout << "3. Withdraw " << endl;
    cout << "4. End session " << endl;
    cout << "**************************" << endl; 
}

// Compiler program execution 
int main()
{   
    // Variables 
    int option;
    double balance = 1000.43;
 
    // Do loop to recieve input for ATM Menu 
    do {
        // Calling Menu function 
        Menu();

        // Getting option input from customer
        cout << "Option: ";
        cin >> option;

        // Clearing console 
        system("cls");


        // Handling options using switch case from input option
        switch (option) {

        // If option == 1 then user has selected Balance option
        case 1: cout << "Balance: " << balance << " GBP" << endl;

            // Terminates the execution inside a switch block and breaks out of it.
            break;

        case 2: cout << "Deposit amount: ";
            double depositamount;
            cin >> depositamount;
            balance += depositamount;

            // Terminates the execution inside a switch block and breaks out of it.
            break;
        case 3: cout << "Withdrawal amount: ";
            double withdrawalamount;
            cin >> withdrawalamount;

            if (withdrawalamount <= balance) {
                balance -= withdrawalamount;
            }
            else
                cout << "Withdrawal failed. Insufficient balance." << endl;

            // Terminates the execution inside a switch block and breaks out of it.
            break;
        }
    } while (option!= 4);
    

    // Getting rid of excess system output
    system("pause>0");
}


/// CLOUD DEPLOYMENT 