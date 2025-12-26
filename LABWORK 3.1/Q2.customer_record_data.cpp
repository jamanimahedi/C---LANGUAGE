#include <iostream>
using namespace std;


class Customer {

private:

    int id, age, validity;

    long long mobile;

    string name, city, brand;

public:

    void setData(int id, string name, int age,
                 string city, long long mobile,
                 int validity, string brand) {

        this->id = id;

        this->name = name;
        
        this->age = age;

        this->city = city;

        this->mobile = mobile;

        this->validity = validity;

        this->brand = brand;

    }

    void getData() {

        cout << "\nID        : " << id;

        cout << "\nName      : " << name;

        cout << "\nAge       : " << age;

        cout << "\nCity      : " << city;

        cout << "\nMobile    : " << mobile;

        cout << "\nValidity  : " << validity << " Years";

        cout << "\nBrand     : " << brand;

    }
};

int main() {

    Customer c[5];

    c[0].setData(1, "Ram", 25, "Surat", 9876543210, 2, "Jio");

    c[1].setData(2, "Shyam", 28, "Ahmedabad", 9123456789, 3, "Airtel");

    c[2].setData(3, "Jay", 22, "Vadodara", 9988776655, 1, "Vi");

    c[3].setData(4, "Amit", 30, "Rajkot", 8899776655, 4, "Jio");

    c[4].setData(5, "Kunal", 27, "Surat", 7766554433, 2, "Airtel");

    for (int i = 0; i < 5; i++) {

        c[i].getData();
        
    }

    return 0;
}
