#include <iostream>
#include <string>
using namespace std;

/// base class 
class CreateAccount {
public:
int choice =1;
    string name;
    string password;

/// function for creating account

    void account() {
    
        cout << "Enter Your Email or Phone Number: ";
        cin >> name;

        cout << "Choose a Password: ";
        cin >> password;

        cout << "Created Account Successfully!" << endl<<endl;
    }
};

/// drived class

class Login : public CreateAccount {

//// function for login 
public :
 bool log() {

string userName, userPassword;

while (choice <=3){

cout << "Login To Your Account:" << endl<<endl;

        cout << "Enter Your ID: "; 
        cin >> userName;

        cout << "Enter Your password: ";
        cin >> userPassword;


        if (userName == name && userPassword == password) {

            cout << "Login Successfully!" << endl<<endl;
        return true;
    
        }
         else {

            cout << "Invalid Username or Password Try Again " <<endl<< endl;
            choice ++ ;
           
         } 

}  
   
          return false;
}
    
/// function for forget password  
public:
       bool update(){     

	   string newPass;
		  
    cout <<"Forget Password ?"<<endl;
 
   	cout <<"Choose a New Password :";
    cin >>newPass;
                   	
cout <<"Password Change SuccessFully "<<endl;
            
    password = newPass;

    	return log();

}

    };
    

class Admin {
    public:
    float deposite,with_draw;

/// function  for balance 

     void data(){
        
       cout <<"Enter Amount To Deposite :"<<endl;
       cin>>deposite;

        cout <<"Current Balance is :"<<deposite<<endl;
     }

     /// function for with draw

     void with(){

          cout <<"Enter Amount to With Draw :";
          cin>>with_draw;

          cout <<"SuccessFully With Draw :"<<with_draw<<endl;

     }

//// function for 

    void balance (){

    deposite -=with_draw ;

    cout <<"Remaining Balance is   :"<<deposite<<endl;
    }
           };


int main(void) {

///???????????
    Admin b;
    Login l;


int num;

cout <<"_____Well Come To Bank Al Habeeb_____ "<<endl<<endl;

cout <<"____Please Create Your Account to Login____"<<endl<<endl;

l.account();


cout <<"_____Login To Your Account_____ ";

    l.log();
     if (l.choice >3){
        l.update();
    }
    else {

    }
///  using loop for  choices
  do {

/// choices

cout <<"1.Deposite Money "<<endl;
cout <<"2.With Draw "<<endl;
cout <<"3.Check Balance "<<endl;
cout <<"4.Exit "<<endl;
cout <<"Enter your Choice "<<endl;
cin>>num;

/// conditon for choices 

switch (num){
            
    case 1:
        b.data();
    break ;

    case 2:
        b.with();
    break;

    case 3:
        b.balance();
    break;

    case 4:
        cout<<"Thank You For Using Bank AL Habeeb ";
        exit(0);
    break;

     default :
        cout <<"Invalid Choice ";
        }

}
while (num !=5);
    
}