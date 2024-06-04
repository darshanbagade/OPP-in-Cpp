#include<iostream>
using namespace std;
class Unary
{
    int x,y,z;

    public:

    //to take the values
    Unary(int x=0,int y=0 , int z=0)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }

    //Operator overloading
    void operator-();
    void display();
};

void Unary :: display()
{
    cout<<x<<" "<<y<<" "<<z<<endl;
}
void Unary :: operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    Unary u(-2,5,-9);
    u.display();
    -u;
    u.display();

}
