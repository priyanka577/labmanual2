#include <iostream>
using namespace std;
int main() {
    int num1, num2;
  cout << "Enter the first integer: ";
    cin >> num1;
 cout << "Enter the second integer: ";
    cin >> num2;
  if (num2 != 0 && num1 % num2 == 0) {
        cout << num1 << " is a multiple of " << num2 << "." << endl;
    } else {
        cout << num1 << " is not a multiple of " << num2 << "." << endl;   }
   return 0;
}
