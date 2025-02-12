#include "student.h"
#include <iostream>

Student::Student(){}

Student::~Student(){}

Student::Student(string name, int age){
    setName(name);
    setAge(age);
}

int Student::getAge() const
{
    return age;
}

void Student::setAge(int newAge)
{
    age = newAge;
}

string Student::getName() const
{
    return name;
}

void Student::setName(string &newName)
{
    name = newName;
}

void Student::printStudentInfo()
{
    cout << "Student " << getName() << " age " << getAge() << endl;
}
