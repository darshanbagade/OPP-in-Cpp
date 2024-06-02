/*Apply the concept of passing the object to calculate the average 
marks of two students.*/
#include<iostream>
using namespace std;
class Avg
{

    public:
    float avg_marks;
    void set_value(int x)
    {
        avg_marks=x;
    }

    void marks(Avg e1 ,Avg e2)
    {
        avg_marks = e1.avg_marks + e2.avg_marks;
    }
    void display(Avg a1,Avg a2)
    {
        cout<<"Marks of student 1 :"<<a1.avg_marks<<endl;
        cout<<"Marks of student 2 :"<<a2.avg_marks<<endl;
        cout<<"Average marks : "<<avg_marks<<endl;
    }
};
int main()
{
    Avg A,m1,m2;
    m1.set_value(85);
    m2.set_value(95);
    A.marks(m1,m2);
    A.display(m1,m2);
}