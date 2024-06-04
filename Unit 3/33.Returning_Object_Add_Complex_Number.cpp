/*33. Apply the concept of returning an object through function:
Write a program to add two complex numbers A & B to produce 
third complex number C and display all the three numbers.*/

#include<iostream>
using namespace std;
class Complex
{
    public:
    int real;
    int imag;

    Complex(int x=0,int y=0)
    {
        real=x;
        imag=y;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

};
int main()
{

    Complex c1(5,6);
    Complex c2(4,2);
    Complex c3;
    c3= c1.add(c2);
    cout<<"Num1 : "<<c1.real<<"+ i"<<c1.imag<<endl;
    cout<<"Num1 : "<<c2.real<<"+ i"<<c2.imag<<endl;
    cout<<"Addition: "<<c3.real<<"+ i"<<c3.imag<<endl;
}