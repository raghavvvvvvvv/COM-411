#include<iostream>
#include<string>
using namespace std;

class student
{
   private:
   string name;
   string branch;
   string department;
   string results;
   int p;


   public:
   int roll_no;
   void takedata()
   {
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the roll_no:";
    cin>>roll_no;
    cout<<"Enter the branch:";
    cin>>branch;
    cout<<"Enter the department:";
    cin>>department;
    cout<<"Enter the results:";
    cin>>results;

   }
    int search()
    {
        cout<<"Enter the roll_no u want to search:";
        cin>>p;
        return p;
    }

   void display()
   {
    cout<<"_______DISPLAYING YOUR DETAILS_________"<<endl;
    cout<<"name is:"<<name<<endl;
    cout<<"roll_no is:"<<roll_no<<endl;
    cout<<"branch is:"<<branch<<endl;
    cout<<"department is:"<<department<<endl;
    cout<<"results are :"<<results<<endl;
   }
};

int main()
{
    int roll_no;
    int p;
    student n;
    n.takedata();
    n.display();
    p = n.search();

    if(n.roll_no==p)
    {
        cout<<"Details are:"<<endl;
        n.display();
    }
  else {

        cout<<"------invalid information-------";
     }

   return 0;

}