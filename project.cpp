#include<iostream>
using namespace std;

class account{
    private:
    string name;
    int balance;
    int pincode;
    long long int mobileno;
    string bankbranch;
    public:
    account(string name1,string branch,int bal,int pin,long long int mob){
        name=name1;
        bankbranch=branch;
        balance=bal;
        pincode=pin;
        mobileno=mob;
    }
    void checkBalance(){
        cout<<"To check your account balance, please enter pincode : ";
        int x;
        cin>>x;
        if ( x==pincode){
            cout<<"Your account Balance: Rs."<<balance<<endl;
        }
        else{
            int flag=1;
            while(flag){
                cout<<"To check your account balance, please enter pincode : ";
                int x;
                cin>>x;
                if ( x==pincode){
                    cout<<"Your account Balance: Rs."<<balance<<endl;
                    flag=0;}
                
            }
        }
    }  
    void cashWithdraw(){
        cout<<"To withdraw cash, please enter pincode : ";
        int x;
        cin>>x;
        if ( x==pincode){
            cout<<"Your account Balance: Rs."<<balance<<endl;
            cout<<"Enter withrawal amount: ";
            int money_withdrawal;
            cin>>money_withdrawal;
            if(money_withdrawal<=balance){
                balance=balance-money_withdrawal;
                cout<<"Withdrawal SUCCESSFUL"<<endl;
                cout<<"Your updated account Balance: Rs."<<balance<<endl;
            }
            else{
                cout<<"ERROR PLEASE TRY AGAIN"<<endl;
            }
        }
        else{
            int flag=1;
            while(flag){
                cout<<"To withdraw cash, please enter pincode :";
                int x;
                cin>>x;
                if ( x==pincode){
                    cout<<"Your account Balance: Rs."<<balance<<endl;
                    cout<<"Enter withrawal amount: ";
                    int money_withdrawal;
                    cin>>money_withdrawal;
                    if(money_withdrawal<=balance){
                        balance=balance-money_withdrawal;
                        cout<<"Withdrawal SUCCESSFUL"<<endl;
                        cout<<"Your updated account Balance: Rs."<<balance<<endl;}
                    else{
                        cout<<"ERROR PLEASE TRY AGAIN"<<endl;}
                    flag=0;}
                
            }
        }
    } 
    void userDetails(){
        cout<<"To View user details, please enter pincode : ";
        int x;
        cin>>x;
        if ( x==pincode){
            cout<<"Name:"<<name<<endl;
            cout<<"Bank Branch: "<<bankbranch<<endl;
            cout<<"Mobile no: "<<mobileno<<endl;   
        }
        else{
            int flag=1;
            while(flag){
                cout<<"To View user details, please enter pincode : ";
                int x;
                cin>>x;
                if ( x==pincode){
                    cout<<"Name:"<<name<<endl;
                    cout<<"Bank Branch"<<bankbranch<<endl;
                    cout<<"Mobile no."<<mobileno<<endl;
                    flag=0;}
                
            }
        }
    }  
    void updateMobileno(){
        cout<<"To Update your mobile number, please enter pincode : ";
        int x;
        cin>>x;
        if ( x==pincode){
            cout<<"Enter new mobile number: ";
            long long int newmobno;
            cin>>newmobno;
            mobileno=newmobno;
            cout<<"Updated Mobile number:"<<mobileno<<endl; 
        }
        else{
            int flag=1;
            while(flag){
                cout<<"To Update your mobile number, please enter pincode : ";
                int x;
                cin>>x;
                if ( x==pincode){
                    cout<<"Enter new mobile number: ";
                    long long int newmobno;
                    cin>>newmobno;
                    mobileno=newmobno;
                    cout<<"Updated Mobile number:"<<mobileno<<endl; 
                    flag=0;}
                
            }
        }       
    }
};


int main(){
    account a1("Gouravi","HDFC-Patiala",456780,787878,9876543210);
    int opt=9;
    while(opt!=0){
    cout<<"Welcom to ATM, how can we help you?"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Cash withdraw"<<endl;
    cout<<"3. User Details"<<endl;
    cout<<"4. Update mobile number:"<<endl;
    cout<<"Enter option (0 to exit)";
    cin>>opt;

    switch(opt){
        case 0:
        cout<<"QUITTING ATM SYSTEM"<<endl;
        break;
        case 1:
        a1.checkBalance();
        break;
        case 2:
        a1.cashWithdraw();
        break;
        case 3:
        a1.userDetails();
        break;
        case 4:
        a1.updateMobileno();
        break;
        default:
        cout<<"Enter valid option"<<endl;  

    }

    }

}