// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Person.hpp"

using namespace std;

void PassByValue(int);
void PassByRef(int&);

void ModifyPerson(Person&);

int main()
{
    int num1;
    int *pNum = new int;
    num1 = 3;
    *pNum = 5;
    
    PassByValue(num1);
    cout << "value of num1 after call PassByValue:" << num1 << endl;
    
    PassByRef(*pNum);
    cout << "value in pNum after call PassByRef:" << *pNum << endl;
    
    PassByValue(pNum);
    
    
    // 17.Create a pointer variable to a double, and allocate memory for it using the new keyword
    double *d = new double;
    *d = 3.0;
    cout << "value in double memory location:" << *d << endl;
    
    // 23.
    if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
    
    Person *pOne = new Person("Mai", 21, 160.3, 50.3);
    cout << "Her/his name is:" << pOne->getName() << ", age is:" << pOne->getAge() <<
    ", height is:" << pOne->getHeight() << ", weight is:" << pOne->getWeight() << endl;
    
    ModifyPerson(*pOne);
    
    cout << "Her/his new name is:" << pOne->getName() << endl;
    
    delete pNum;
    delete d;
    delete pOne;
    
    return 0;
}

void PassByValue(int a) {
    cout << "name of function is: PassByValue" << endl;
    a++;
    cout << "value of num1 now is: " << a << endl;
}


void PassByRef(int& a){
    cout << "name of function is: PassByRef" << endl;
    a = 50;
    cout << "value in pNum now is: " << a << endl;
}

void ModifyPerson(Person& p){
    p.setName("Lan");
}



