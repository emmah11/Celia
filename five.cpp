#include <iostream>

using namespace std;

int main()
{
     int n;
     cin >> n;
switch (n) {
    case 0:
    cout << "you typed zero .\n";
    break;
    case 1:
    case 4:
    case 9:
     cout << "n is a perfect square .\n";
     break;
    case 2:
     cout << "n is a prime number.\n";
     break;
    case 6:
    case 8:
     cout << "n is an even number .\n";
     break;
    default:
     cout << " only single- digit positive numbers are allowed .\n";
     break;
}
  return 0;
}