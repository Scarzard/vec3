#ifndef _VEC3_H
#define _VEC3_H\

#include <cmath>

template <class T>

class vec3
{
private:
	T x, y, z;

public:
	//CONSTRUCTORS->WORKS
	vec3() {
		x = 0;
		y = 0;
		z = 0;
	}
	vec3(T X, T Y, T Z) {
		x = X;
		y = Y;
		z = Z;
	}
	vec3(const vec3 &auxVec) 
	{
		x = auxVec.x;
		y = auxVec.y;
		z = auxVec.z;
	}
	//DESTRUCTOR
	~vec3() {}

	//OPERATOR+->WORKS

	vec3 operator+ (const vec3 &newVec)
	{
		vec3 resVec;
		resVec.x = x + newVec.x;
		resVec.y = y + newVec.y;
		resVec.z = z + newVec.z;
		return resVec;
	}

	//OPERATOR-->WORKS
	vec3 operator- (const vec3 &newVec)
	{
		vec3 resVec;
		resVec.x = x - newVec.x;
		resVec.y = y - newVec.y;
		resVec.z = z - newVec.z;
		return resVec;
	}

	//OPERATOR+=->WORKS
	vec3 operator+= (const vec3 &newVec)
	{
		vec3 resVec;
		resVec.x += x + newVec.x;
		resVec.y += y + newVec.y;
		resVec.z += z + newVec.z;
		return resVec;
	}

	//OPERATOR-=->WORKS
	vec3 operator-= (const vec3 &newVec)
	{
		vec3 resVec;
		resVec.x -= x - newVec.x;
		resVec.y -= y - newVec.y;
		resVec.z -= z - newVec.z;
		return resVec;
	}

	//OPERATOR==->WORKS
	bool operator==(const vec3 &newVec)
	{
		bool ret = false;
		if (x == newVec.x && y == newVec.y && z == newVec.z) ret = true;
		return ret;
	}

	//METHOD NORMALIZE->WORKS
	void normazile()
	{
		T vectorModule = sqrt(x*x + y*y + z*z);
		x = x / vectorModule;
		z = z / vectorModule;
		y = y / vectorModule;
	}
	//METHOD ZERO->WORKS
	void zero() 
	{
		x = 0;
		y = 0;
		z = 0;
	}
	//METHOD ISZERO->WORKS
	bool isZero(const vec3 &newVec)
	{
		bool ret = false;
		vec3 resVec;
		if (resVec.x == 0 && resVec.z == 0 && resVec.z == 0) ret = true;
		return ret;
	}
	//METHOD DISTANCETO
	void distanceTo()
	{

	}
	
	//PRINTING METHOD->WORKS
	void const printVec()
	{
		cout << "x = " << x << " " << "y = " << y << " " << "z = " << z << endl;
	}

};



#endif 