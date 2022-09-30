// 1 << (k-1) => 00..1..00 1 at kth position
// if n & 1 << (k-1) => all bits will be 0 expect kth bit. depending on bit at kth position in n, it will be 0 or 1, if that bit is 0 or 1.

#include <iostream>
#include <bitset>
using namespace std;
 
// Function to check if k'th bit is set for `n` or not
bool isKthBitSet(int n, int k) {
    return (n & (1 << (k - 1))) != 0;
}
 
int main()
{
    int n = 20;
    int k = 3;
 
    cout << n << " in binary is " << bitset<8>(n) << endl;
 
    if (isKthBitSet(n, k)) {
        cout << "k'th bit is set";
    }
    else {
        cout << "k'th bit is not set";
    }
 
    return 0;
}
