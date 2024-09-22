

#include <iostream>

#include <typeinfo>
#include <map>
#include <string>

int main() {
    int a = 66;
    int b=8;
    long c= 668666;
    bool y=true;
    float d=8.5f;
    double k=9.0;
    float g=d+k;
    float h=d/k;
    char m= 'n';
    char j= 80;
    char l=80;
    char w='5';
    int z=5;
    int x = w + 6;
    int q = z + 6;
    double s=a/b;
    float u= a/k;
    float f= l/k;
 
    int arr[5] = {1, 2, 3, 4, 5};
    std::map<int, std::string> dictionary;

    // Insert key-value pairs using subscript operator
    dictionary[1] = "C++";
    dictionary[2] = "Java";

    // Insert key-value pairs using insert method
  


    std:: string sentence="hello world";
    std::cout << "size of long " << sizeof(long)<<std :: endl;
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a + d= " << (a + d) << std::endl;
    std::cout << "d+k= " << (d/k) << std::endl;
    std:: cout << typeid(h).name() << std::endl;
    std::cout << "d+k= " << (d+k) << std::endl;
    std::cout << "a+m= " << a+m<< std::endl;
    std::cout << "a+l= " << a+l<< std::endl;
    std::cout << "x= " << x<< std::endl;
    std::cout << "q= " << q<< std::endl;
    std::cout << "array= " << arr[4]<< std::endl;
    std::cout << "Value for Key - 2: " << dictionary[2]<< std::endl;
    std::cout << "a/b= " << s<< std::endl;
     std::cout << "a/b= " << f<< std::endl;
     std:: cout << typeid(f).name() << std::endl;

    return 0;
}
