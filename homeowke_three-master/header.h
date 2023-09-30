#include <iostream>
#include <fstream>
using namespace std;

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

void openFile(ifstream& inputFile, string fileName)
{
    inputFile.open(fileName);
    if (!inputFile)
    {
        cout << "Error" << endl;
    }
    else
    {
        cout << "File Opened" << endl;
    }
}

void readFile(string fileName, EmployeeData list[])
{
    ifstream inputFile;
    openFile(inputFile, fileName);
    for (int i = 0; i < ListSize; i++) {
        inputFile >> list[i].id >> list[i].name >> list[i].title  >>list[i].hoursWorked>> list[i].hourlyRate>>list[i].fedTax;
    }
    inputFile.close();
}