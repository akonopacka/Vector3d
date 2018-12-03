#include <iostream>
#include "vector3d.h"

using namespace std;

int main(int argc, char *argv[])
{
    try{
        Vector3D A = Vector3D(1.5,3.2,4.6);
        Vector3D B = Vector3D(2.1,4.6,7.9);
        Vector3D resultOfAddition = A + B;
        Vector3D resultOfSubtraction = A - B;
        float resultOfDotProduct = A.dotProduct(B);
        Vector3D resultOfCrossProduct = A.crossProduct(B);
        std::cout<<"Vector A:"<<A.print()<<endl;
        std::cout<<"Vector B:"<<B.print()<<endl;
        std::cout<<"A + B = "<<resultOfAddition.print()<<endl;
        std::cout<<"A - B = "<<resultOfSubtraction.print()<<endl;
        std::cout<<"A · B = "<<resultOfDotProduct<<endl;
        std::cout<<"A x B = "<<resultOfCrossProduct.print()<<endl;
    }
    catch (std::exception &e){
        std::cerr<<e.what()<<endl;
    }
}
