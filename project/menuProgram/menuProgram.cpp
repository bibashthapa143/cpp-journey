#include <iostream>
using namespace std;

// Function to check if a number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        cout << num << " is Even" << endl;
    else
        cout << num << " is Odd" << endl;
}

// Function to check if a number is prime
void checkPrime(int num) {
    if (num <= 1) {
        cout << num << " is Not Prime" << endl;
        return;
    }
    bool isPrime = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << num << (isPrime ? " is Prime" : " is Not Prime") << endl;
}

// Function to find factorial
void factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    cout << "Factorial of " << num << " = " << fact << endl;
}

// Function to reverse a number
void reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    cout << "Reversed number = " << reversed << endl;
}

// Function to find sum of array elements using pointer
void arraySum(int arr[], int size) {
    int* ptr = arr;   // pointer to first element
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);   // access using pointer arithmetic
    }
    cout << "Sum of array elements = " << sum << endl;
}

int main() {
    int choice, num;
    char again;

    do {
        // Menu display
        cout << "\n===== C++ Assignment Menu =====\n";
        cout << "1. Check Even or Odd\n";
        cout << "2. Check Prime Number\n";
        cout << "3. Find Factorial\n";
        cout << "4. Reverse a Number\n";
        cout << "5. Sum of Array Elements\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> num;
                checkEvenOdd(num);
                break;

            case 2:
                cout << "Enter a number: ";
                cin >> num;
                checkPrime(num);
                break;

            case 3:
                cout << "Enter a number: ";
                cin >> num;
                factorial(num);
                break;

            case 4:
                cout << "Enter a number: ";
                cin >> num;
                reverseNumber(num);
                break;

            case 5: {
                int arr[5];
                cout << "Enter 5 numbers:\n";
                for (int i = 0; i < 5; i++) {
                    cin >> arr[i];
                }
                arraySum(arr, 5);
                break;
            }

            case 0:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice, try again.\n";
        }

        // After each action (except exit), ask if user wants to continue
        if (choice != 0) {
            do {
                cout << "\nDo you want to do another operation? (y/n): ";
                cin >> again;

                if (again != 'y' && again != 'Y' && again != 'n' && again != 'N') {
                    cout << "Invalid input. Please enter 'y' or 'n'.\n";
                }
            } while (again != 'y' && again != 'Y' && again != 'n' && again != 'N');

            if (again == 'n' || again == 'N') {
                cout << "Exiting program. Goodbye!\n";
                break;   // exit the loop
            }
        }

    } while (choice != 0);

    return 0;
}