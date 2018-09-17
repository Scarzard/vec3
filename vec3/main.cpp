#include <iostream>
#include "vec3.h"

using namespace std;

int main()
{
	vec3<float> testVec1;
	vec3<float> testVec2(1, 2, 3);
	vec3<float> testVec3(testVec1);

	testVec1.printVec();
	testVec2.printVec();
	testVec3.printVec();
	system("PAUSE");
	return 0;
}