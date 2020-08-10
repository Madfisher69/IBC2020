#include <iostream>
#include <string>
using namespace std;

int main() {
  string login;
  string password;
  cin >> login;
  cin >> password; 
  for (int i=0; i < 3 ; ++i) {
     if (login == password) {
    cout << "Access has granted\n";
    return 0;
   } else  {
        cin >> login;
        cin >> password;
        cout << "Access has restricted\n";
    } 
  }
}