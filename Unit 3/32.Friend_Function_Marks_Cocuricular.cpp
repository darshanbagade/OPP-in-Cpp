/*32. Write a friend function named 'Result' to add private data members 
SUB1, SUB2, SUB3 of class Marks and EXTRA of class Cocurricular. 
Student should be declared as pass if he scores more then 40 marks 
in every subject. Percentage should be calculated using marks of 
both the classes. If student is fail, display the count of subjects in 
which student failed.*/
#include<iostream>
using namespace std;
class Cocurricular;
class Marks 
{
    private:
    int SUB1,SUB2,SUB3;

    public:
    void set_value(int s1,int s2, int s3)
    {
        SUB1=s1;
        SUB2=s2;
        SUB3=s3;
    }

    friend void Result(Marks,Cocurricular);

};

class Cocurricular
{
    private:
    int EXTRA;

    public:

    void set_value(int a)
    {
        EXTRA = a;
    }

    friend void Result(Marks,Cocurricular);

};

void Result(Marks m,Cocurricular c)
{
    int fail_subject=0;
    if(m.SUB1<40)fail_subject++;
    if(m.SUB2<40)fail_subject++;
    if(m.SUB3<40)fail_subject++;

    if(fail_subject>0)
    {
        cout<<"You are fail in "<<fail_subject<<" subjects."<<endl;
    }
    else
    {
        float percentage=((m.SUB1+m.SUB2+m.SUB3+ c.EXTRA)/400.0)*100; // each subject 100 marks;
        cout<<"Percentage is "<<percentage<<" % .";
    }
}
int main()
{
    Marks m;
    m.set_value(45,44,57);
    Cocurricular c;
    c.set_value(93);
    Result(m,c);
}