/*19. Apply the concept of constructor to the following scenario:
Write a class for Car having properties model_year and 
model_name. Initialize one object of Car by using constructor with 
the default value. Initialize the second object by passing values to 
the parameterized constructor. Print both the objects using 
appropriate method.*/


#include<iostream>
using namespace std;
class Car 
{
    int model_year;
    string model_name;
    public:

    //Default constructor
     Car()
     {
        model_year=2015;
        model_name="Suzuki";
     }

    //Parameterized constructor
    Car(int year, string name)
    {
        model_year=year;
        model_name=name;
    }

    //to print the model name & model year
    void Display()
    {
        cout<<"Model name : " <<model_name<<endl;
        cout<<"Model year : " <<model_year<<endl;
    }


};

int main()
{
    //default constructor called
    Car c1; 
    c1.Display();
    
    //Parameterized constructor called
    Car c2(2024,"Honda city");
    c2.Display();

    return 0;

}