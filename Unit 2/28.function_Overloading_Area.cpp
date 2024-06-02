/*28. Apply the concept of function overloading to find area of circle, 
square and rectangle. Display the area using suitable method*/
#include<iostream>
using namespace std;
class Shape
{
    public:

    //for circle
    void area(float r)
    {
        cout<<"Area of the circle is "<<(float)(3.14*r*r)<<endl;
    }   
    
    //for square
    void area(int s)
    {
        cout<<"Area of the circle is "<<s*s<<endl;
    }    
    
    //for rectangle
    void area(int a,int b)
    {
        cout<<"Area of the circle is "<<a*b<<endl;
    }
};
int main()
{
    Shape s;

    // calling circle
    s.area(2.5f);

    //calling square
    s.area(5); 

    //calling rectanlge
    s.area(3,5); 
    
    return 0;
}