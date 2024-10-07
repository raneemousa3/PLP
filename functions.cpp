#include <iostream>


#include <iostream>  
#include <string>  
#define max 4
 using namespace std;
 string strings[max];


// function adds two variables
int add(int x, int y){
int z=x+y;
return z;

}
// recurrsive function 
int findFactorial(long num) {
 
    if (num <= 1){
    return 1;} // Base case
    return num * findFactorial(num - 1); // Recursive call

    
}
//measure string length
int len(string str)  
{  
    int length = 0;  
    for (int i = 0; str[i] != '\0'; i++)  
    {  
        length++;  
          
    }  
    return length;     
}  

//splits a string at a known delimiter
void split (string str, char seperator)  
{  
   
    int currIndex = 0, i = 0;  
    int startIndex = 0, endIndex = 0;  
    while (i <= len(str))  
    {  
        if (str[i] == seperator || i == len(str))  
        {  
            endIndex = i;  
            string subStr = "";  
            subStr.append(str, startIndex, endIndex - startIndex);  
            strings[currIndex] = subStr;  
            currIndex += 1;  
            startIndex = endIndex + 1;  
        }  
        i++;  
        }     
}  
   



int main()
{
    int a = 1;
    int b = 2;
    int z= add(a,b);

    
 
    cout << " z :" << z << endl;
    int g=50;
    long fac=findFactorial(g);
     cout << " Factorial of  " <<  g << ": "<< fac<< endl;
     string str = "lala-land-is-somewhere";  
    char seperator = '-'; // space  
    split(str, seperator);  
    cout <<" The split string is: "<<endl;  
    for (int i = 0; i < max; i++)  
    {  
        cout << " " << i << ": " << strings[i]<<endl;  
    }  
   
    return 0;
}