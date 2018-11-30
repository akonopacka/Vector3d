#include "vector3d.h"
Vector3D::Vector3D()
    :x(0), y(0), z(0)
{}

Vector3D::Vector3D(float t_x, float t_y, float t_z)
    :x(t_x), y(t_y), z(t_z)
{}

Vector3D::Vector3D(Vector3D* other){
    x=other->x;
    y=other->y;
    z=other->z;
}

Vector3D::~Vector3D(){
}
