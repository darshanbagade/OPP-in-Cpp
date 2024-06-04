/*35. Write a program in C++ to obtain the sum of two distances given in 
feet and inch. Overload the operator ‘+’ for obtaining the sum, use 
constructor for storing the data.*/
#include<iostream>
using namespace std;
class Distance
{
    int feets;
    int inches;

    public:
    Distance(int a=0,int b=0)
    {
        feets=a;
        inches=b;
    }

    Distance operator+(Distance c);

    void display()
    {
        cout<<feets<<"'"<<inches<<endl;
    }
};

Distance Distance::operator+(Distance c)
{
    Distance temp;
    temp.feets = feets + c.feets;
    temp.inches = inches + c.inches;
    if(temp.inches>=12)
    {
        temp.feets++;
        temp.inches-=12;
    }
    return temp;
}

int main()
{
    Distance c1(4,9);
    Distance c2(9,9);
    Distance c3;
    c3=c1+c2;

    c1.display();
    c2.display();
    c3.display();

    
}