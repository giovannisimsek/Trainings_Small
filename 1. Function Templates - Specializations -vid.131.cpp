
/* xxx

*/

#include <iostream>
#include <string>

using namespace std;


// (1) Specialization of Function Templates
// Normal Generic Function
// Source video: 
// Explicitly Overloading Generic Functions with Normal Functions -131- C++ Generic Programming - YouTube [720p]
template <typename T>
void f1(const T& x){
	cout << "template f1(T) - parameter: " << x << endl;
}


// (a) Explicit specialization of f1
template <>
void f1<int>(const int& x){
	cout << "template special. f1<int>(int) - parameter: " << x << endl;
}

// (b) Implicit specialization of f1
//	   same as "a)"
//void f1(const int& x){
//	cout << "f1(int) - parameter: " << x << endl;
//}



int main()
{
	f1("hello");	// calls f1(const T& x)
	f1(5);			// calls f1<int>(const int& x){
	f1(5.5);		// calls f1(const T& x)








	cout << "" << endl;
	for (int i = 0; i<10; ++i);
	//------------------------END OF MAIN
	cout << "\n\n........" << endl;
	cout << "End" << endl;
}



