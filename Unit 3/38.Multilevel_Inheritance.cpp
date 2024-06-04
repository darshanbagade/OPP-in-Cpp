/*38. Assume that test results of a batch of students are stored in three 
different classes. Class student stores the roll-number, class test 
stores the marks obtained in two subjects and class result contains 
the total marks obtained in the test. The class result can inherit the 
details of marks obtained in the test and the roll-number of 
students through multilevel inheritance. Write a program in C++ for 
above assumption*/
#include<iostream>
using namespace std;
class Student
{
    public:
    int roll_no;
};
class Marks: public Student
{
    public:
    int sub1,sub2;
    void set_marks(int a,int b)
    {
        sub1=a;
        sub2=b;

    }
};
class Result:public Marks
{

    public:
    int total;
    void display()
    {
    total=sub1+sub2;
        cout<<"Roll no : "<<roll_no<<endl;
        cout<<"Sub-1: "<<sub1<<endl<<"Sub-2: "<<sub2<<endl;
        cout<<"Total Marks : "<<total<<endl;
    }
};
int main()
{
    Result r;
    r.roll_no=35;
    r.set_marks(95,99);
    r.display();
    return 0;
}
