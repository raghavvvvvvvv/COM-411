#include <iostream>
#include<string>
using namespace std;

class course
{
    string cname;
    string code;
    int credits;
    int duration;

public:
    course(string cn, string c, int cr, int du)
    {
        cname = cn;
        code = c;
        credits = cr;
        duration = du;
    }

    void data(){
        cout<<"Enter the Course Name: ";
        cin>>cname;
        cout<<"Enter the Course Code: ";
        cin>>code;
        cout<<"Enter the Credits for this course: ";
        cin>>credits;
        cout<<"Enter the Duration of the course: ";
        cin>>duration;
        cout<<endl;
    }

    void update(int field){
    switch(field){
        case 1:
            cout<<"Enter the new Course Name: ";
            cin>>cname;
            break;
        case 2:
            cout<<"Enter the new Course Code: ";
            cin>>code;
            break;
        case 3:
            cout<<"Enter the new Credits for this course: ";
            cin>>credits;
            break;
        case 4:
            cout<<"Enter the new Duration of the course: ";
            cin>>duration;
            break;
        default:
            cout<<"Invalid key pressed!"<<endl;
            break;
    }
    cout<<endl;
}


    void display(){
        cout<<"Course Name is: "<<cname<<endl;
        cout<<"Course Code is: "<<code<<endl;
        cout<<"Course Credits is: "<<credits<<endl;
        cout<<"Course Duration is: "<<duration<<"hrs"<<endl;
        cout<<endl;
    }
};
int main()
{
    string cn , c;
    int cr , du;
    course c1(cn, c, cr, du);
    while(1){
        int n, field;
        cout<<"Choose any key to perform operation: "<<endl;
        cout<<"Press 1 to insert the data of course"<<endl;
        cout<<"Press 2 to update the data of course"<<endl;
        cout<<"Press 3 to display the data of course"<<endl;
        cout<<"Press 4 to exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>n;
        cout<<endl;
        switch (n)
        {
        case 1:
            c1.data();
            break;

        case 2:
            cout<<"Press 1 for new Course Name"<<endl;
            cout<<"Press 2 for new Course Code"<<endl;
            cout<<"Press 3 for new Course Credits"<<endl;
            cout<<"Press 4 for new Course Duration"<<endl;
            cout<<"Enter what to update: ";
            cin>>field;
            c1.update(field);
            break;

        case 3:
            c1.display();
            break;

        case 4:
            exit(1);
            break;
        default:
            cout<<"Invalid Key pressed!"<<endl;
            break;
        }
    }
    return 0;
}