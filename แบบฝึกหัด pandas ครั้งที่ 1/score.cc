#include <iostream>
using namespace std;
class BankAccount {
private:
// ---- data members ----
	int number;
	double balance;
public:
// ---- constructor ----
BankAccount(int n , double b = 0) : number(n),balance(b)  {}

void GetNumber  (){
    cout << number;
}
void GetBalance (){
    cout << balance;
}
void SetNumber(int ntr){
     Thisnumber = ntr;
}
string ToString() {
    string s = "Account No. " + to_string(number)+ " has balance " + to_string(balance);
return s;
}
friend ostream &operator<<(ostream &output, BankAccount &act) {
    output << "Account No. " << act.number
    << " has balance " << act.balance;
    return output;
}

};


int main(){
	BankAccount ktb(2);  //-> adsign 
    BankAccount *bkk_account = new BankAccount(4, 800);
    // ktb.GetBalance();
    BankAccount &CVV = ktb; 
    // ktb.SetNumber(999)
//  cout << ktb.ToString()+"NITRA"<<endl;
    delete bkk_account;
bkk_account->GetNumber();






  
// 	BankAccount KDB; 
}

