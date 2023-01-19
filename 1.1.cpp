#include <iostream>
#include <iomanip>

using namespace std;

//for addition
int add (int a, int b) {
    return (a + b);
}

//for subtraction
int subtract (int a, int b) {
    return (a - b);
}

//for multiplication
int multiply (int a, int b) {
    return (a * b);
}

//for division
float divide (float a, float b) {
    return (a / b);
}

//for modulus
int numfive (int a, int b) {
    return (a % b);
}

int main()
{
    int choice, input1, input2, result;
    char loop;
    
    do {
        menu:
        cout << "=========================================" << endl; //41
        cout << setw(22) << "MENU\n";
        cout << "=========================================" << endl; //41 
        
        cout << setw(10) << "1. Add" << endl;
        cout << setw(15) << "2. Subtract" << endl;
        cout << setw(15) << "3. Multiply" << endl;
        cout << setw(13) << "4. Divide" << endl;
        cout << setw(14) << "5. Modulus" << endl;
        
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        
        //for the menu choice
        // if the number entered is not 1-5, the program would go back to the menu
        
        switch (choice) {
            case 1: cout << "Enter your two integer numbers: ";
                    cin >> input1 >> input2;
                    
                    cout << "\n";
                    result = add (input1, input2);
                    cout << "Result: " << result;
                    break;
            case 2: cout << "Enter your two integer numbers: ";
                    cin >> input1 >> input2;
                    
                    cout << "\n";
                    result = subtract (input1, input2);
                    cout << "Result: " << result;
                    break;
            case 3: cout << "Enter your two integer numbers: ";
                    cin >> input1 >> input2;
                    
                    cout << "\n";
                    result = multiply (input1, input2);
                    cout << "Result: " << result;
                    break;
            case 4: cout << "Enter your two integer numbers: ";
                    cin >> input1 >> input2;
                    
                    cout << "\n";
                    result = divide (input1, input2);
                    cout << "Result: " << result;
                    break;
            case 5: cout << "Enter your two integer numbers: ";
                    cin >> input1 >> input2;
                    
                    cout << "\n";
                    result = numfive (input1, input2);
                    cout << "Result: " << result;
                    break;
            default: cout << "Invalid choice. Try again." << endl;
                     goto menu;
                     break;
        }
        
        cout << endl;
        cout << "Do you want to continue? [Y/N] ";
        cin >> loop;
        
        cout << "\n\n";
    } while (loop == 'y' && 'Y');
    
    return 0;
}
