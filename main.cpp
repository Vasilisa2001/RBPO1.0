#include <iostream>
#include <string>
using namespace std;

unsigned short ReadPersonAge() {
    cout << "age: ";
    unsigned short in;
    cin >> in;
    return in;
};

string ReadPersonName() {
    cout << "name: ";
    string in;
    cin >> in;
    return in;
};

unsigned short global_height;

void ReadPersonHeight() {
    cout << "height: ";
    cin >> global_height;
};

void ReadPersonWeight(unsigned short& out) {
    cout << "weight: ";
    cin >> out;
};

void ReadPersonSalary(double* out) {
    cout << "salary: ";
    cin >> *out;
};

void ReadPersonData(string& name, unsigned short& age, double& salary) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
};

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    height = global_height;
    unsigned short w;
    ReadPersonWeight(w);
    weight = w;
};

void WritePersonData(const string& name, const unsigned short age, const string& height = "", const string& weight = "", const string& salary = "") {
    cout << "   Name   " << name << endl;
    cout << "   Age    " << age << endl;
    cout << "  Height " << height << endl;
    cout << "  Weight " << weight << endl;
    cout << "  Salary " << salary << endl;
};

int main(int argc, char** argv) {
    string name;
    unsigned short age, height, weight;
    double salary;
    ReadPersonData(name, age, salary);
    cout << "Result: \n";
    WritePersonData(name, age, "", "", to_string(salary));
    ReadPersonData(name, age, height, weight);
    cout << "Result: \n";
    WritePersonData(name, age, to_string(height), to_string(weight));
};
