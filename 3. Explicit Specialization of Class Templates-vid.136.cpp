
/* xxx

*/

#include <iostream>
#include <string>
#include <vector> 

using namespace std;


// (1) Explicit Specialization of Class Templates
// Source vid:
// Explicit Specialization of Generic Class -136- C++ Generic Programming Video Tutorial - YouTube [720p]

// (a) Class Template
template <typename T>
class goo
{
public:
	goo(){ cout << "template goo" << endl; }
};

// (b) Explicit Specialization of goo
template <>
class goo<int>
{
public:
	goo(){ cout << "template goo<int>" << endl; }
};


int main()
{
	goo<double> g1;		
	goo<int> g2;







	cout << "" << endl;
	for (int i = 0; i<10; ++i);
	//------------------------END OF MAIN
	cout << "\n\n........" << endl;
	cout << "End" << endl;
}



