// if we & n and n - 1 => we get 0 if n is power of 2
// for example,n = 8 , binary representation is 1000, n-1 = 7, binary representation is 0111. if we & => 0000. so 8 is power of 2
// if n = 9, bin = 1001, n-1 is 8,bin = 1000. 1001 & 1001 = 0001 != 0 so, 9 is not a power of 2

#include <iostream>
#include <bitset>
using namespace std;

bool isPowerOfTwo(unsigned n)
{
	cout << n << " in binary is " << bitset<8>(n) << "\n";
	cout << n - 1 << " in binary is " << bitset<8>(n-1) << "\n\n";

	return !(n & (n - 1));
}

int main()
{
	unsigned n = 16;

	if (isPowerOfTwo(n)) {
		cout << n << " is power of two";
	} else {
		cout << n << " is not a power of two";
	}

	return 0;
}
