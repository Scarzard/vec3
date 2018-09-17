#ifndef _VEC3_H
#define _VEC3_H\

template <class T>

class vec3
{
private:
	T x, y, z;

public:
	//CONSTRUCTORS
	vec3() {
		x = 0;
		y = 0;
		z = 0;
	}
	vec3(T X, T Y, T Z) {
		X = x;
		Y = y;
		Z = z;
	}
	vec3(const vec3 &auxVec) 
	{
		x = auxVec.x;
		y = auxVec.y;
		z = auxVec.z;
	}
	//DESTRUCTOR
	~vec3() {}

	//OPERATOR+

	vec3 operator+ (const vec3 &newVec)
	{
		vec3 resVec;
		resVec.x = x + newVec.x;
		resVec.y = y + newVec.y;
		resVec.z = z + newVec.z;
		return resVec;
	}

	//OPERATOR-
	vec3 operator- (const vec3 &newVec)
	{
		vec3 resVec;
		resVec.x = x - newVec.x;
		resVec.y = y - newVec.y;
		resVec.z = z - newVec.z;
		return resVec;
	}

	//OPERATOR+=
	vec3 operator+= (const vec3)
	{
		vec3 resVec;
		resVec.x += resVec.x;
		resVec.y += resVec.y; 
		resVec.z += resVec.z;
		return resVec;
	}

	//OPERATOR-=
	vec3 operator+= (const vec3)
	{
		vec3 resVec;
		resVec.x -= resVec.x;
		resVec.y -= resVec.y;
		resVec.z -= resVec.z;
		return resVec;
	}

	//OPERATOR==
	bool operator==(const vec3 &newVec)
	{
		vec3 resVec;
		bool ret = false;
		if (resVec.x == newVec.x && resVec.y == newVec.y && resVec.z == newVec.z) ret = true;
		return ret;
	}

	//METHOD NORMALIZE
	void normazile()
	{

	}
	//METHOD ZERO

};



#endif 