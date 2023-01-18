#include <iostream>

using namespace std;

int add (int a, int b) {
  return (a + b);
}

int subtract (int a, int b) {
  return (a - b);
}

int multiply (int a, int b) {
  return (a * b);
}

float divide (float a, float b) {
  return (a / b);
}

int numberfive (int a, int b) {
  return (a % b);
}

int main () {
  int choice, result, input1, input2, difference;
  char yes;

  choose:
  cout << "=========================================" << endl; //41
  cout << "MENU\n";
  cout << "=========================================" << endl; //41

  cout << "1. Add\n";
  cout << "2. Subtract\n";
  cout << "3. Multiply\n";
  cout << "4. Divide\n";
  cout << "5. Modulus\n\n";

  cout << "Enter your choice (1-5): ";
  cin >> choice;

  switch (choice) {
    case 1: cout << "Enter your two integer numbers: ";
            cin >> input1 >> input2;

            result = add (input1, input2);

            goto compute;
            break;
    case 2: cout << "Enter your two integer numbers: ";
            cin >> input1 >> input2;

            difference = subtract (input1, input2);

            cout << "Result: " << difference << endl;
            break;
    case 3: cout << "Enter your two integer numbers: ";
            cin >> input1 >> input2;

            result = multiply (input1, input2);

            goto compute;
            break;
    case 4: cout << "Enter your two integer numbers: ";
            cin >> input1 >> input2;

            result = divide (input1, input2);

            goto compute;
            break;
    case 5: cout << "Enter your two integer numbers: ";
            cin >> input1 >> input2;

            result = numberfive (input1, input2);

            goto compute;
            break;
    default: cout << "Invalid choice. Try again.\n\n";
             goto choose;
             break;
  }
  
  compute:
  cout << "\n";
  cout << "Result: " << result;

  ask:
  cout << "\n";
  cout << "Press y or Y to continue: ";
  cin >> yes;

  switch (yes) {
    case 'y':
    case 'Y': goto choose;
              break;
    default: cout << "Invalid choice. Try again.";
             goto ask;
             break;
  }

  return 0;
}