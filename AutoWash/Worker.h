#pragma once
#include <string>

class Worker {
private:
    std::string sName;
    double dSalary;
public:
    Worker();

    Worker(std::string Name);

    Worker(std::string Name, double Salary);

    std::string GetName(); 

    void SetName(std::string Name);

    double GetSalary();

    void SetSalary(double Salary);
};
