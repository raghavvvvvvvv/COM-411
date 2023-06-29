#include <iostream>
#include <string>
using namespace std;

class course {
private:
    string course_code;
    string course_name;
    int course_id;
    int credits;

public:
    void setData() {
        cout << "Enter the name of course: ";
        cin >> course_name;
        cout << "Enter the code of course: ";
        cin >> course_code;
        cout << "Enter the ID of course: ";
        cin >> course_id;
        cout << "Enter the credits of course: ";
        cin >> credits;
    }

    void display() {
        cout << "Course Name: " << course_name << endl;
        cout << "Course ID: " << course_id << endl;
        cout << "Course code: " << course_code << endl;
        cout << "Credits: " << credits << endl;
    }

    void update() {
        cout << "--------UPDATE INFO---------" << endl;
        while (true) {
            cout << "Choose operation you want to perform?" << endl;
            cout << "Press 1 to update course name" << endl;
            cout << "Press 2 to update course id" << endl;
            cout << "Press 3 to update course code" << endl;
            cout << "Press 4 to update credits" << endl;
            cout << "Press 5 to exit" << endl;
            cout << "Enter your choice: ";
            int ch;
            cin >> ch;
            switch (ch) {
                case 1:
                    cout << "Enter the updated name of course: ";
                    cin >> course_name;
                    break;
                case 2:
                    cout << "Enter new id number: ";
                    cin >> course_id;
                    break;
                case 3:
                    cout << "Enter the new course code: ";
                    cin >> course_code;
                    break;
                case 4:
                    cout << "Enter the updated credits: ";
                    cin >> credits;
                    break;
                case 5:
                    return;
                default:
                    cout << "------INVALID CHOICE--------" << endl;
                    break;
            }
        }
    }

    void deleteData() {
        course_code = "";
        course_id = 0;
        course_name = "";
        credits = 0;
        cout<<" -----DATA DELETED-----"<<endl;
    }

    void getDetailsById(int id) {
        if (course_id == id) {
            cout << "Course Name: " << course_name << endl;
            cout << "Course ID: " << course_id << endl;
            cout << "Course code: " << course_code << endl;
            cout << "Credits: " << credits << endl;
        }
    }
};

int main() {
    course c;
    int cho;
    while (true) {
        cout << "Choose operation you want to perform?" << endl;
        cout << "Press 1 to Insert data" << endl;
        cout << "Press 2 to Update data" << endl;
        cout << "Press 3 to Display data" << endl;
        cout << "Press 4 to Delete data" << endl;
        cout << "Press 5 to Get course details by ID" << endl;
        cout << "Press 6 to exit" << endl;
        cout << "Enter your choice: ";
        cin >> cho;
        switch (cho) {
            case 1:
                c.setData();
                break;
            case 2:
                c.update();
                break;
            case 3:
                c.display();
                break;
            case 4:
                c.deleteData();
                break;
            case 5: {
                int id;
                cout << "Enter the course ID: ";
                cin >> id;
                 c.getDetailsById(id);
                 break;
                 }
            case 6:
                exit(0);
            default:
                cout << "------INVALID CHOICE--------" << endl;
                break;
        }
    }
    return 0;
}