#include <iostream>


#include <iostream>  
#include <string>  

 using namespace std;
 int main(){
int score = 85;
int x;
string grade;

if (score > 90) {
grade = 'A';
} else if (score > 75) {
grade = 'B';
} else {
grade = 'C';}
cout << "Your grade is " << grade << endl;// if else statements


if(x==true){
    cout << (x==true)<< endl;}
//a multi-condition if/else statement (i.e. "if x>0 && y< 10)
score = 75;
    if (score > 93 & score < 100) {
        grade = "A";
    } else if (score > 90) {
        grade = "A-";
    } else if (score > 80 & score < 85) {
        grade = "B-";
    } else if (score >= 85 & score < 90) {
        grade = "B"; 
    } else if (score > 70 and score < 80) {
        grade = "C";
    } else {
        grade = "D"; // Handle lower scores
    }

    cout << "Your grade is " << grade << endl; // Output the new grade

 char d = 'A';
    // switch statements
    switch (x) {
    case 'A':
        cout << "Choice is A"<<endl;
        break;
    case 'B':
        cout << "Choice is B"<<endl;
        break;
    case 'C':
        cout << "Choice is C"<<endl;
        break;
    default:
        cout << "Choice other than A, B and C"<<endl;
        break;
    }
    int z=1;
    int y=5;
  
  int max_value = (z > y) ? z : y;
  cout << "The max of " << z << " and " << y << " is " << max_value << endl;

return 0;

 }