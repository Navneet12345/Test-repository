#include<iostream>
#include<string>

using namespace std;

class Account{
    
  private:
//attributes
string name;
double balance;


public:


void set_balance(double bal){balance=bal;}
double get_balance(){return balance;}


void set_name(string n);
string get_name();


bool deposit(double amount);
bool withdraw(double amount);



  
    
    
    
};



void Account::set_name(string n){
    
    name=n;
} 
string Account::get_name(){
    
    return name;
}


bool Account::deposit(double amount){
    
    balance+=amount;
    
}


bool Account::withdraw(double amount){
if(balance-amount>=0){

balance-=amount;
return true;
}else{
    
    return false;
}   

}




int main(){
    
    Account Users_account;
    Users_account.set_name("Users account");
    Users_account.set_balance(5000000000);
     
    
    if (Users_account.deposit(10000))
        cout<<"deposit ok"<<endl;
        else
            
          cout<<"deposit not allowed"<<endl;

  
        if(Users_account.withdraw(1000))
            cout<<"Withdraw ok"<<endl;
            else
                
              cout<<"Not sufficient funds"<<endl;
  
       if (Users_account.withdraw(1500))
cout<<"Withdraw ok"<<endl;

else
cout<<"Not sufficient funds"<<endl;


return(0);



} 
    
    
