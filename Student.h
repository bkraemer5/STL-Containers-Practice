#ifndef _STUDENT
#define _STUDENT

using namespace std;

class Student {
  private:
    string firstName;
    string lastName;
    int    studentId;
    float  classGrade;
  public:
    Student();
    Student(string fname, string lname, int id, float grade);
    void   setfirstName(std::string fname);
    void   setLastName(std::string lname);
    void   setStudentId(int id);
    void   setClassGrade(float grade);
    string getFirstName();
    string getLastName();
    int    getStudentId();
    float  getClassGrade();
};

Student::Student() {
  firstName = "";
  lastName = "";
  studentId = 0;
  classGrade = 0.0;
}

Student::Student(string fname, string lname, int id, float grade) {
  firstName = fname;
  lastName = lname;
  studentId = id;
  classGrade = grade;
}

void Student::setfirstName(string fname) {
  firstName = fname;
}

void Student::setLastName(string lname) {
  lastName = lname;
}

void Student::setStudentId(int id) {
  studentId = id;
}

void Student::setClassGrade(float grade) {
  classGrade = grade;
}

string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

int Student::getStudentId() {
    return studentId;
}

float Student::getClassGrade() {
    return classGrade;
}
#endif
