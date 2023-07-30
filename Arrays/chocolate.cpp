// #include<iostream>
// using namespace std;

// void chocolate(int money, int price, int wrap)
// {
//     int choc, wrapper = 0, extraChoc = 0, remWrap = 0, total = 0;
//     while(wrapper>0)
//     {
//         choc = money;
//         wrapper = choc/3; //5
//         extraChoc = wrapper; //5
//         remWrap = choc % 3;
//         wrapper += remWrap;
//         total = extraChoc + choc;
//     }

//     cout<<total;
// }


// int main()
// {
//     int money = 15;
//     int price = 1;
//     int wrap = 3;

//     chocolate(money, price, wrap);

//     return 0;
// }


// Recursive C++ program to find maximum
// number of chocolates
#include <iostream>
using namespace std;

// Returns number of chocolates we can
// have from given number of chocolates
// and number of wrappers required to
// get a chocolate.
int countRec(int choc, int wrap)
{
	// If number of chocolates is less than
	// number of wrappers required.
	if (choc < wrap)
		return 0;

	// We can immediately get newChoc using
	// wrappers of choc.
	int newChoc = choc/wrap;

	// Now we have "newChoc + choc%wrap" wrappers.
	return newChoc + countRec(newChoc + choc%wrap,
							wrap);
}

// Returns maximum number of chocolates we can eat
// with given money, price of chocolate and number
// of wrappers required to get a chocolate.
int countMaxChoco(int money, int price, int wrap)
{
	// We can directly buy below number of chocolates
	int choc = money/price;

	// countRec returns number of chocolates we can
	// have from given number of chocolates
	return choc + countRec(choc, wrap);
}

// Driver code
int main()
{
	int money = 15 ; // total money
	int price = 1; // cost of each candy
	int wrap = 3 ; // no of wrappers needs to be
	// exchanged for one chocolate.

	cout << countMaxChoco(money, price, wrap);
	return 0;
}
