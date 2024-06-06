#include <string>
#include <iostream>
using namespace std;

class Base {}; // Base class
class Dummy: public Base { // Derived class
       public:
       virtual void printMessage(string message) {
              cout << message << endl;
       }
       
};

class Password: public Base { // Derived class 2
       string password = "empty";
       // private function that cannot be accessed from outside the class
       virtual void modifyPassword(string newPassword) {
              password = newPassword;
       }
       public:
       Password(string newPassword) { modifyPassword(newPassword); }

       void printPassword() { cout << password << endl; }
};

class Unrelated { // Unrelated class
       public: 
       virtual void doRandomStuffWithString(string str) {
              /* random stuff*/
              cout << str << endl;
       }
};

void typeConfusionInHierarchy(Base* base) { // Type confusion inside the hierarchy
       Dummy* dummy = static_cast<Dummy*>(base); //|\label{code:derived_type_confusion}|
       dummy->printMessage("You've been hacked"); // Illegal access |\label{code:illegal_access1}|
}

void typeConfusionOutsideHierarchy(Base* base) { // Type confusion outside the hierarchy
       Unrelated* unrelated = reinterpret_cast<Unrelated*>(base); //|\label{code:unrelated_type_confusion}|
       unrelated->doRandomStuffWithString("You've been hacked twice"); // Illegal access |\label{code:illegal_access2}|
}

int main() {
       Password password("MyHardPassword"); // Password initialization |\label{code:password}|
       Base* base = &password; // upcast to base class
       password.printPassword(); // print "MyHardPassword"
       typeConfusionInHierarchy(base); // polymorphism |\label{code:polymorphism}|
       password.printPassword(); // print "You've been hacked"
       typeConfusionOutsideHierarchy(&password);
       password.printPassword(); // print "You've been hacked twice"
       return 0;
}