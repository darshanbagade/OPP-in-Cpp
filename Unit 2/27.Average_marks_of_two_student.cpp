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
        cout<<"Enter the marks of student-1 : "<<endl;
        cin>>m1;
        cout<<"Enter the marks of student-2 : "<<endl;
        cin>>m2;

    }
    void average()
    {
        float avg_marks=(m1+m2)/2.0;
        cout<<"\nAverage marks are "<<avg_marks;
    }
};
int main()
{
    Avg a;
    a.get_marks();
    a.average();
    return 0;
}

