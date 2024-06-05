/*43. Apply the concept of run time polymorphism to following scenario:
Consider a book shop which sells both books and video tapes. 
Create a class media that stores the title and the price of 
publication. Create two derived classes one for storing the number 
of pages in the book and another for storing the playing time of the 
tape. A function display() is used in all the classes to display the 
class contents*/


#include<iostream>
using namespace std;

class Media
{
    protected :
    string tittle;
    int price;
    public:
    virtual void display()=0;

};
class Book: public Media
{
    private:
    int book_pages;
    public:
    Book(string t,int p,int b)
    {
        tittle=t;
        price=p;
        book_pages=b;
    }
    void display()
    {
        cout<<"For book"<<endl;
        cout<<"Tittle : "<<tittle<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"No. of pages :"<<book_pages<<endl;
    }
};

class Video : public Media
{
    int play_time;//in min
    public:
    Video(string t,int p,int b)
    {
        tittle=t;
        price=p;
        play_time=b;
    }
    void display()
    {
        cout<<"For video"<<endl;
        cout<<"Tittle : "<<tittle<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"No. of pages :"<<play_time<<endl;
    }
};
int main()
{
    Media *ptr;
    Book b("The Secret",200,300);
    Video v("Silence",300,35);
    ptr=&b;
    ptr->display();
    cout<<"------------------"<<endl;
    ptr=&v;
    ptr->display();
}