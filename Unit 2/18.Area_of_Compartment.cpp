/*18. In a super mart, an owner wanted to calculate the area of the each 
compartments
which are in rectangular, cylindrical and square shape. Develop a 
C++ program to
implement this scenario.*/

#include<iostream>
using namespace std;
class Shape
{
    public:

    //for circle
    void area(float r,int h)
    {
        cout<<"Area of the Cylinder is "<<(float)(2*3.14*h*r)<<endl;
    }   
    
    //for square
    void area(int s)
    {
        cout<<"Area of the Square is "<<s*s<<endl;
    }    
    
    //for rectangle
    void area(int a,int b)
    {
        cout<<"Area of the Rectangle is "<<a*b<<endl;
    }
};
int main()
{
    Shape s;

    // calling circle
    s.area(2.5f,2);

    //calling square
    s.area(5); 

    //calling rectanlge
    s.area(3,5); 
    
    return 0;
}