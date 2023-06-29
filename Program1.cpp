#include <iostream>
using namespace std;
#include <string>
struct student
{
char name[20];
int dob;
int rollno;
char branch[20];
float marks;
};
int main()
{
    int n;
    cout << "Enter the number of student: ";
    cin >> n;
    student s[n];
    for(int i=0;i < n; i++)
    {
        cout <<"Enter the details of student "<<i+1<<":"<<endl;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "DOB: ";
        cin >> s[i].dob;
        cout << "Rollno: ";
        cin >> s[i].rollno;
        cout << "Branch: ";
        cin >> s[i].branch;
        cout << "Marks:";
        cin >>s[i].marks;
        cout<<"\n";
    }
        for (int i=0; i<n; i++)
        {
            cout<<"Student "<<i+1<<":"<<endl;
            cout<<"Name:"<<s[i].name<<endl;
            cout<<"DOB:"<<s[i].dob<<endl;
            cout<<"Rollno:"<<s[i].rollno<<endl;
            cout<<"Branch:"<<s[i].branch<<endl;
            cout<<"Marks:"<<s[i].marks<<endl;
            cout<<"\n";
        }
return 0;
}

