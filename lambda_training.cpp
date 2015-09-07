



/* xxx

*/

#include <iostream>
#include <string>
#include <vector> 
#include <algorithm> 

using namespace std;




int main()
{
	
	vector<int> v = {1,3,5,10,11,20};
	int val = 5;

	// (1) val is capture local variable (capture-by-value)
	auto x = count_if(v.begin(), v.end(),
					  [val](int elem){return !(elem % val); });
	cout << x << endl;


	// (1-a) default by-value capture 
	// "=" means capture local variable if you cannot recognize inside lambda
	auto x2 = count_if(v.begin(), v.end(),
					   [=](int elem){return !(elem % val); });
	cout << x2 << endl;

	// (2) Capture-by-reference
	int sum = 0;
	for_each(v.begin(), v.end(), [&sum](int elem){sum += elem; });
	//for_each(v.begin(), v.end(), [&](int elem){sum += elem; });	// same as above
	cout << sum << endl;


	// (3) Return type and more than one line lambda
	int c = count_if(v.begin(), v.end(),
					[](int elem) /*-> bool*/	// here return type could be used
					{
						bool isOdd = elem%2;
						cout << elem << (isOdd ? " is odd." : " is even.") << endl;
						return isOdd;
					;});
	cout << "# of odd integers: " << c << endl;
	






	cout << "" << endl;
	for (int i = 0; i<10; ++i){}
	//vector<int> v = { 1,2,3 };
	//unique_ptr<Base> p = make_unique<Der>();
	//for (auto x : arr) cout << x << " ";

	//------------------------END OF MAIN
	cout << "\n\n........" << endl;
	cout << "End" << endl;
}



