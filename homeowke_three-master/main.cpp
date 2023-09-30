#include <iostream>
#include <string>
#include <fstream>
#include <queue>
#include "header.h"
using namespace std;

int main()
{
    createCSV();

    struct Employees
    {
        string name;
        int id;
        string title;
        float hoursWorked;
        float hourlyRate;
        float fedTax;
    } employee[15];

    EmployeeData list1[ListSize];   

    ifstream inputFile;
    string fileName1 = "/homework_three/employees.csv"
    
    readFile(fileName1, list1);
}