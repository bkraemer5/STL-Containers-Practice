// Brittany Kraemer
// CS301 - 03

#include <fstream>
#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

// calculates the grade given 5 test scores
float calculateGrade(float t1, float t2, float t3, float t4, float t5) {
  cout << fixed << showpoint << setprecision(2);
  return (float)((t1+t2+t3+t4+t5)/5);
}

// reads text file and stores data into vector of Student objects
void readData(vector<Student> & vec) {
 
  ifstream file;
  file.open("input.txt");
  string fn, ln;
  int id;
  float test1, test2, test3, test4, test5;
  while(file >> fn) {
    file >> ln >> id >> test1 >> test2 >> test3 >> test4 >> test5;
    
    vec.push_back(Student(fn, ln, id, calculateGrade(test1, test2, test3, test4, test5)));      
   
  }
  file.close();
  cout << "Vector Example:" << endl;
  for (vector<Student>::iterator i = vec.begin(); i != vec.end(); ++i) {
    cout << i->getFirstName() << " " << i->getLastName() << " " << i->getStudentId() << " " << i->getClassGrade() << endl;
  }
  cout << endl;
}

// reads text file and stores data into stack of Student objects
void readData(stack<Student> & vec) {
  ifstream file;
  file.open("input.txt");
  string fn, ln;
  int id;
  float test1, test2, test3, test4, test5;
  stack<Student> * temp = new stack<Student>;
  while(file >> fn) {
    file >> ln >> id >> test1 >> test2 >> test3 >> test4 >> test5;
    vec.emplace(Student(fn, ln, id, calculateGrade(test1, test2, test3, test4, test5)));
  }
  file.close();
  cout << "Stack Example:" << endl;
  int size = vec.size();
  for (int i = 0; i < size; i++) {
    temp->push(vec.top());
    vec.pop();
  }
  for (int i = 0; i < size; i++) {
    cout << temp->top().getFirstName() << " " << temp->top().getLastName() << " " << temp->top().getStudentId() << " " << temp->top().getClassGrade() << endl;
    vec.push(temp->top());
    temp->pop();
  }
  cout << endl;
  delete temp;
}

// reads text file and stores data into queue of Student objects
void readData(queue<Student> & vec) {

fstream file;
  file.open("input.txt");
  string fn, ln;
  int id;
  float test1, test2, test3, test4, test5;
  queue<Student> *temp = new queue<Student>;
  while(file >> fn) {
    file >> ln >> id >> test1 >> test2 >> test3 >> test4 >> test5;
    vec.emplace(Student(fn, ln, id, calculateGrade(test1, test2, test3, test4, test5)));
  }
  file.close();
  cout << "Queue Example:" << endl;
  int size = vec.size();
  for (int i = 0; i < size; i++) {
    temp->push(vec.front());
    vec.pop();
  }
  for (int i = 0; i < size; i++) {
    cout << temp->front().getFirstName() << " " << temp->front().getLastName() << " " << temp->front().getStudentId() << " " << temp->front().getClassGrade() << endl;
    vec.push(temp->front());
    temp->pop();
  }
  cout << endl;
  delete temp;
}

// reads text file and stores data into list of Student objects
void readData(list<Student> & vec) {
  ifstream file;
  file.open("input.txt");
  string fn, ln;
  int id;
  float test1, test2, test3, test4, test5;
  while(file >> fn) {
    file >> ln >> id >> test1 >> test2 >> test3 >> test4 >> test5;
    vec.emplace_back(Student(fn, ln, id, calculateGrade(test1, test2, test3, test4, test5)));
  }
  file.close();
  cout << "List Example: " << endl;
  for (list<Student>::iterator i = vec.begin(); i != vec.end(); ++i) {
    cout << i->getFirstName() << " " << i->getLastName() << " " << i->getStudentId() << " " << i->getClassGrade() << endl;
  }
  cout << endl;
}

// reads text file and stores data into map of Student objects
void readData(map<int, Student> & vec) {
  ifstream file;
  file.open("input.txt");
  string fn, ln;
  int id;
  float test1, test2, test3, test4, test5;
  while(file >> fn) {
    file >> ln >> id >> test1 >> test2 >> test3 >> test4 >> test5;
    vec.emplace(id, Student(fn, ln, id, calculateGrade(test1, test2, test3, test4, test5)));
  }
  file.close();
  cout << "Map Example: " << endl;
  for (auto x : vec) {
    cout << x.second.getFirstName() << " " << x.second.getLastName() << " " << x.second.getStudentId() << " " << x.second.getClassGrade() << endl;
  }
  cout << endl;
}

int main() {
    vector<Student> studentVec;
    stack<Student> studentStack;
    queue<Student> studentQueue;
    list<Student> studentList;
    map<int, Student> studentMap; // use the student ID for the key

    readData(studentVec);
    readData(studentStack);
    readData(studentQueue);
    readData(studentList);
    readData(studentMap);
    return 0;
}
                                          
