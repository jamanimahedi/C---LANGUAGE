#include <iostream>

using namespace std;

class Student {

private:
    int id, age;

    string name, course, city, email, college;

public:

    void setData(int id, string name, int age,string course, string city,string email, string college){
                 
        this->id = id;

        this->name = name;

        this->age = age;

        this->course = course;

        this->city = city;

        this->email = email;

        this->college = college;

    }

    void getData() {

        cout << "\nID      : " << id;

        cout << "\nName    : " << name;

        cout << "\nAge     : " << age;

        cout << "\nCourse  : " << course;

        cout << "\nCity    : " << city;
        
        cout << "\nEmail   : " << email;
        cout << "\nCollege : " << college;
        
    }
};

int main() {
    Student s[5];

    s[0].setData(1, "Ram", 20, "C++", "Surat", "r@gmail.com", "RNW");

    s[1].setData(2, "Shyam", 21, "Java", "Ahmedabad", "a@gmail.com", "RNW");

    s[2].setData(3, "Jay", 19, "Python", "Vadodara", "n@gmail.com", "RNW");

    s[3].setData(4, "Amit", 22, "PHP", "Rajkot", "p@gmail.com", "RNW");

    s[4].setData(5, "Kunal", 20, "Web", "Surat", "k@gmail.com", "RNW");


    for (int i = 0; i < 5; i++) {

        s[i].getData();
        
    }

    return 0;
}
