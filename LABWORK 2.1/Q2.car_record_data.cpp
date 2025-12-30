#include <iostream>

using namespace std;

class Car
{
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    void setData()
    {
        cout << "\nEnter Car ID: ";
        cin >> car_id;

        cout << "Enter Company Name: ";
        cin >> car_company_name;

        cout << "Enter Car Color: ";
        cin >> car_color;

        cout << "Enter Car Model: ";
        cin >> car_model;

        cout << "Enter Release Year: ";
        cin >> car_release_year;
    }

    void getData()
    {
        cout << "\nCar ID          : " << car_id;
        cout << "\nCompany Name    : " << car_company_name;
        cout << "\nColor           : " << car_color;
        cout << "\nModel           : " << car_model;
        cout << "\nRelease Year    : " << car_release_year << endl;
    }
};

int main()
{
    Car c[4];

    cout << "===== CAR RECORD SYSTEM =====";

    for (int i = 0; i < 4; i++)
    {
        cout << "\n\n--- Enter Car " << i + 1 << " Details ---";
        c[i].setData();
    }

    cout << "\n\n===== CAR DETAILS =====";

    for (int i = 0; i < 4; i++)
    {
        cout << "\n\n--- Car " << i + 1 << " ---";
        c[i].getData();
    }

    return 0;
}
