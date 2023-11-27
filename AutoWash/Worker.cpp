#include "Worker.h"

Worker::Worker(){
    sName = "";
    dSalary = 0;
}

Worker::Worker(std::string Name) {
    sName = Name;
    dSalary = 0;
}

Worker::Worker(std::string Name, double Salary) {
    sName = Name;
    dSalary = Salary;
}

std::string Worker::GetName() {
    return sName;
}
void Worker::SetName(std::string Name) {
    sName = Name;
}

double Worker::GetSalary() {
    return dSalary;
}
void Worker::SetSalary(double Salary) {
    dSalary = Salary;
}
