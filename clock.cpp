#include <iostream>
#include <thread> // for sleep_for
#include <chrono> // for milliseconds

using namespace std;

int main() {
    int h, m, s;
    
    while (true) {
        cout << "Enter hour: ";
        cin >> h;
        cout << "Enter minutes: ";
        cin >> m;
        cout << "Enter seconds: ";
        cin >> s;

        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
            break; // Exit the loop if valid input is provided
        }
        else {
            system("cls");
            cout << "Invalid input. Please enter a valid time." << endl;
        }
    }

    while (true) {
        system("cls");
        cout << h << ":" << m << ":" << s << endl;
        
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        s++;
        if (s >= 60) {
            s = 0;
            m++;
        }
        if (m >= 60) {
            m = 0;
            h++;
        }
        if (h >= 24) {
            h = 0;
        }
    }

    return 0;
}
