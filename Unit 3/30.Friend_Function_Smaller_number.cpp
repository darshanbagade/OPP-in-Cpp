/*30. Write a program in C++ to find the smaller number from two 
numbers using friendly function. (Use two classes and one friend 
function which can access the private members of both the classes.*/

#include<iostream>
using namespace std;
class Num2;
class Num1 
{
    private:
    int number1;
    public:
    void set_value(int x)
    {
        number1=x;
    }

    friend void compare_num(Num1,Num2);
};
class Num2 
{
    private :
    int number2;
    
    public:
    void set_value(int y)
    {
        number2=y;
    }

    friend void compare_num(Num1,Num2);

};
void compare_num(Num1 a,Num2 b)
{
    if(a.number1<b.number2)
    {
        cout<<a.number1<<" is smaller than "<<b.number2<<endl;
    }
    else
    {
        cout<<a.number1<<" is not smaller than "<<b.number2<<endl;
    }
}
int main()
{
    Num1 n;
    n.set_value(25);
    Num2 m;
    m.set_value(10);
    compare_num(n,m);
    return 0;

}