#include <iostream>
using namespace std;

int cal(int, int);

int main(){
    int choice, num1, num2, add;

    do{
        cout << "Enter 1 for (+) :-\n";
        cout << "Enter 2 for (-) :-\n";
        cout << "Enter 3 for (*) :-\n";
        cout << "Enter 4 for (/) :-\n";
        cout << "Enter 5 for (%) :-\n";
        cout << "Enter 0 for Exit :-\n";
        cin >> choice; 
    } while (choice >= 6);

    cout << "Enter your first num :" << endl;
    cin >> num1;

    cout << "Enter your second num :" << endl;
    cin >> num2;

    switch (choice){
    case 1: 
        cout << "Addition of first and second is : " << num1 + num2;
        break;
    case 2: 
        cout << "Substractiom of first and second is : " << num1 - num2;
        break;
    case 3: 
        cout << "multiplication of first and second is : " << num1 * num2;
        break;
    case 4: 
        cout << "Division of first and second is : " << num1 / num2;
        break;
    case 5: 
        cout << "modulo of first and second is : " << num1 % num2;
        break;
    case 6: 
        cout << "Thank you for visiting" << num1 % num2;
        break;
    default: 
        break;
    }

    return 0;
}

int cal(int a, int b){
    int num1, num2, add;
    cout << "Addtion of first and second is : " << a + b;

    add = num1 + num2;

    return add;
}