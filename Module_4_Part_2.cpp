#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2) {
        if (n1 > n3) {
            cout << "Largest number: " << n1;
        }
        else {
            cout << "Largest number: " << n3;
        }
    }
    else if (n2 > n3) {
            cout << "Largest number: " << n2;
        }
        else {
            cout << "Largest number: " << n3;
        }
    }
    else if (n1 == n2) {
        if (n1 > n3) {
            cout << "Largest numbers: " << n1 << " and " << n2;
        }
    }
    else if (n1 == n3) {
        if (n1 > n2) {
            cout << "Largest numbers: " << n1 << " and " << n3;
        }
    }
    else if (n2 == n3) {
        if (n2 > n1) {
            cout << "Largest numbers: " << n2 << " and " << n3;
    }
    else {
        cout << "All numbers are the same.";
    }
     
return 0;

}
