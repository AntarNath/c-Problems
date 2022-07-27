#include<bits/stdc++.h>
using namespace std;

class BankAccount{
public:
    string account_holder;
    string address;
    int age;
    int account_number;
protected:
    int balance;
private:
    string password;
public:
    BankAccount(string account_holder,string address,int age,string password){
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand()%1000000000;
        this->balance = 0;
        cout<<"Your account number is : "<<this->account_number<<endl;
    }

    int show_balance(string password){
        if(this->password == password){
            return this->balance;
        }
        else{
            return -1;
        }
    }
    
    void add_money(string password,int amount){
        if(amount < 0){
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(this->password == password){
            this->balance += amount;
            cout<<"Add money successful"<<endl;
        }
        else{
            cout<<"Password didn't match"<<endl;
        }
    }

    void deposit_money(string password, int amount){
        if(amount > 0){
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(this->balance < amount){
            cout<<"Insufficient balance"<<endl;
            return;
        }
        if(this->password == password){
            this->balance -= amount;
            cout<<"Deposit money successful"<<endl;
        }
        else{
            cout<<"Password didn't match"<<endl;
        }
    }
    friend class MyCash;
};

class MyCash{
protected:
    int balance;
public:
    MyCash(){
        this->balance = 0;
    }

    void add_money_from_bank(BankAccount *myAccount,string password,int amount){
        if(amount < 0){
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(myAccount->balance < amount){
            cout<<"Insufficient balance";
            return;
        }
        if(myAccount->password == password){
            this->balance += amount;
            myAccount->balance -= amount;
            cout<<"Add money from bank is successful";
        }
        else{
            cout<<"Password didn't match";
        }
    }

    int show_balance(){
        return balance;
    }
};

BankAccount* create_account(){
    string account_holder,address,password;
    int age;
    cout<<"CREATE ACCOUNT"<<endl;
    cout<<"Holder Name : ";
    cin>>account_holder;
    cout<<"Holder Address : ";
    cin>>address;
    cout<<"Holder Age : ";
    cin>>age;
    cout<<"Holder Password : ";
    cin>>password;
    BankAccount *myAccount = new BankAccount(account_holder,address,age,password);
    return myAccount;
}

void add_money(BankAccount *myAccount){
    string password;
    int amount;
    cout<<"ADD MONEY"<<endl<<"Password : ";
    cin>>password;
    cout<<"Amount : ";
    cin>>amount;
    myAccount->add_money(password,amount);
    cout<<"Your bank balance is "<<myAccount->show_balance("abc")<<endl;
}

void deposit_money(BankAccount *myAccount){
    string password;
    int amount;
    cout<<"DEPOSIT MONEY"<<endl<<"Password : ";
    cin>>password;
    cout<<"Amount : ";
    cin>>amount;
    myAccount->deposit_money(password,amount);
    cout<<"Your bank balance is "<<myAccount->show_balance("abc")<<endl;
}

void add_money_from_bank(MyCash *myCash,BankAccount *myAccount){
    string password;
    int amount;
    cout<<"ADD MONEY FROM BANK"<<endl<<"Password : ";
    cin>>password;
    cout<<"Amount : ";
    cin>>amount;
    myCash->add_money_from_bank(myAccount,password,amount);
    cout<<"Your bank balance is "<<myAccount->show_balance("abc")<<endl;
    cout<<"MyCash balance : "<<myCash->show_balance()<<endl;
}

int main(){
    BankAccount *myAccount = create_account();
    add_money(myAccount);
    deposit_money(myAccount);
    MyCash *myCash = new MyCash();
    add_money_from_bank(myCash,myAccount);
    return 0;
}