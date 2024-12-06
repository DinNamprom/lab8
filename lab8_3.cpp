#include <iostream>
#include <string>
using namespace std;

int main() {
    double age,height,bounty;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    if (age > 0 && age <= 60){
        if (age <= 25) {
            cout << "Enter your height: ";
            cin >> height;
            if (height < 100) {
                name = "Chopper";
            }else if (height >= 100 && height < 180){
                name = "Usopp";
            }else if (height >= 180) {
                cout << "Enter your bounty: ";
                cin >> bounty;
                if (bounty > 1100000000){
                    name = "Zoro";
                }else {
                    name = "Sanji";
                }
            }
        }else {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty > 500000000){
                name = "Jinbe";
            }else {
                name = "Franky";
            }
        }
    }else if (age > 60) {
        name = "Brook";
    }
    cout << "Your character = " << name;
    return 0;
}
