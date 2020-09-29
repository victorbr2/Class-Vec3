#include "Vec3.h"
#include "math.h"
#include <iostream>

using namespace std;

Vec3 a = Vec3(1, 0, 5);
Vec3 b = Vec3(0, 2, 4);


void main() {

	
	//Vec3 c = a + b;
	Vec3 c = a - b;
	c.Operations();
	a.normalize();
	a.zero();
	a.is_zero();
	int distance_to(Vec3 a1,Vec3 b1);
}


Vec3::~Vec3()
{


}

Vec3 Vec3 ::operator+(const Vec3& vec)
{

	return Vec3(x + vec.x, y + vec.y, z + vec.z);

}

Vec3& Vec3::operator+=(const Vec3& vec)
{
	x -= vec.x;
	y -= vec.y;
	z -= vec.z;
	return *this;
}

Vec3 Vec3 ::operator-(const Vec3& vec)
{

	return Vec3(x - vec.x, y - vec.y, z - vec.z);

}

Vec3 &Vec3::operator-=(const Vec3& vec)
{
	x -= vec.x;
	y -= vec.y;
	z -= vec.z;
	return *this;
}

Vec3& Vec3::operator==(const Vec3& vec)
{
	x == vec.x;
	y == vec.y;
	z == vec.z;
	return *this;
}

Vec3 Vec3::normalize() {
	
	float m = 0;
	
	m = sqrt((x*x) + (y*y) + (z*z));
	
	cout << "(" << x <<"/"<< m << "," << y <<"/"<< m << "," << z <<"/"<< m << ")" << endl;

	return Vec3();
}

Vec3 Vec3::zero() {

	x = 0;
	y = 0;
	z = 0;

	cout << "(" << x << "," << y << "," << z << ")" << endl;

	return Vec3();
}

Vec3 Vec3::is_zero()
{
	if (x = y = z == 0) {

		cout << "Vector is Zero" << endl;
	}
	else cout << "Vector is not Zero" << endl;

	return Vec3();
}


int Vec3::distance_to(Vec3 a1, Vec3 b1)
{
	float dist;
	a = a1;
	b = b1;

	dist = sqrt((a1.x - b1.x) ^ 2 + (a1.y - b1.y) ^ 2 + (a1.z - b1.z) ^ 2);

	cout << dist << endl;

	return dist;
}

void Vec3::Operations()
{
	cout <<"("<< x << "," << y << "," << z <<")"<< endl;
}

