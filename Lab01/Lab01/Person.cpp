//
//  Person.cpp
//  Lab01
//
//  Created by vuthanhtrung on 8/25/19.
//  Copyright © 2019 telecom. All rights reserved.
//

#include "Person.hpp"
#include <iostream>
using namespace std;

Person::Person(string f_name, int f_age, float f_height, float f_weight){
    name = f_name;
    age = f_age;
    height = f_height;
    weight = f_weight;
}

Person::~Person(){
    cout<<"deleted this person"<<endl;
}

void Person::setName(string f_na){
    this->name = f_na;
}

void Person::setAge(int f_age){
    this->age = f_age;
}
void Person::setHeight(float f_height){
    this->height = f_height;
}
void Person::setWeight(float f_weight){
    this->weight = f_weight;
}

string Person::getName(){
    return this->name;
}
int Person::getAge(){
    return this->age;
}
float Person::getHeight(){
    return this->height;
}
float Person::getWeight(){
    return this->weight;
}


