// 1 << (k - 1) => 0000..(1)..000 where 1 will be in kth position
// for ex: 1 < (3 - 1) => 00100
// negating this will result in negating all bits => 00100 => 11011
// now if we use & operator between n and the result, we get n & 11011 => all bits will be same except kth bit.
#include <iostream>
#include <bitset>
using namespace std;
 
// Function to turn off k'th bit in `n`
int turnOffKthBit(int n, int k) {
    return n & ~(1 << (k - 1));
}
 
int main()
{
    int n = 20;
    int k = 3;
 
    cout << n << " in binary is " << bitset<8>(n) << endl;
    cout << "Turning k'th bit off\n";
    n = turnOffKthBit(n, k);
    cout << n << " in binary is " << bitset<8>(n) << endl;
 
    return 0;
}
