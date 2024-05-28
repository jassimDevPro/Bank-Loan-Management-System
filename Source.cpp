#include<iostream>
using namespace std;

class Bank {
    char  name[30] = "jassim zulfiqar ", address[100] = "Samnabad";
    char acc_type;
    float balance;
    int acno;
    int Acno, m;
    int day, fine;

public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
    void loan();
    void recLoan();
};

// Function to open the account
void Bank::open_account()
{


    cout << "Enter your full name: "
        << name << endl;
    acno = 0001;
    cout << "ur account number is" << acno;

    cout << "Enter your address: "
        << address << endl;
    acc_type = 'S';
    cout << "What type of account you want"
        << " to open saving(S) or Current(C): "
        << acc_type << endl;
    balance = 8000;
    cout << "Enter How much money you want to deposit: "
        << balance << endl;

    cout << "Account Created Successfully";
}

// Function to deposit the account
void Bank::deposit_money()
{
    int Amount;
    Amount = 9500;
    cout << "Enter how much money"
        << " you want to deposit: "
        << Amount << endl;
    balance += Amount;
    cout << "\n Available Balance: "
        << balance;
}

// Function to display the account
void Bank::display_account()
{
    cout << "Name: " << name << endl
        << "account no" << acno << endl
        << "Address: " << address << endl
        << "Type: " << acc_type << endl
        << "Balance: " << balance << endl
        << endl;
}

// Function to withdraw the account
void Bank::withdraw_money()
{
    float amount;
    amount = 2500;
    cout << "Enter how much money "
        << "you want to withdraw: "
        << amount << endl;
    balance -= amount;
    cout << "\n Available balance: "
        << balance;
}
void Bank::loan()
{

    cout << "enter ur acc num\n";
    cin >> Acno;
    if (Acno == acno)
    {
        if (balance >= 15000)
        {

            cout << "\nhow much money u want";
            cout << "\nthere are three options\n"
                << "\n" << balance / 3
                << "\n" << balance / 4
                << "\n" << balance / 5;
            cin >> m;

            if (m == balance / 3)
            {
                cout << "\nyes u can avil loan from us";
                cout << "\n how much time u will take to return "
                    << "\n maximum time limit is 60 days otherwise amount will be deducted on daily basis until all amount is recovered";



            }
            else if (m == balance / 4)
            {
                cout << "yes u can avil loan from us";
                cout << "\n how much time u will take to return "
                    << "\n maximum time limit is 60 days otherwise amount will be deducted on daily basis until all amount is recovered";

            }
            else if (m == balance / 5)
            {
                cout << "yes u can avil loan from us";
                cout << "\n how much time u will take to return "
                    << "\n maximum time limit is 60 days otherwise amount will be deducted on daily basis until all amount is recovered";

            }


        }
        else {
            cout << "low bal in account";
        }
    }

    else
    {
        cout << "error";
    }
}
void Bank::recLoan()
{

    cout << "\nwelcome to recovery department";
    cout << "\nhow many days before u get this loan";
    cin >> day;
    if (day <= 60)
    {
        cout << "\npay ur amount here";
        cout << "\nthanks for coming";
    }
    else
    {
        cout << "there will be fine you are over time";
        if (day == 61)
        {
            fine = 0;
            fine = m / 30;
            cout << "\n" << fine;

        }
        else if (day == 62)
        {
            fine = 0;
            fine = m / 29;
            cout << "\n" << fine;
        }
        else if (day == 63)
        {
            fine = 0;
            fine = m / 28;
            cout << "\n" << fine;
        }
        else if (day == 64)
        {
            fine = 0;
            fine = m / 27;
            cout << "\n" << fine;
        }
        else if (day == 65)
        {
            fine = 0;
            fine = m / 26;
            cout << "\n" << fine;
        }
        else if (day == 66)
        {
            fine = 0;
            fine = m / 25;
            cout << "\n" << fine;
        }
        else if (day == 66)
        {
            fine = 0;
            fine = m / 24;
            cout << "\n" << fine;
        }
        else if (day == 67)
        {
            fine = 0;
            fine = m / 23;
            cout << "\n" << fine;
        }
        else if (day == 68)
        {
            fine = 0;
            fine = m / 22;
            cout << "\n" << fine;
        }
        else if (day == 69)
        {
            fine = 0;
            fine = m / 21;
            cout << "\n" << fine;
        }
        else if (day == 70)
        {
            fine = 0;
            fine = m / 20;
            cout << "\n" << fine;
        }
        else if (day == 71)
        {
            fine = 0;
            fine = m / 19;
            cout << "\n" << fine;
        }
        else if (day == 72)
        {
            fine = 0;
            fine = m / 18;
            cout << "\n" << fine;
        }
        else if (day == 73)
        {
            fine = 0;
            fine = m / 17;
            cout << "\n" << fine;
        }
        else if (day == 74)
        {
            fine = 0;
            fine = m / 16;
            cout << "\n" << fine;
        }
        else if (day == 75)
        {
            fine = 0;
            fine = m / 15;
            cout << "\n" << fine;
        }



    }
}







// Driver code
int main()
{

    cout << "\t\t\t****************************************************************************\n";
    cout << "                                WELCOME TO BANK LOAN MANGEMENT SYSTEM  \n";
    cout << "\t\t\t****************************************************************************\n";

    Bank customer;

    cout << "\n1) Open account \n\n";

    customer.open_account();
    cout << "\n------------------------"
        << "-------------------------\n";

    cout << "\n2) Deposit account \n\n";

    customer.deposit_money();
    cout << "\n------------------------"
        << "-------------------------\n";

    cout << "\n2) Withdraw money \n\n";

    customer.withdraw_money();
    cout << "\n------------------------"
        << "-------------------------\n";

    cout << "\n4) Display Account \n\n";

    customer.display_account();
    cout << "\n------------------------"
        << "-------------------------\n";

    cout << "\n 5) LOAN SYSTEM \n\n";
    customer.loan();
    cout << "\n------------------------"
        << "-------------------------\n";
    cout << "\n 5) LOAN RECOVER SYSTEM \n\n";
    customer.recLoan();
    cout << "\n------------------------"
        << "-------------------------\n";

    return 0;
}