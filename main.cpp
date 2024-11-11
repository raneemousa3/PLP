#include <iostream>
using namespace std;
#include "Dog.cpp"

int main() {
    Dog d1("harry", 12);
    cout << "Age of dog: " << d1.getAge() << endl;  
      cout << "Name of dog: " << d1.getName() << endl; 
     cout << "human equivalent age of dog: " << d1.getHumanEquAge()<< endl; 
    return 0;
}
