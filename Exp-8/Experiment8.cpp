#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class student
{
private:
    string std_name;
    int std_id, std_add;

public:
    void create();
    void output();
    void update();
    void search();
    void del();
    void display();
};

void student::create()
{
    ofstream f;
    f.open("abc.dat", ios::app); // Use append mode to avoid overwriting the file
    cout << "Enter the name of the student: ";
    cin >> std_name;
    cout << "Enter the id of the student: ";
    cin >> std_id;
    cout << "Enter the address of the student: ";
    cin >> std_add;
    f << std_name << " " << std_id << " " << std_add << endl; // Add spaces between data fields
    f.close();
}

void student::output()
{
    ifstream f;
    f.open("abc.dat");
    cout << "------ Student Details ------" << endl;
    while (f >> std_name >> std_id >> std_add) // Read data from the file
    {
        cout << "Name of the student: " << std_name << endl;
        cout << "ID of the student: " << std_id << endl;
        cout << "Address of the student: " << std_add << endl;
    }
    f.close();
}

void student::update()
{
    string name;
    cout << "Enter the name of the student: ";
    cin >> name;

    ifstream f_in("abc.dat");
    ofstream f_out("temp.dat", ios::app); // Use a temporary file to store updated data

    while (f_in >> std_name >> std_id >> std_add)
    {
        if (std_name == name)
        {
            cout << "Enter the new ID of the student: ";
            cin >> std_id;
            cout << "Enter the new address of the student: ";
            cin >> std_add;
        }
        f_out << std_name << " " << std_id << " " << std_add << endl;
    }

    f_in.close();
    f_out.close();

    remove("abc.dat");     // Delete the original file
    rename("temp.dat", "abc.dat"); // Rename the temporary file
    cout << "Student information updated successfully!" << endl;
}

void student::search()
{
    ifstream f;
    f.open("abc.dat");
    string name;
    bool found = false;
    cout << "Enter the name of the student to search: ";
    cin >> name;

    while (f >> std_name >> std_id >> std_add)
    {
        if (std_name == name)
        {
            cout << "------ Student Details ------" << endl;
            cout << "Name of the student: " << std_name << endl;
            cout << "ID of the student: " << std_id << endl;
            cout << "Address of the student: " << std_add << endl;
            found = true;
            break;
        }
    }
    f.close();

    if (!found)
        cout << "Student not found!" << endl;
}

void student::del()
{
    string name;
    cout << "Enter the name of the student to delete: ";
    cin >> name;

    ifstream f_in("abc.dat");
    ofstream f_out("temp.dat", ios::app); // Use a temporary file to store non-deleted data

    while (f_in >> std_name >> std_id >> std_add)
    {
        if (std_name != name)
            f_out << std_name << " " << std_id << " " << std_add << endl;
    }

    f_in.close();
    f_out.close();

    remove("abc.dat");     // Delete the original file
    rename("temp.dat", "abc.dat"); // Rename the temporary file
    cout << "Student information deleted successfully!" << endl;
}

void student::display()
{
    ifstream f;
    f.open("abc.dat");
    cout << "------ Student Details ------" << endl;
    while (f >> std_name >> std_id >> std_add)
    {
        cout << "Name of the student: " << std_name << endl;
        cout << "ID of the student: " << std_id << endl;
        cout << "Address of the student: " << std_add << endl;
    }
    f.close();
}

int main()
{
    int choice, n;
    cout << "Enter the number of students you want to enter: ";
    cin >> n;
    student s[n];
    while (1)
    {
        cout << "\nEnter your choice" << endl;
        cout << "1. Input" << endl;
        cout << "2. Output" << endl;
        cout << "3. Update" << endl;
        cout << "4. Search" << endl;
        cout << "5. Delete" << endl;
        cout << "6. Display" << endl;
        cout << "7. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                s[i].create();
            }
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                s[i].output();
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                s[i].update();
            }
            break;
        case 4:
            for (int i = 0; i < n; i++)
            {
                s[i].search();
            }
            break;
        case 5:
            for (int i = 0; i < n; i++)
            {
                s[i].del();
            }
            break;
        case 6:
            for (int i = 0; i < n; i++)
            {
                s[i].display();
            }
            break;
        case 7:
            return 0;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }
    return 0;
}
