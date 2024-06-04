/*37. Apply the concept of inheritance to the following scenario: 
Create a class Calculation having addition () and subtraction() 
methods. Inherit this class in another class MyCalculation having 
multiplication() method. Access all the methods using derived class 
object.*/
#include<iostream>
using namespace std;
class Calculation
{
    public:
    int x,y;

    void set_value(int a,int b)
    {
        x=a;
        y=b;
    }

    void add()
    {
        int ans=x+y;
        cout<<"Adstion is "<<ans<<endl;
    }

    void sub()
    {
        cout<<"Subtraction is "<<x-y<<endl;
    }

};

class MyCalculation : public Calculation
{
    public:
    void Multiplication()
    {
        int ans=x*y;
        cout<<"Multiplication of "<<x<<" x "<<y<<" = "<<ans<<endl;
    }
};


int main()
{
    MyCalculation m;
    m.set_value(10,5);
    m.Multiplication();
    m.add();
    m.sub();
}