#include <iostream>
using namespace std;

int main() {

    float a,b;
    float sum = 0;
    int i;
    string opp;


    cout << "This calculator can preform Additon, Subtraction, Multiplicaton, and Division (with just two numbers)\n";
    cout << "=======================================================================================================\n";


    for (i = 1; i > 0; i++) {
        cout << " Enter + - * / or press 1 to quit!\n";
        cin >> opp;

        if (opp == "+") {
            cout << "Enter a number: \n";
            cin >> a;

            cout << "Enter another number \n";
            cin >> b;
            sum = a + b;
            cout << "Your total is " << sum << endl;
            cout << "-------------------------------\n";
        } else if (opp == "-") {
            cout << "Enter a number: \n";
            cin >> a;

            cout << "Enter another number \n";
            cin >> b;
            sum = a - b;
            cout << "Your total is " << sum << endl;
            cout << "-------------------------------\n";
        } else if (opp == "*") {
            cout << "Enter a number: \n";
            cin >> a;

            cout << "Enter another number \n";
            cin >> b;
            sum = a * b;
            cout << "Your total is " << sum << endl;
            cout << "------------------------------\n";
        } else if (opp == "/") {
            cout << "Enter a number: \n";
            cin >> a;

            cout << "Enter another number \n";
            cin >> b;
            sum = a / b;
            cout << "Your total is " << sum << endl;
            cout << "------------------------------\n";

        } else if (opp == "1") {
            break;
        } else {
            cout << "You did not enter the right opperator";
        }
    }
    return 0;
}
