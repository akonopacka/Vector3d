#ifndef VECTOR3D_H
#define VECTOR3D_H

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
    float getX();
    float getY();
    float getZ();
    void setX(const float t_x);
    void setY(const float t_y);
    void setZ(const float t_z);
    Vector3D operator+(Vector3D other);
    Vector3D operator-(Vector3D other);
    std::string print();

};

#endif // VECTOR3D_H
