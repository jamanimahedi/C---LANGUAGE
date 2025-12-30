#include <iostream>

using namespace std;

class Cafe
{

private:
    int cafe_id;

    string cafe_name;

    string cafe_type;

    int cafe_rating;

    string cafe_location;

    int cafe_establish_year;

    int cafe_staff_quantity;

public:
    Cafe()
    {

        cafe_id = 0;

        cafe_name = "N/A";

        cafe_type = "N/A";

        cafe_rating = 0;

        cafe_location = "N/A";

        cafe_establish_year = 0;

        cafe_staff_quantity = 0;
    }

    void setData()
    {

        cout << "Cafe ID: ";

        cin >> cafe_id;

        cout << "Cafe Name: ";

        cin >> cafe_name;

        cout << "Cafe Type (Rooftop/Normal): ";

        cin >> cafe_type;

        cout << "Cafe Rating (1-5): ";

        cin >> cafe_rating;

        cout << "Location (City): ";

        cin >> cafe_location;

        cout << "Establish Year: ";

        cin >> cafe_establish_year;

        cout << "Staff Quantity: ";

        cin >> cafe_staff_quantity;
    }

    void display()
    {

        cout << "\nCafe ID: " << cafe_id;

        cout << "\nCafe Name: " << cafe_name;

        cout << "\nCafe Type: " << cafe_type;

        cout << "\nCafe Rating: " << cafe_rating << " Star";

        cout << "\nLocation: " << cafe_location;

        cout << "\nEstablish Year: " << cafe_establish_year;

        cout << "\nStaff Quantity: " << cafe_staff_quantity << endl;
    }
};

int main()
{

    int n;

    cout << "Enter number of Cafes: ";

    cin >> n;

    Cafe c;

    for (int i = 0; i < n; i++)
    {

        cout << "\nEnter details for Cafe " << i + 1 << endl;

        c.setData();

        c.display();
    }

    return 0;
}
