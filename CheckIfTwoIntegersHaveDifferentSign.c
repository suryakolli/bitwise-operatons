// Problem 2. Detect if two integers have opposite signs or not
// The expression output x ^ y is negative if x and y have opposite signs. 
// We know that for a positive number, the leftmost bit is 0, and for a negative number, it is 1. 
// Now for similar sign integers, the XOR operator will set the leftmost bit of output as 0, and for opposite sign integers, it will set the leftmost bit as 1.

#include <iostream>
#include <bitset>
using namespace std;
 
int main()
{
    int x = 4;
    int y = -8;
 
    cout << x << " in binary is " << bitset<32>(x) << endl;
    cout << y << " in binary is " << bitset<32>(y) << endl;
 
    // true if `x` and `y` have opposite signs
    bool isOpposite = ((x ^ y) < 0);
 
    if (isOpposite) {
        cout << x << " and " << y << " have opposite signs";
    }
    else {
        cout << x << " and " << y << " don't have opposite signs";
    }
 
    return 0;
}
