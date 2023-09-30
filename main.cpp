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

    ifstream in("employee.csv");

    for (int i = 0; i < 15; i++)
    {
        cout << employee[i].name << "  ";
        cout << employee[i].id << " ";
        cout << employee[i].title << "  ";
        cout << employee[i].hoursWorked << "  ";
        cout << employee[i].fedTax << "  ";
        cout << employee[i].hourlyRate << "  " << endl;
    }

    for (int i = 0; i < 15; i++)
    {
        in >> employee[i].name >> employee[i].id >> employee[i].title >> employee[i].hoursWorked >> employee[i].hourlyRate >> employee[i].fedTax;
    }

    queue<Employees> employees;
}