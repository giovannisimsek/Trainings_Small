
/* xxx

*/

#include <iostream>
#include <string>


using namespace std;



template <typename T = int>
void ff(){
	T x;
	cout << typeid(x).name() << endl;
}


int main()
{
	ff<>();			// T is int - uses default
	ff();			// ditto
	ff<double>();	// T is double
	





	cout << "" << endl;
	for (int i = 0; i<10; ++i){}
	//vector<int> v = { 1,2,3 };
	//unique_ptr<Base> p = make_unique<Der>();
	//for (auto x : arr) cout << x << " ";

	//------------------------END OF MAIN
	cout << "\n\n........" << endl;
	cout << "End" << endl;
}



