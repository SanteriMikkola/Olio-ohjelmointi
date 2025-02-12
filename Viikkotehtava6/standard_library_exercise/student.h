#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
public:
    Student();
    ~Student();
    Student(string, int);

    int getAge() const;
    void setAge(int newAge);
    string getName() const;
    void setName(string &newName);
    void printStudentInfo();
private:
    int age;
    string name;
};

#endif // STUDENT_H
