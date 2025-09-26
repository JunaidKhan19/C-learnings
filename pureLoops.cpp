#include <iostream>

using namespace std;

int main(){
    //Q1.Print 1 to N: Print all natural numbers from 1 to N, where N is input by the user.
    int num;
    cout << "Enter number till where you want to print: " << endl;
    cin >> num;
    for(int i = 1; i<=num; i++){
        cout << i << " ";
    }

    //Q2.Multiplication Table: Generate the multiplication table of a given number up to 10.
    int num;
    cout << "Enter the number to get the table of : ";
    cin >> num;
    for(int i = 1; i<=10; i++){
        cout << num << "x" << i << "=" << num*i << endl;
    }

    //Q3.Sum of N Numbers: Calculate the sum of the first N natural numbers.
    int num, sum = 0;
    cout << "Enter the number till where to add : ";
    cin >> num;
    for(int i = 1; i<=num ; i++){
        sum += i;
    }
    cout << sum << endl;

    //Q4.Factorial: Find the factorial of a number. (e.g., 5=5times4times3times2times1)
    int num, factorial = 1;
    cout << "Enter the number to compute factorial of : ";
    cin >> num;
    while (num > 0){
        factorial *= num;
        num--;
    }
    cout << factorial << endl;

    //Q5.Reverse a Number: Write a program to reverse a given integer. (e.g., input 12345, output 54321).
    int num;
    cout << "Enter the number to reverse : ";
    cin >> num;
    while(num>0){
        cout << num%10;
        num = num/10;
    }
    
    //Q6.Count Digits: Count the number of digits in an integer.
    int num, digit = 0, count = 0;
    cout << "Enter the number to count digits of : ";
    cin >> num;
    while(num>0){
        digit = num%10;
        num = num/10;
        if(digit >= 0) count++;
    }
    cout << count << endl;

    //Q7.Power of a Number: Calculate the value of one number raised to the power of another (e.g., compute xy).
    int base, power;
    cout << "\nEnter the base number : ";
    cin >> base;
    cout << "\nEnter the power number : ";
    cin >> power;
    while(power > 1){
        base *= base; 
        power--;
    }
    cout << base;

    //Q8.Fibonacci Series: Print the first N terms of the Fibonacci sequence (0, 1, 1, 2, 3, 5, ...).
    int num, num1 = 0, num2 = 1;
    cout << "Enter the number to print fibonacci series: ";
    cin >> num;
    cout << num1 << " " << num2;
    for(int i = 3; i<=num; i++){
        int fib = num1 + num2;
        cout << " " << fib;
        num1 = num2;
        num2 = fib;
    }

    //Q9.Sum of Even Numbers: Find the sum of all even numbers up to N.
    int num, sum = 0;
    cout << "Enter the number to print sum of all even numbers till there: ";
    cin >> num;
    for(int i = 1; i<=num; i++){
        if(i%2 == 0) sum+=i;
    }
    cout << sum;

    //Q10. Square Pattern: Print a 5x5 square of asterisks (*).
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            cout << "* ";
        }
        cout << endl;
    }
}