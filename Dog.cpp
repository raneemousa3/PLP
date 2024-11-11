#include <iostream>
using namespace std;
#include "oopexample.cpp"

class Dog : public Pet {
public:
    Dog(string name, int age) : Pet(name, age) {}

   void CalculateHumanEquAge() {
        if (Age == 1) {
            HumanEquAge = 1;
        } else if (Age == 2) {
            HumanEquAge = 2;
        } else {
            HumanEquAge = 2 + ((Age - 2) * 7);
        }
        
          // Assuming you want to return the calculated value
    }
    float getHumanEquAge()  { CalculateHumanEquAge() ;return HumanEquAge; }
};
