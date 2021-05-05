#include <iostream>
using namespace std;

//this is a demonstration of how inline functions can be used

inline int exponential(int num){ //an inline function to demonstrate how they work
	return num*num;
}

int main() {
	/*Because this program is so brief, I will explain what an inline function is.
	 *
	 * An inline function is a function that is duplicated wherever it is called within the code.
	 * Because of the way it is handled, the processor doesn't need to relinquish control during
	 * the course of the function.
	 *
	 * In this example, the same function will be called with different data:
	 */
	cout << "10^2 is: " << exponential(10) << endl;
	cout << "40^2 is: " << exponential(40) << endl;
	cout << "80^2 is: " << exponential(80) << endl;
	/*
	 * Because of the way inline functions work, the function is repeatedly being copied directly
	 * into the main, albeit with different data being inserted in as the parameter.  This means
	 * that when the processor gets to these functions, it doesn't have to wait for other components
	 * to allow it to return back to the program.  Small functions like this with no loops are great
	 * candidates for this sort of design because it saves the processor wait time.
	 *
	 * Note: While loops and derivatives may work in an inline function, it may cause overhead
	 * within an inline function, which defeats the purpose of an inline function.  Therefore,
	 * it is ill advised to use loops within an inline function.
	 */

	return 0;
}


