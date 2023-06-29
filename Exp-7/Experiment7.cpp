#include <iostream>
using namespace std;


class Course {
public:
  string name;
  int duration;
  float fees;
  Course(string n, int d, float f) {
    name = n;
    duration = d;
    fees = f;
  }
   void display() {
    cout << "Course Name: " << name << endl;
    cout << "Duration: " << duration << " months" << endl;
    cout << "Fees: Rs." << fees << endl;
  }
};


class UGCourse : public Course {
public:
  UGCourse(string n, int d) : Course(n, d, 50000) { }
  void display() {
    cout << "UG Course" << endl;
    Course::display();
  }
};

class PGCourse : public Course {
public:
  PGCourse(string n, int d) : Course(n, d, 100000) { }
  void display() {
    cout << "PG Course" << endl;
    Course::display();
  }
};

class DiplomaCourse : public Course {
public:
  DiplomaCourse(string n, int d) : Course(n, d, 25000) { }
  void display() {
    cout << "Diploma Course" << endl;
    Course::display();
  }
};

int main() {
  UGCourse ug("BSc Computer Science", 36);
  ug.display();
  
  PGCourse pg("Electronics", 24);
  pg.display();
  
  DiplomaCourse dip("Diploma in Web Designing", 12);
  dip.display();
  
  return 0;
}