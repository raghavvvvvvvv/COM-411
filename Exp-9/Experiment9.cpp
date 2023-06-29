#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class course
{
private:
string course_name;
int course_id,course_code;
public:
void create();
void output();
void update();
void search();
void del();
void display();
};
void course :: create()
{
    ofstream f;
    f.open("abc.dat");
    cout<<"Enter the name of the course : "<<endl;
    cin>>course_name;
    cout<<"Enter the id of the course  : "<<endl;
    cin>>course_id;
    cout<<"Enter the code of the course : "<<endl;
    cin>>course_code;
    f<<course_name<<course_id<<course_code;
      f.close();
}
void course :: output()
{
    ofstream f;
    f.open("abc.dat");
    cout<<" Name of the course : "<<course_name<<endl;
    cout<<"ID of the course : "<<course_id<<endl;
    cout<<" Code of the course : "<<course_code<<endl;
    f<<course_name<<course_id<<course_code;
      f.close();
}
void course :: update()
{
    ofstream f;
    f.open("abc.dat");
    cout<<"---------Update info----------"<<endl;
 cout<<"Enter the name of the course"<<endl;
 cin>>course_name;
 cout<<"Enter the Id of the course"<<endl;
cin>>course_id;
cout<<"Enter the code of the course"<<endl;
cin>>course_code;
f<<course_name<<course_id<<course_code;
      f.close();
}
void course :: search()
{
    ofstream f;
    f.open("abc.dat");
    if (this ->course_id == course_id)
    {
       cout<<"Course Name : "<<course_name<<endl;
       cout<<"Course id :  "<<course_id<<endl;
       cout<<"Course Code : "<<course_code <<endl;
       f<<course_name<<course_id<<course_code;
      f.close();
    }
    
}
void course :: del()
{
    ofstream f;
    f.open("abc.dat");
    string *p;
    int *q,*r;
    p=&course_name;
    q=&course_id;
    r=&course_code;
    p=new string;
    q=new int;
    r=new int;
    delete p;
    delete q;
    delete r;
    f<<course_name<<course_id<<course_code;
      f.close();
}
void course :: display()
{ 
    ofstream f;
    f.open("abc.dat");
    cout<<" Name of the course : "<<course_name<<endl;
        cout<<" ID of the course : "<<course_id<<endl;
        cout<<" Code of the course : "<<course_code<<endl;
         f<<course_name<<course_id<<course_code;
      f.close();
}

int main()
{
    int choice,n;
    cout<<"Enter the number of course you want to enter"<<endl;
cin>>n;
 course c[n];
    while(1)
    {
    cout<<"Enter your choice"<<endl;
    cout<<"1.Input "<<"\t"<<"2.Output"<<"\t"<<"3.Update"<<"\t"<<"4.Search"<<"\t"<<"5.Delete"<<"\t"<<"6.Edit"<<"\t"<<endl;
    cin>>choice;
    {
    switch (choice)
    {
    case 1: for (int i = 0; i < n; i++)
    {
        c[i].create();

    }
    break;
    case 2: for (int i = 0; i < n; i++)
    {
        c[i].output();
    }
    break;
    case 3: for (int i = 0; i < n; i++)
    {
        c[i].update();
    }
    break;
    case 4: for (int i = 0; i < n; i++)
    {
        c[i].search();
    }
    break;
    case 5: for (int  i = 0; i < n; i++)
    {
        c[i].del();
    }
    break;
    case 6: for (int  i = 0; i < n; i++)
    {
        c[i].display();
    }
    break;
    default : cout<<"Wrong choice"<<endl; 
     break;
    }
    }
}
return 0;
}

