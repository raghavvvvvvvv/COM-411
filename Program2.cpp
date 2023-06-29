#include<iostream>
using namespace std;
struct Employe {
    char name[20];
    int id;
    int age;
    char houseno[20];
    char state[20];
}s;
int main(){
    int n,display;
    cout<<"Enter the number of employees ";
    cin>>n;
   Employe s[n];
    for(int i =0; i<n; i++){
        cout<<"Enter the employee name "<<i+1<<endl;
        cin>>s[i].name;
        cout<<"Enter employee id "<<endl;
        cin>>s[i].id;
        cout<<"Enter the employee age "<<endl;
        cin>>s[i].age;
        cout<<"Enter the employee House no.  "<<endl;
        cin>>s[i].houseno;
        cout<<"Enter the employee state no.  "<<endl;
        cin>>s[i].state;
    }
    cout<<"Enter the id of employee to display ";
    cin>>display;
    for(int i= 0; i < n; i++){
        if(display == s[i].id){
         cout<<"This is employee no."<<display<<endl;
        cout<<"The employee name is "<<s[i].name<<endl;
        cout<<"The employee id is "<<s[i].id<<endl;
        cout<<"The employee age is "<<s[i].age<<endl;
        cout<<"The employee house is "<<s[i].houseno<<endl;
        cout<<"The employee state is "<<s[i].state<<endl;
        cout<<"......................................."<<endl;
        }
        else{
            cout<<"This employee doesn't exist";
        }
        
    };
}