#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Employee {
public:
    string name;
    int id;
    string department;

    Employee(string n, int i, string d) : name(n), id(i), department(d) {}
};

class EmployeeManager {
private:
    vector<Employee> employees;
    string filename;

public:
    EmployeeManager(string fname) : filename(fname) {
        loadEmployees();
    }

    void addEmployee(const Employee& emp) {
        employees.push_back(emp);
        saveEmployees();
    }

    void displayEmployees() {
        cout << "Number of employees: " << employees.size() << endl;
        for (const auto& emp : employees) {
            cout << "ID: " << emp.id << ", Name: " << emp.name << ", Department: " << emp.department << endl;
        }
    }

private:
    void loadEmployees() {
        ifstream file(filename);
        if (file.is_open()) {
            string name, department;
            int id;
            while (file >> name >> id >> department) {
                employees.emplace_back(name, id, department);
            }
            file.close();
        }
    }

    void saveEmployees() {
        ofstream file(filename);
        if (file.is_open()) {
            for (const auto& emp : employees) {
                file << emp.name << " " << emp.id << " " << emp.department << endl;
            }
            file.close();
        }
    }
};

int main() {
    EmployeeManager manager("employees.txt");

    while (true) {
        cout << "\n1. Add Employee\n2. Display Employees\n3. Exit\nChoose an option: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            string name, department;
            int id;
            cout << "Enter employee name: ";
            cin >> name;
            cout << "Enter employee ID: ";
            cin >> id;
            cout << "Enter employee department: ";
            cin >> department;
            manager.addEmployee(Employee(name, id, department));
        } else if (choice == 2) {
            manager.displayEmployees();
        } else if (choice == 3) {
            break;
        }
    }

    return 0;
}