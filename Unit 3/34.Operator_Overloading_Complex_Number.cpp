/*34. Apply the concept of operator overloading:
Write a program to add two complex numbers A & B to produce 
third complex number C and display all the three numbers*/
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

    Complex operator+(Complex C)
    {
        Complex k;
        k.real=real+ C.real;
        k.imag=imag + C.imag;
        return k;
    }
    void display()
    {
        cout<<real<<" + "<<imag<<" i"<<endl;
    }
};
int main()
{
    Complex c1(3,4);
    Complex c2(2,4);
    Complex c3;
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();


}
