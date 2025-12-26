#include <iostream>

using namespace std;


int main() {

    int start, end;

    int leap[50], index = 0;


    cout << "Enter the first number: ";

    cin >> start;


    cout << "Enter the second number: ";

    cin >> end;


    for(int year = start; year <= end; year++) {

        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {

            leap[index] = year;

            index++;
        }
    }

    cout << "The array is: ";

    for(int i = 0; i < index; i++) {

        cout << leap[i] << " ";

    }

    return 0;
    
}
