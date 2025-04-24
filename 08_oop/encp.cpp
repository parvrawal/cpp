 #include <iostream>

 using namespace std;

 class BankAccount {
    private:
        string accountNumber;
        double balance;
     public:
        BankAccount(string accNum, double initialBalance){
            accountNumber = accNum;
            balance = initialBalance;
        }

        // getter
        double getBalance() const {
            return balance;
        }

        // Method to deposit money
        void deposit(double amount) {
            if(amount > 0){
                balance += amount;
                cout << "Deposited: " << amount << endl;
            }else {
                cout << "Invalid deposit amount";
            }
        }

        // Method to withdraw money
        void withdraw(double amount ){
            if (amount > 0 && amount <= balance)
            {
               balance -= amount;
               cout << "Successfully Withdraw: " << amount << endl;
            }else {
                cout << "Invalid withdraw amount" << endl;
            }
            
        }


 };


 int main(){
    BankAccount myAccount("12229044", 500);

    myAccount.getBalance();

    myAccount.deposit(200);
    myAccount.withdraw(100);

    return 0;
 }