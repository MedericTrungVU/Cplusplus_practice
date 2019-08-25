//
//  Person.hpp
//  Lab01
//
//  Created by vuthanhtrung on 8/25/19.
//  Copyright © 2019 telecom. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Person
{
// private member variables
private:
    string name;
    int age;
    float height;
    float weight;

// public method
public:
    // Constrcutors
    Person(string, int, float, float);
    
    // Destructors
    ~Person();
    
    // Accessors
    void setName(string);
    void setAge(int);
    void setHeight(float);
    void setWeight(float);
    
    string getName();
    int getAge();
    float getHeight();
    float getWeight();
    
    // normal method
};
#endif /* Person_hpp */
