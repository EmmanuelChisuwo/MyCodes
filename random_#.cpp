#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;
 int main() {
    srand(time(nullptr));

  int daysUntilExpiration = rand() % 12;
  if(daysUntilExpiration <=0){
    cout << "your subscription has expired"<< endl;
    cout << "Please Renew Your Subscription"<< endl;
  } else if (daysUntilExpiration = 1){
    cout << "Your Subscription Ends Within a day" << endl;
    cout << "Renew Now and Save 20%!" << endl;
  }else if (daysUntilExpiration <= 5){
    cout << "Your Subscription Expires in"<< daysUntilExpiration << "Days." << endl;
    cout << "Renew Now and Save 10% " << endl;
  } else if(daysUntilExpiration <=10){
    cout << "Your Subscription Expires Soon.Renew Now! " << endl;
      }else if(daysUntilExpiration <=11){
        cout << "You Have an Active Subscription." << endl;
      }  
      
    return 0;
      
     }