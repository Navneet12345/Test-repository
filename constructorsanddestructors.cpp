#include<iostream>
#include<string>

using namespace std;

class Player{
    
   public:
string name;
int health;
int xp;

void talk(string text_to_say){cout<<name<<" says "<<text_to_say;}
bool is_dead(); 
    
};

class Account {
    
    
public:
    string name;
    double balance;
    
    
    bool deposit(double bal){balance+=bal; cout<< "In deposit"<<endl;}
    
    bool withdraw(double bal){balance-=bal; cout<< " In withdraw "<<endl;}
};





int main(){
    Account User_account;
    User_account.name="Navneet_account";
    User_account.balance=100000.0;
    User_account.deposit(5000.0);
    User_account.withdraw(1000.0); 
    
    
    Player Navneet;
    Navneet.name="Navneet";
    Navneet.health=100;
    Navneet.xp=17;
    Navneet.talk("Hi there");
    
    Player *enemy=new Player;
    (*enemy).name="Slayer";
    (*enemy).health=100;
    enemy->xp=23;
    enemy->talk(" I will destroy you ");
    
    
    return(0);
    
}














