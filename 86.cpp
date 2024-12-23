/* WAY 1
Develop a c++ program to accept the age of the user. 
using try catch statement, if the age entered by the user is 18 
or less it will throw an exception "access denied you must be at least 18 years old".*/
#include <iostream>
#include <stdexcept> // Include for runtime_error
using namespace std;

int main() {
    int age;
    cout << "Enter an age: ";
    cin >> age;

    try {
        if (age <= 18) {
            throw age; // Throw the age value
        }
        cout << "Access granted" << endl;
    }
    catch (int age) { // Catch an int
        cout << "Access denied. Age is: " << age << endl;
    }
    return 0;
}
