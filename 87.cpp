
/* WAY 2
Develop a c++ program to accept the age of the user. 
using try catch statement, if the age entered by the user is 18 
or less it will throw an exception "access denied you must be at least 18 years old".*/
#include<iostream>
using namespace std;
int main() {
    try{
        int age=21;
        if(age >= 18){
            cout<<"acess granted - you are old enough.";
        } else{
            throw (age);
        }
    }
    catch (int myNum){
        cout<<"access denied - you must be at least 18 years old.\n";
        cout<<"age is: "<<myNum;
    }
    return 0;
}