#ifndef Vector3D_H
#define Vector3D_H

#include <iostream>

class Vector3D
{
private:
    float x;
    float y;
    float z;

public:
    Vector3D();
    Vector3D(float t_x, float t_y, float t_z);
    Vector3D(Vector3D*other);
    ~Vector3D();
};

#endif // Vector3D_H
