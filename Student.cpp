#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid,char sname[]) {
    studentID = sid;
  strcpy(name, sname);
}

// Display StudentId and Name
 void Student::display() {

  cout<<"Student ID : "<<studentID<<endl;
  cout<<"Display name :"<<name<<endl;
  
}
