//https://www.geeksforgeeks.org/array-of-strings-in-cpp-5-different-ways-to-create/

// Array of Strings in C++ – 5 Different Ways to Create
// Using Pointers
// Using 2-D Array
// Using the String Class
// Using the Vector Class
// Using the Array Class



#include <bits/stdc++.h>
using namespace std;

int main()
{
	//1. Using Pointers
	const char* colour[4]
		= { "Blue", "Red", "Orange", "Yellow" };

	//2. Using a 2D array
	char colour1[4][10]
		= { "Blue", "Red", "Orange", "Yellow" };

	//3.Using the String Class
	string colour2[4]= { "Blue", "Red", "Orange", "Yellow" };

	//4. Using the vector class
	vector<string> colour3{ "Blue", "Red","Orange" };
	
	//5.Using the Array Class
	array<string, 4> colour4{ "Blue", "Red","Orange", "Yellow" };


	// Printing Strings stored in 2D array
	for (int i = 0; i < 4; i++)
		std::cout << colour[i] << "\n";

	return 0;
}




