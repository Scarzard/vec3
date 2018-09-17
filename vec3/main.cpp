#include <iostream>
#include "vec3.h"

using namespace std;

int main()
{
	//CONTRUCTOR TESTS
	vec3<float> testVec1;
	vec3<float> testVec2(1, 2, 3);
	vec3<float> testVec3(testVec2);
	vec3<float> testVec4(7, 17, 23);

	//PRINTING TESTS
	cout << "Constructor and printing tests" << endl;
	testVec1.printVec();
	testVec2.printVec();
	testVec3.printVec();
	testVec4.printVec();

	//OPERATOR TESTS
	cout << "Operator tests" << endl;
	vec3<float> testVec5;
	testVec5 = (testVec2 + testVec4);
	testVec5.printVec();
	vec3<float> testVec6;
	testVec6 = (testVec4 - testVec2);
	testVec6.printVec();
	vec3<float> testVec7;
	testVec7 = testVec2.operator+=(testVec2);

	//METHOD TESTS
	cout << "Method tests" << endl;
	if (testVec1.isZero(testVec1) == true)
	{
		cout << "All the vector coordinates are 0" << endl;
	}
	else cout << "All the vector coordinates are != 0" << endl;


	testVec2.zero();
	testVec2.printVec();

	/*testVec2.normazile();
	testVec2.printVec();*/

	system("PAUSE");
	return 0;
}