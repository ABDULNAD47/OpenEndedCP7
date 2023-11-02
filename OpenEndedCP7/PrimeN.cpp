#include<iostream>
using namespace std;
void main()
{
    int choice;
    cout << "Enter 0 to find prime numbers in a given range or 1 to find if a specific number is prime: ";
    cin >> choice;

    if (choice == 0) {
        int sn, en;
        cout << "Enter the start of the range: ";
        cin >> sn;
        cout << "Enter the end of the range: ";
        cin >> en;

        cout << "Prime numbers in the specified range are: ";
        for (int i = sn; i <= en; i++) {
            bool prime = true;
            if (i <= 0) {
                prime = false;
            }
            else {
                for (int j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        prime = false;
                        break;
                    }
                }
            }
            if (prime) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    else if (choice == 1) {
        int num;
        cout << "Enter the number to check: ";
        cin >> num;

        bool prime = true;
        if (num <= 1) {
            prime = false;
        }
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    prime = false;
                    break;
                }
            }
        }

        if (prime) {
            cout << num << " is a prime number." << endl;
        }
        else {
            cout << num << " is not a prime number." << endl;
        }
    }
    else {
        cout << "Invalid choice." << endl;
    }

}