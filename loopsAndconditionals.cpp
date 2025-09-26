#include <iostream>

using namespace std;

int main(){
    //Q1. Prime Number Check: Check if a given number is a prime number.
    int num;
    cout << "Enter number to check if prime or not: ";
    cin >> num;
    if(num%2 != 0 && num%3 != 0 && num%num == 0){
            cout << num << " is prime number";
    } else {
            cout << num << " is not a prime number";

    //Q2. Print Primes in a Range: Print all prime numbers between two given numbers (e.g., between 1 and 100).
    int num, num2;
    cout << "Enter the number from where to start printing even number: " << endl;
    cin >> num;
    cout << "Enter the number till where to end printing even number: " << endl;
    cin >> num;
    if (num < num2){
        for (int i = num; i<=num2 ; i++){
            if(i%2==0){
                cout << i << " ";
            } else continue;
        }
    } else {
        cout << "enter number 1 less than number 2";
    }
    }

    //Q3. Armstrong Number: Check if a number is an Armstrong number. 
    //(An n-digit number that is equal to the sum of the nth powers of its digits. e.g., 153 = 1^3 + 5^3 + 3^3).
    int num, num_copy, digit = 0, sum = 0, no_of_digits = 0, mul = 1;
    cout << "Enter a number to check Armstrong number: " << endl;
    cin >> num;

    num_copy = num;
    while (num_copy > 0){
        num_copy = num_copy/10;
        no_of_digits++;
    }

    num_copy = num;
    while (num_copy > 0){
        digit = num_copy%10;
        for(int i = 1; i<= no_of_digits;i++){
            mul *= digit;
        }
        sum += mul;
        num_copy = num_copy/10;
        mul = 1;
    }

    if (num == sum) cout << "number is Armstrong";
    else cout << "number is not armstrong";

    //Q4. Palindrome Number: Check if a number is a palindrome (reads the same forwards and backward, e.g., 121).
    int number, rno = 0, temp, digit = 0;
    cout << "Enter number to check palindrome: ";
    cin >> number;

    temp = number;
    while (temp > 0){
        digit = temp%10;
        temp = temp/10;
        rno = rno*10 + digit;
    }
    (number == rno)? cout << "Is plaindrome": cout << "Is not palindrome";

    //Q5. Sum of Digits: Calculate the sum of the digits of a given number.
    int num, digit = 0, sum = 0;
    cout << "Enter the number: " << endl;
    cin >> num;
    while(num > 0){
        digit = num%10;
        num = num/10;
        sum += digit;
    } 
    cout << "Sum of digits is :" << sum;

    //Q6. Factors of a Number: Find all the factors of a given positive integer.
    int num;
    cout << "Enter number to find factors of: ";
    cin >> num;
    for (int i = 1; i<=(num/2); i++){
        if(num%i == 0){
            cout << i << " ";
        }
    }
    cout << num;

    //////
    //Q7. GCD/HCF: Find the Greatest Common Divisor (GCD) or Highest Common Factor (HCF) of two numbers.
    int num1, num2, gcd = 1, temp = 0;
    cout << "finding Greatest common divisor: ";
    cout << "Enter num 1: ";
    cin >> num1;
    cout << "Enter num 2: ";
    cin >> num2;

    if (num2>num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for(int i = 1; i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            gcd = i;
        }
    }
    cout << "Greatest common divisor is :" << gcd;

    //Q8. LCM: Find the Least Common Multiple (LCM) of two numbers.

    //Q9. Perfect Number: Check if a number is a perfect number. 
    //(A number that is equal to the sum of its proper divisors, e.g., 6 = 1+2+3).
    int num, sum = 0;
    cout << "enter the number to check if perfect number: ";
    cin >> num;

    for(int i = 1; i<=(num/2); i++){
        if (num%i == 0){
            sum += i;
        }
    }
    (sum == num)? cout << "Is a perfect number" : cout << "is not a perfect number";

    //Q10. Decimal to Binary: Convert a decimal number to its binary equivalent.

    //Q11. Binary to Decimal: Convert a binary number to its decimal equivalent.

    ////

    //Q12. Strong Number: Check if a number is a Strong Number. 
    //(A number where the sum of the factorial of its digits equals the number itself)
    //e.g., 145 = 1! + 4! + 5!.
    int num, numcopy, digit, sum = 0, factorial = 1;
    cout << "Enter number to get if strong or not: ";
    cin >> num;
    numcopy = num;
    while(numcopy>0){
        digit = numcopy%10;
        numcopy = numcopy/10;
        for(int i = 1; i<=digit; i++){
            factorial *= i; 
        }
        sum += factorial;
        factorial = 1;
    }
    (num == sum)? cout << "It is a Strong number" : cout << "it is a not a Strong number";

    //Q13. Frequency of Digits: Find the frequency of each digit in a given integer.
    int num, num2, digit = 0, count = 0;
    cout << "enter number: ";
    cin >> num;
    cout << "enter digit to find frequency of: ";
    cin >> num2;
    while(num > 0){
        digit = num%10;
        if (num2 == digit) count++;
        num = num/10;
    }
    cout << "frequency of digit the is " << count;

    //Q14. Menu-Driven Program: Create a menu-driven program that asks the user to choose between 
    //finding the factorial of a number, checking for a prime number, or checking for an odd/even number. 
    //The program should loop until the user chooses to exit.
    int num, factorial = 1, choice = 0;
    do {
        cout << "select the process to perform: " << endl;
        cout << "1. factorial " << endl;
        cout << "2. check prime " << endl;
        cout << "3. check odd/even " << endl;
        cout << "0. exit " << endl;
        cin >> choice;
    
        switch (choice){
        case 1:
            cout << "enter a number: ";
            cin >> num;
            for(int i = 1; i<=num; i++){
                factorial *= i;
            }
            cout << "factorial of num " << num << " is " << factorial << endl;
            break;
        case 2:
            cout << "enter a number: ";
            cin >> num;
            for(int i = 2; i <= num/2 ; i++){
                if (num%i == 0){
                    cout << "this number is not a prime number" << endl;
                }
                else cout << "number is prime" << endl;
            }
            break;
        case 3:
            cout << "enter a number: ";
            cin >> num;
            if (num%2 == 0) cout << "number is even" << endl;
            else cout << "number is odd" << endl;
            break;
        case 0:
            break;
        default:
            break;
        }
    } while (choice != 0);   

    //Q 15. Number Guessing Game: A simple game where the program generates a random number and the user 
    //has to guess it. The program gives hints like "Too high" or "Too low".
    // Seed the random number generator using the current time 
    // This ensures a different sequence of random numbers each time the program runs 
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX (typically at least 32767) 
    //int randomNumber1 = rand(); 
    //cout << "Random number 1: " << randomNumber1 << endl;

    // Generate a random number within a specific range (e.g., 1 to 100) 
    int min = 1, max = 100; 
    int randomNumberInRange = rand() % (max - min + 1) + min; 
    int userInput;
    do{
        cout << "Guess a number between 1 - 100: " << endl; 
        cin >> userInput;
        if (userInput > randomNumberInRange){
            cout << "number Too high!!";
        } else if (userInput < randomNumberInRange){
            cout << "number Too low!!";
        } else if ( userInput == randomNumberInRange ){
            cout << "Correct answer";
        }

    } while (userInput != randomNumberInRange);

    //Pattern Printing (Essential for interviews)
    /*16. Half Pyramid of *: 
    * 
    ** 
    *** 
    **** 
    ***** 
    */
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    } 
    
    /*17. Inverted Half Pyramid of *: 
    ***** 
    **** 
    *** 
    ** 
    *         
    */

    for (int i = 1; i<=5; i++){
        for (int j = 5; j>=i; j--){
            cout << "*";
        }
        cout << endl;
    } 
    
    /*18. Half Pyramid of Numbers: 
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5
    */
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    } 

    /*19. Floyd's Triangle:
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    */
    int num = 1, i, j;
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=i; j++){
            cout << num;
            num++;
        } 
        cout << endl;
    } 

    /*20. Full Pyramid of *: 
        * 
       *** 
      ***** 
     ******* 
    *********
    */
    int num = 1, i, j, k;
    for (int i = 1; i<=5; i++){
        for (int j = 5; j>i; j--){
            cout << " ";
        } 
        for (int k = num; k>=1; k--){
            cout << "*";
        }
        num = num+2;
        cout << endl;
    }

}