// Input output stream, importing iostream library 
#include <iostream>

// Input output manipulator, importing iomanip library
#include <iomanip>

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
    // Variables initiation and assignment 
    int option;
    double balance = 1000.50;
 
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

        // If option == 1 then user has selected Balance option | Printing balance to 2.d.p
        case 1: cout << "Balance: " << fixed << setprecision(2) << balance << " GBP" << endl;

            // Terminates the execution inside a switch block and breaks out of it.
            break;

         // If option == 2 then user has selected deposit option
        case 2: cout << "Deposit amount: ";

            // Defining depositamount double variable 
            double depositamount;

            // Taking user input to allow user to enter desired deposit amount 
            cin >> depositamount;

            // Adding the deposit amount to the initial balance 
            balance += depositamount;

            // Terminates the execution inside a switch block and breaks out of it.
            break;

         // If option == 3 then user has selected withdrawal option
        case 3: cout << "Withdrawal amount: ";

            // Defining withdrawalamount double variable 
            double withdrawalamount;

            // Taking user input to allow user to enter desired deposit amount 
            cin >> withdrawalamount;

            // Before an output is given, first checking that the requested withdrawal amount is avaialble in the individuals bank account 
            if (withdrawalamount <= balance) {

                // Subtracting withdrawal amount from the initial bank balance 
                balance -= withdrawalamount;
            }
            // Else if requested withdrawal amount is greater than balance then return an error 
            else if (withdrawalamount > balance) {

                // Print withdrawal failed text with new line 
                cout << "Withdrawal failed. Insufficient balance." << endl;

            }

            // Terminates the execution inside a switch block and breaks out of it.
            break;
        }
    // TRY WHILE IN (1,2,3) THEREFORE IT SATISFIES ALL CASES IN THE DO LOOP 
    } while (option  != 4);

    ///// C++ Booleans 
    

    // Getting rid of excess system output
    system("pause>0");
}
/// CLOUD DEPLOYMENT /// 