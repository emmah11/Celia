#include <iostream>

using namespace std;

int main()
{

    int accumulator = 0;
    int dole;
    int bob;
    while(true)
    {
        
        if(dole == 0)
            break;
        accumulator += ((dole % 2 == 1) ? bob : 0);
        dole /= 2;
        bob *= 2;
    }
    cout << accumulator << "\n";
    return 0;
}
   