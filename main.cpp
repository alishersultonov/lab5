#include <iostream>
using namespace std;

/*
//Poblem1.1

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
//Problem1.2

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
//Problem1.3
int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
*/

/*
//Problem1.3
int main() {
    int sum = 0;
    int N;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
*/

/*
//Problem1.4

int main() {
    int N, sum = 0;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
*/

/*
//Problem1.5

int main() {
    double sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "Average: " << sum / 10 << endl;
    return 0;
}
*/

/*
//Problem1.6
int main() {
    int N;
    double sum = 0;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << "Average: " << sum / N << endl;
    return 0;
}
*/

/*
//Problem2
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
//Problem2.2
int main() {
    for (int i = 2; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
//Problem2.3
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
//Problem2.4
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 2; i <= N; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
//Problem2.5
int main() {
    for (int i = 10; i <= 100; i += 10) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
//Problem2.6
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 10; i <= N; i += 10) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
//Problem3
int main() {
    int count = 0;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " ";
        count++;
        if (count % 5 == 0) cout << endl;
    }
    return 0;
}
*/

/*
//Problem 4:
int main() {
    int n;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial of a negative number is not defined." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " is " << factorial << endl;
    }
    return 0;
}
*/
/*
//Problem5
int main() {
    int numClasses;
    double totalCredits = 0, weightedSum = 0;
    cout << "Enter the number of classes: ";
    cin >> numClasses;
    for (int i = 0; i < numClasses; i++) {
        double credits, grade;
        cout << "Enter credits and GPA: ";
        cin >> credits >> grade;
        totalCredits += credits;
        weightedSum += credits * grade;
    }
    double totalGPA = weightedSum / totalCredits;
    cout << "Your total GPA is: " << totalGPA << endl;
    return 0;
}
*/

/*

//Problem6
int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        int numClasses;
        double totalCredits = 0, weightedSum = 0;

        cout << "Enter the number of classes for student " << i + 1 << ": ";
        cin >> numClasses;

        for (int j = 0; j < numClasses; j++) {
            double credits, grade;
            cout << "Enter credits and GPA: ";
            cin >> credits >> grade;
            totalCredits += credits;
            weightedSum += credits * grade;
        }

        double totalGPA = weightedSum / totalCredits;
        cout << "Student " << i + 1 << " GPA: " << totalGPA << endl;
    }

    return 0;
}

*/

/*
//Problem7
int main() {
    int size;
    cout << "Enter size of square: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

*/

/*
//Problem8
int main() {
    int height;
    cout << "Enter height: ";
    cin >> height;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
*/


//Problem9
int main() {
    int num;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> num;
    if (num <= 1) isPrime = false;
    else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) cout << "Number is prime" << endl;
    else cout << "Number is not prime" << endl;
    return 0;
}

/*
//Problem
int main() {
    int num1, num2, result;
    int choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Choose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;
    switch (choice) {
    case 1:
        result = num1 + num2;
        cout << "Result: " << result << endl;
        break;
    case 2:
        result = num1 - num2;
        cout << "Result: " << result << endl;
        break;
    case 3:
        result = num1 * num2;
        cout << "Result: " << result << endl;
        break;
    case 4:
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error! Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Invalid choice! Please enter 1, 2, 3, or 4." << endl;
    }

    return 0;
}
*/