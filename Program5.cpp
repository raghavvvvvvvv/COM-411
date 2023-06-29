#include <iostream>
#include <string>

using namespace std;

// define a structure to represent a name
struct Name {
    string first; // first name
    string last; // last name
};

// function to compare two names for sorting purposes
bool compareNames(Name name1, Name name2) {
    if (name1.last != name2.last) {
        return name1.last < name2.last;
    } else {
        return name1.first < name2.first;
    }
}

int main() {
    const int MAX_NAMES = 100; // maximum number of names that can be input
    Name names[MAX_NAMES]; // array to store the names
    int numNames; // number of names to input
    Name temp; // temporary variable used in swapping names

    // get the number of names to input
    cout << "How many names do you want to input? ";
    cin >> numNames;

    // input the names
    for (int i = 0; i < numNames; i++) {
        cout << "Enter first name #" << i+1 << ": ";
        cin >> names[i].first;
        cout << "Enter last name #" << i+1 << ": ";
        cin >> names[i].last;
    }

    // sort the names using bubble sort
    for (int i = 0; i < numNames-1; i++) {
        for (int j = 0; j < numNames-i-1; j++) {
            if (compareNames(names[j+1], names[j])) {
                temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }

    // output the sorted names
    cout << "Sorted names:" << endl;
    for (int i = 0; i < numNames; i++) {
        cout << names[i].last << ", " << names[i].first << endl;
    }

    return 0;
}

