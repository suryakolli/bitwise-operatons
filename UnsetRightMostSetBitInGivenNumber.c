#include <iostream>
#include <bitset>
using namespace std;

unsigned unsetRightmostSetBit(unsigned n)
{
	return n & (n - 1);
}

int main()
{
	int n = 20;

	cout << n << " in binary is " << bitset<8>(n) << endl;

	cout << "Rightmost bit of " << n << " is unset\n";
	n = unsetRightmostSetBit(n);

	cout << n << " in binary is " << bitset<8>(n) << endl;

	return 0;
}
