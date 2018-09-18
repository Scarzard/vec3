#ifndef _VEC3_H
#define _VEC3_H

#include <cmath>

template <class T>

class vec3
{
public:

	T x, y, z;

	//CONSTRUCTORS->WORKS
	vec3() 
	{
		x = 0;
		y = 0;
		z = 0;
	}

	vec3(const T& X, const T& Y, const T& Z) {
		x = X;
		y = Y;
		z = Z;
	}
	vec3(const vec3& auxVec) 
	{
		x = auxVec.x;
		y = auxVec.y;
		z = auxVec.z;
	}
	//DESTRUCTOR
	~vec3() {}

	//OPERATOR+->WORKS

	vec3 operator+ (const vec3& newVec) const
	{
		vec3 resVec;
		resVec.x = x + newVec.x;
		resVec.y = y + newVec.y;
		resVec.z = z + newVec.z;
		return resVec;
	}

	//OPERATOR-->WORKS
	vec3 operator- (const vec3& newVec) const
	{
		vec3 resVec;
		resVec.x = x - newVec.x;
		resVec.y = y - newVec.y;
		resVec.z = z - newVec.z;
		return resVec;
	}

	//OPERATOR+=->WORKS
	vec3 operator+= (const vec3& newVec) const
	{
		vec3 resVec;
		resVec.x += x + newVec.x;
		resVec.y += y + newVec.y;
		resVec.z += z + newVec.z;
		return resVec;
	}

	//OPERATOR-=->WORKS
	vec3 operator-= (const vec3& newVec) const
	{
		vec3 resVec;
		resVec.x -= x - newVec.x;
		resVec.y -= y - newVec.y;
		resVec.z -= z - newVec.z;
		return resVec;
	}

	//OPERATOR==->WORKS
	bool operator==(const vec3& newVec) const
	{
		return (x == newVec.x && y == newVec.y && z == newVec.z);
	}

	//METHOD NORMALIZE->WORKS
	vec3 normazile() 
	{
		vec3 auxVec;

		T vectorModule = sqrtf(x*x + y*y + z*z);
		auxVec.x = x / vectorModule;
		auxVec.y = y / vectorModule;
		auxVec.z = z / vectorModule;

		return auxVec;
	}
	//METHOD ZERO->WORKS
	void zero()
	{
		x = 0u;
		y = 0u;
		z = 0u;
	}

	//METHOD ISZERO->WORKS
	bool isZero(const vec3 &newVec) const
	{
		bool ret = false;
		vec3 resVec;
		if (resVec.x == 0 && resVec.z == 0 && resVec.z == 0) ret = true;
		return ret;
	}
	//METHOD DISTANCETO d= v/(x-x2)^2+(y-y2)^2+(z-z2)^2
	float distanceTo(vec3 &newVec) 
	{
		float distance = 0;
		distance = sqrt(pow(x - newVec.x, 2) + pow(y - newVec.y, 2) + pow(z - newVec.z, 2));
		return distance;
	}
	
	//PRINTING METHOD->WORKS
	void const printVec()
	{
		cout << "x = " << x << " " << "y = " << y << " " << "z = " << z << endl;
	}

};



#endif 