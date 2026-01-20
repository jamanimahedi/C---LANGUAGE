#include <iostream>

using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;

private:
    double balance;

public:
    BankAccount(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    virtual void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully.\n";
    }

    virtual void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully.\n";
        }
        else
        {
            cout << "Insufficient Balance.\n";
        }
    }

    double getBalance()
    {
        return balance;
    }

    virtual void calculateInterest()
    {
    }

    virtual void displayAccountInfo()
    {
        cout << "\nAccount Number : " << accountNumber;
        cout << "\nAccount Holder : " << accountHolderName;
        cout << "\nBalance        : " << balance << endl;
    }

    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal)
    {
        interestRate = rate;
    }

    void calculateInterest() override
    {
        double interest = getBalance() * interestRate / 100;
        cout << "Savings Account Interest: " << interest << endl;
    }
};

class CheckingAccount : public BankAccount
{
private:
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit)
        : BankAccount(accNo, name, bal)
    {
        overdraftLimit = limit;
    }

    void withdraw(double amount) override
    {
        if (amount <= getBalance() + overdraftLimit)
        {
            cout << "Withdrawal Allowed (Overdraft Used if Needed).\n";
        }
        else
        {
            cout << "Overdraft Limit Exceeded.\n";
        }
    }

    void checkOverdraft()
    {
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

class FixedDepositAccount : public BankAccount
{
private:
    int term;

public:
    FixedDepositAccount(int accNo, string name, double bal, int t)
        : BankAccount(accNo, name, bal)
    {
        term = t;
    }

    void calculateInterest() override
    {
        double interest = getBalance() * 0.06 * term / 12;
        cout << "Fixed Deposit Interest: " << interest << endl;
    }
};

int main()
{
    int choice;
    BankAccount *account = nullptr;

    do
    {
        cout << "\n====== BANKING SYSTEM MENU ======";
        cout << "\n1. Create Savings Account";
        cout << "\n2. Create Checking Account";
        cout << "\n3. Create Fixed Deposit Account";
        cout << "\n4. Deposit Amount";
        cout << "\n5. Withdraw Amount";
        cout << "\n6. Calculate Interest";
        cout << "\n7. Display Account Info";
        cout << "\n0. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account = new SavingsAccount(101, "Jamani MahediRaza", 5000, 5);
            cout << "Savings Account Created.\n";
            break;

        case 2:
            account = new CheckingAccount(102, "Jamani MahediRaza", 3000, 2000);
            cout << "Checking Account Created.\n";
            break;

        case 3:
            account = new FixedDepositAccount(103, "Jamani MahediRaza", 10000, 12);
            cout << "Fixed Deposit Account Created.\n";
            break;

        case 4:
        {
            double amt;
            cout << "Enter Amount to Deposit: ";
            cin >> amt;
            if (account)
                account->deposit(amt);
            else
                cout << "Create Account First.\n";
            break;
        }

        case 5:
        {
            double amt;
            cout << "Enter Amount to Withdraw: ";
            cin >> amt;
            if (account)
                account->withdraw(amt);
            else
                cout << "Create Account First.\n";
            break;
        }

        case 6:
            if (account)
                account->calculateInterest();
            else
                cout << "Create Account First.\n";
            break;

        case 7:
            if (account)
                account->displayAccountInfo();
            else
                cout << "Create Account First.\n";
            break;

        case 0:
            cout << "Thank You! Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 0);

    delete account;
    return 0;
}
