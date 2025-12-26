#include <iostream>

using namespace std;


int main() {

    int n;

    int a[100];   

    cout << "Enter array size: ";

    cin >> n;

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++) {

        cout << "a[" << i << "] = ";

        cin >> a[i];

    }

    cout << "Even elements of an Array: ";

    for(int i = 0; i < n; i++) {

        if(a[i] % 2 == 0) {

            cout << a[i] << " ";

        }
    }

    return 0;
    
}
