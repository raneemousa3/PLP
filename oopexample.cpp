#include <iostream>
using namespace std;

class Pet{

   protected:
    string Name;
    int Age;
    float HumanEquAge;
    public:
    Pet(string name, int Age){
        Name=name;
       this-> Age=Age;
    }
    virtual void CalculateHumanEquAge(){

    }
    
   string getName() const { return Name; }
    int getAge() const  { return Age; }
   virtual  float getHumanEquAge()=0; 

};
