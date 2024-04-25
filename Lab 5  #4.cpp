#include <iostream>
#include <limits>

using namespace std;

int main() {
    int Num; 

    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";

        
        if (!(cin >> Num ) {
            cout << "That's not a valid integer. Please try again." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (Num >= 5 && Num <= 10) {
            
            cout << "your input value: " <<Num << "  " << "Is accepted";
            break;
        } else {
            cout << "The value is not between 5 and 10. Please try again." << endl;
        }
    }
}