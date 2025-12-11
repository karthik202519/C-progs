#include<iostream>
#include<string.h>

using namespace std;


class bank{
int accno;
char accholdername[100];
int bal;

public:

    bank(int acno,char*name,int ball)
    {
        accno = acno;
        strcpy(accholdername,name);
        bal=ball;
    }


    void deposite();
    void withdraw();
    void show();

};

void bank::deposite()
{
    int depositeamm;
    cout<<"Enter the Deposite amount  :";
    cin>>depositeamm;
    bal+=depositeamm;
}


void bank::withdraw()
{

    int withamm;
    cout<<"Enter withdraw amount : ";
    cin>>withamm;

    if(withamm>bal)
    {
        cout<<"The withdraw request is more than your balance!";
    }
    else if(withamm<=500)
    {
        cout<<"Withdraw amount is more than the minimum balance amount!, You must maintain the mminimum Fund!";
    }
    else
    {

        bal-=withamm;
    }


}

void bank::show()
{
    cout<<"\n\n********Customer Details*********";
    cout<<"\nName = "<<accholdername<<endl;
    cout<<"Accno = "<<accno<<endl;
    cout<<"Balence = "<<bal<<endl;
}


int main()
{
    int accnum,balll;
    char name[100];
    cout<<"\nEnter your name : ";
    cin>>name;

    cout<<"\nEnter accno : ";
    cin>>accnum;

    cout<<"\nEnter balance ammount :";
    cin>>balll;

    bank b(accnum,name,balll);
    b.deposite();
    b.withdraw();
    b.show();
    return 0;
}
