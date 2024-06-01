/* 27. Write a C++ program to calculate average marks of two students. 
Display the average using suitable method.*/
#include<iostream>
using namespace std;
class Avg
{
   private:
    int m1,m2;
   public:
    void get_marks()
    {
        cout<<"Enter the marks of student-2 : "<<m2<<endl;
        cout<<"Enter the marks of student-1 : "<<m1<<endl;
    }
    void average()
    {
        cout<<"Average marks are "<<(float)((m1+m2)/2);
    }
};
int main()
{
    Avg a;
    a.get_marks();
    a.average();
    return 0;
}

