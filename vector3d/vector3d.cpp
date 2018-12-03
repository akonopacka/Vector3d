#include "vector3d.h"

Vector3D::Vector3D()
    :x(1), y(1), z(1)
{}

Vector3D::Vector3D(float t_x, float t_y, float t_z)
    :x(t_x), y(t_y), z(t_z)
{
    if(getLength()<=0)
        throw std::runtime_error("Null Vector");
}

Vector3D::Vector3D(Vector3D* other){
    x=other->x;
    y=other->y;
    z=other->z;
}

Vector3D::~Vector3D(){
}

float Vector3D::getX(){
    return x;
}

float Vector3D::getY(){
    return y;
}

float Vector3D::getZ(){
    return z;
}

void Vector3D::setX(const float t_x){
    x = t_x;
}

void Vector3D::setY(const float t_y){
    y = t_y;
}

void Vector3D::setZ(const float t_z){
    z = t_z;
}

Vector3D Vector3D::operator+(Vector3D other){
    Vector3D result(x+other.getX(),
                    y+other.getY(),
                    z+other.getZ());
    return result;
}

Vector3D Vector3D::operator-(Vector3D other){
    Vector3D result(x-other.getX(),
                    y-other.getY(),
                    z-other.getZ());
    return result;
}

std::string Vector3D::print(){
    std::string coordinates = "("+std::to_string(x)+","+std::to_string(y)+","+std::to_string(z)+")";
    return coordinates;
}

float Vector3D::dotProduct(Vector3D other){
    return x*other.getX() + y*other.getY() + z*other.getZ();
}

Vector3D Vector3D::crossProduct(Vector3D other){
    Vector3D result (y*other.getZ() - z*other.getY(),
                     z*other.getX() - x*other.getZ(),
                     x*other.getY() - y*other.getX());
    return result;
}

float Vector3D::getLength(){
    return sqrt(x*x+y*y+z*z);
}
