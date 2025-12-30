#include <iostream>

using namespace std;

class DiamondCompany
{

private:

    int comp_id;

    string comp_name;

    int comp_staff_quantity;

    double comp_revenue;

    int comp_import_raw_diamonds;

    int comp_export_diamonds;

    string comp_ceo;

public:

    DiamondCompany(int id, string name, int staff, double revenue,
                   int import_raw, int export_dia, string ceo)
    {

        comp_id = id;

        comp_name = name;

        comp_staff_quantity = staff;

        comp_revenue = revenue;

        comp_import_raw_diamonds = import_raw;

        comp_export_diamonds = export_dia;

        comp_ceo = ceo;
    }

    void display()
    {

        cout << "\nCompany ID: " << comp_id;

        cout << "\nCompany Name: " << comp_name;

        cout << "\nStaff Quantity: " << comp_staff_quantity;

        cout << "\nRevenue (Per Year): " << comp_revenue;

        cout << "\nImported Raw Diamonds: " << comp_import_raw_diamonds;

        cout << "\nExported Diamonds: " << comp_export_diamonds;

        cout << "\nCEO Name: " << comp_ceo << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of Diamond Companies: ";

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id, staff, import_raw, export_dia;

        double revenue;

        string name, ceo;

        cout << "\nEnter details for company " << i + 1 << endl;

        cout << "ID: ";

        cin >> id;

        cout << "Name: ";

        cin >> name;

        cout << "Staff Quantity: ";

        cin >> staff;

        cout << "Revenue: ";

        cin >> revenue;

        cout << "Imported Raw Diamonds: ";

        cin >> import_raw;

        cout << "Exported Diamonds: ";

        cin >> export_dia;

        cout << "CEO Name: ";

        cin >> ceo;

        DiamondCompany d(id, name, staff, revenue, import_raw, export_dia, ceo);

        d.display();
    }

    return 0;
}
