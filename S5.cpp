#include <iostream>
using namespace std;
int x=128;
void testFunc2();
void testFunc3();
int main() {
   cout <<"x: "<< x << "  &x: "<< &x <<endl;
   int x =6; // toggle (comment) in and ou
   cout <<"x: "<< x << "  &x: "<< &x <<endl;
   testFunc2();
   cout <<"x after testFunc: "<< x << "  &x: "<< &x <<endl;
   testFunc3();

   return(0);
}

void testFunc2(){
   int x = 78;
   cout << "x in testFunc2 " << x<< "  &x: "<< &x <<endl;  
}

void testFunc3(){
    cout <<"x after : "<< x << "  &x: "<< &x <<endl;
}
    
