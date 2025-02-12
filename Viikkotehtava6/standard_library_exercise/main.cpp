#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main ()
{
    int selection =0;
    string name;
    int age;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Ask the user for the new student's name and age
            cout << "Student name?" << endl;
            cin >> name;
            cout << "Student age?" << endl;
            cin >> age;
            // Add the new student to the StudentList vector
            studentList.push_back(Student(name, age));
            break;
        case 1:
            // Print the names of all students in the StudentList vector
            for (vector<Student>::iterator it = studentList.begin(); it != studentList.end(); ++it)
                it->printStudentInfo();
            break;
        case 2:
            // Sort the Student objects in the StudentList vector by name
            // using the sort function from the algorithm library
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b){
                return a.getName() < b.getName();
            });
            // Print the sorted students using the printStudentInfo() function
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        case 3:
            // Sort the Student objects in the StudentList vector by age
            // using the sort function from the algorithm library
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b){
                return a.getAge() < b.getAge();
            });
            // Print the sorted students using the printStudentInfo() function
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        case 4:
            // Ask the user for the student's name
            cout << "Student name?" << endl;
            cin >> name;
            // Search for the student in the StudentList vector using the
            // find_if function from the algorithm library
            {
                vector<Student>::iterator it = find_if(studentList.begin(),
                    studentList.end(), [&name](const Student& s) {
                        return s.getName() == name;
                });
                // If found, print the student's information
                if (it != studentList.end()) {
                    it->printStudentInfo();
                } else {
                    cout << "Student not found." << endl;
                }
            }
            break;
        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }
    }
    while(selection < 5);

    return 0;
}
