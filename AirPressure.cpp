#include<iostream>

using namespace std;

class AirResistance{
private:
    double Force,Velocity,velocity,Constant,A;
    float density=1.225;

public:

    void velocty()
    {

        cout<<"Enter Velocity of objects "<<endl;
        cin>>velocity;

        Velocity=velocity*velocity;
    }
    void getData()
    {


        cout<<"Enter Objects Constant "<<endl;
        cin>>Constant;

        cout<<"Enter Area "<<endl;
        cin>>A;
    }

    void dragForce()
    {
        Force=(0.5)*(1.225)*Velocity*Constant*A;
    }
    void print()
    {
        cout<<"The Air Force is "<<Force<<endl;
    }
};
int main()
{
    AirResistance F;
    F.velocty();
    F.getData();
    F.dragForce();
    F.print();
    return 0;
}
