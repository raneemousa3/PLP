#include <iostream>
using namespace std;
int x[1]={128};
void testFunc3(int []);

int main() {
   cout <<"x[0]: "<< x[0] << ",  &x: "<< x <<endl;
   
   int x[1] ={6}; 
   cout <<"x[0]: "<< x[0] << ", addr of x: "<< x <<endl;
   
   testFunc3(x);
   
   cout <<"x[0] after testFunc3: "<< x[0] << ", addr of x: "<< x <<endl;


   return(0);
}

void testFunc3(int x[]){
   x[0] =  2;
   cout << "x[0] in testFunc3 " << x[0]<< "  addr of x: "<< x <<endl;         

}

    
