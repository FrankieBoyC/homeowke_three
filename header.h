#include <iostream>
#include <fstream>
using namespace std;

/*struct Employees
    {
        string name;
        int id;
        string title;
        float hoursWorked;
        float hourlyRate;
        float fedTax;
    } employee[15]; */

void createCSV()
{
    ofstream myFile("employees.csv");

    myFile.open("employees.csv");
    int ID, i;
    string title;
    float hoursWorked;
    float wage;
    float fedTax;
}

/*void readFile()
{
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
} */

void enqueue()
{
}