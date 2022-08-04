#include <iostream>
#include <conio.h>

using namespace std;

class banking 
{
    string name;
    string type;
    int numss;
    int bal;

    public:
        void CreateAccount (void);
        void deposit (void);
        void withdraw (void);
        void display (void);

        
};

        void banking :: CreateAccount(void)
        {
            cout    << "CreateAccount" << endl; 
            cout << "Enter Name" << endl;
            cin >> name;
            cout <<"Enter account type: " << endl;
            cin >> type;    
            cout  <<"Enter account number" << endl;
            cin >> numss;   
            cout <<"Enter balance: " << endl;
            cin >> bal; 

        }
        void banking :: deposit(void)
        {
            int depo=0;
            cout <<"Enter deposit amount";
            cin >> depo;
            bal=bal+depo;
            cout <<"Current balance: " << bal << endl;

        }
        void banking :: withdraw(void)
        {
            int with=0;
            cout <<"Enter withdraw amount";
            cin >> with;
            bal=bal-with;
            cout <<"Current balance: " << bal << endl;
        }
        void banking :: display(void)
        {
            cout<<"Your name is"<<name;
            cout <<"Your account type is"<<type<<endl;
            cout<<"Your account number is"<<numss<<endl;
            cout <<"Your cuurent balance is"<<bal<<endl;

        }


int main ()
{
    banking acc1;
     int option;

         do
         {
            cout <<"Choose an option \n\n";
            cout <<"1)Create an account\n\n";
            cout <<"2)Deopsit \n\n";
            cout <<"3)withdraw \n\n";
            cout <<"4)display details \n\n";
            cout <<"5)Exit \n\n";
            cin >> option;

            switch (option)
            {
            case 1: acc1.CreateAccount();

                break;
            case 2: acc1.deposit();
                break;
            case 3: acc1.withdraw();  
                break;
            case 4: acc1.display(); 
                break;
            case 5: goto end;
                break;

            
            default: cout << "Invalid option";
             break;
            
            }
         }
         while (1);
         end:
         return 0;
}           