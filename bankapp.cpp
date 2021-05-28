#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

class bank
{
    char name[100],add[100],y;
    int balance, amount;
public:
    void open_account ();
    void deposite_money();
    void withdraw_money ();
    void display_account();
};
void bank::open_account()
{
    cout<<"Enter your full name ::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address ::";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account do you to open, Checkings (c) or Savings? (s)";
    cin>>y;
    cout<<"Enter amount for deposit ::";
    cin>>balance;
    cout<<"Your account is created ";

}
void bank::deposite_money()
{
    int a ;
    cout<<"Enter how much money you want to deposit::";
    cin>>a;
    balance+=a;
    cout<<"Your total deposit amount\n";
}
void bank::display_account()
{
    cout<<"Enter the name ::"<<name<<endl;
    cout<<"Enter your addees ::"<<add<<endl;
    cout<<"Type of account that you open ::"<<y<<endl;
    cout<<"Amount you deposit ::"<<balance<<endl;

}
void bank::withdraw_money()
{
    cout<<"withdraw ::";
    cout<<"Enter your amount for withdrawing ";
    cin>>amount;
    balance=balance-amount;
    cout<<"Now your total amount left is ::"<<balance;
}

int main()
{
    int ch,x,n;
    bank obj;
    do
    {
    cout<<"01)Open account \n";
    cout<<"02)Deposit money \n";
    cout<<"03)Withdraw money \n";
    cout<<"04)Display account\n";
    cout<<"05)Exit\n";
    cout<<"Please feel free to select your option  ";
    cin>>ch;

    switch(ch)
    {
        case 1:"01)open account \n";
        obj.open_account ();
        break;
        case 2:"02)deposite money \n";
        obj.deposite_money();
        break;
        case 3:"03)withdeaw money \n";
        obj.withdraw_money ();
        break;
        case 4:"04)display account\n";
        obj.display_account();
        break;
        case 5:
            if(ch==5)
            {
               cout<< "exit";
            }
        default:
            cout<<"This is not exit please try again ";

    }
    cout<<"\n Do you want to select the next step? If so, then please press::y\n";
    cout<<"If you want to exit then please press:: N ";
    x=getch();
    if(x=='n' || x=='N')
    cout<<"exit";
    }
    while (x=='y' || x=='Y');


 getch();
 return 0;




}
