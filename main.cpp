#include <iostream>
#include <string>
using namespace std;

unsigned short personHeight;
 
unsigned short ReadPersonAge() {
    unsigned short age;
    cout << "age: ";
    cin >> age;
    return age;
}
 
string ReadPersonName() {
    string name;
    cout << "name: ";
    cin >> name;
    return name;
}
 
void ReadPersonHeight() {
    cout << "height: ";
    cin >> personHeight;
}
 
void ReadPersonWeight(unsigned short& weight) {
    cout << "weight: ";
    cin >> weight;
}
 
void ReadPersonSalary(double* salary) {
    cout << "salary: ";
    cin >> *salary;
}
 
void ReadPersonData(string& name, unsigned short& age, double& salary) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}


void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    height = personHeight;
    ReadPersonWeight(weight);
}


void WritePersonData(unsigned short age, string name, const string& height = "", const string& weight = "", const string& salary = "") {
    cout << name << endl;
    cout << age << endl;
    cout << height << endl;
    cout << weight << endl;
    cout << salary << endl;
}

int main() {
    string name;
    unsigned short age, height, weight;
    double salary;
    ReadPersonData(name, age, salary);
    WritePersonData(age, name, "", "", to_string(salary));
    ReadPersonData(name, age, height, weight);
    WritePersonData(age, name, to_string(height), to_string(weight));
    return 0;
}
