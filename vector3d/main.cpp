#include <iostream>
#include "vector3d.h"

using namespace std;

int main(int argc, char *argv[])
{

    Vector3D A = Vector3D(1.5,3.2,4.6);
    Vector3D B = Vector3D(2.1,4.6,7.9);
    std::cout<<"Vector A:"<<A.print()<<endl;
    std::cout<<"Vector B:"<<B.print()<<endl;

    try{

        Vector3D resultOfAddition = A + B;
        std::cout<<"A + B = "<<resultOfAddition.print()<<endl;
    }
    catch (std::exception &e){
        std::cerr<<"A + B = "<<e.what()<<endl;
    }

    try{
        Vector3D resultOfSubtraction = A - B;
        std::cout<<"A - B = "<<resultOfSubtraction.print()<<endl;

    }
    catch (std::exception &e){
        std::cerr<<"A - B = "<<e.what()<<endl;
    }

    float resultOfDotProduct = A.dotProduct(B);
    std::cout<<"A · B = "<<resultOfDotProduct<<endl;

    try{
        Vector3D resultOfCrossProduct = A.crossProduct(B);
        std::cout<<"A x B = "<<resultOfCrossProduct.print()<<endl;
    }
    catch (std::exception &e){
        std::cerr<<"A x B = "<<e.what()<<endl;
    }

}
