#ifndef _VEC3_H_
#define _VEC3_H_

class Vec3
{
public: 
	int x, y, z;

	Vec3() { x = y = z = 0; };
	Vec3(int xV, int yV, int zV) {

		x = xV;
		y = yV;
		z = zV;

	};

	Vec3(const Vec3& vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;
	};

	~Vec3();

	Vec3 operator+(const Vec3& vec);
	Vec3 operator-(const Vec3& vec);
	Vec3 &operator+=(const Vec3& vec);
	Vec3 &operator-=(const Vec3& vec);
	Vec3 operator=(const Vec3& vec);
	Vec3 &operator==(const Vec3& vec);

	Vec3 normalize();
	Vec3 zero();
	Vec3 is_zero();
	int distance_to(Vec3 a1, Vec3 b1);

	void Operations();

};









#endif
