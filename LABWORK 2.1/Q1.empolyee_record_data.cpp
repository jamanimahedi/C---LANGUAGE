#include <iostream>

using namespace std;

class Employee
{
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    float emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

    void setData()
    {
        cout << "\nEnter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Employee Name: ";
        cin >> emp_name;

        cout << "Enter Employee Age: ";
        cin >> emp_age;

        cout << "Enter Employee Role: ";
        cin >> emp_role;

        cout << "Enter Employee Salary: ";
        cin >> emp_salary;

        cout << "Enter Employee City: ";
        cin >> emp_city;

        cout << "Enter Experience (Years): ";
        cin >> emp_experience;

        cout << "Enter Company Name: ";
        cin >> emp_company_name;
    }

    void getData()
    {
        cout << "\nEmployee ID        : " << emp_id;
        cout << "\nName               : " << emp_name;
        cout << "\nAge                : " << emp_age;
        cout << "\nRole               : " << emp_role;
        cout << "\nSalary             : " << emp_salary;
        cout << "\nCity               : " << emp_city;
        cout << "\nExperience         : " << emp_experience;
        cout << "\nCompany Name       : " << emp_company_name << endl;
    }
};

int main()
{
    Employee e[5];

    cout << "===== EMPLOYEE RECORD SYSTEM =====";

    for (int i = 0; i < 5; i++)
    {
        cout << "\n\n--- Enter Employee " << i + 1 << " Details ---";
        e[i].setData();
    }

    cout << "\n\n===== EMPLOYEE DETAILS =====";

    for (int i = 0; i < 5; i++)
    {
        cout << "\n\n--- Employee " << i + 1 << " ---";
        e[i].getData();
    }

    return 0;
}
