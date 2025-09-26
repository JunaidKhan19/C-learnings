#include <iostream>

using namespace std;

int main(){
    //Q1 even or odd
    int yourNumber;
    cout<<"enter a number to find even or odd :";
    cin>>yourNumber;
    if(yourNumber % 2 == 0) cout<<yourNumber<<" is even.";
    else if(yourNumber % 2 == 1) cout<<yourNumber<<" is odd";
    else cout<<"enter a valid integer value";

    //Q2 find leap year 
    int year;
    cout<<"enter the year :";
    cin>>year;
    if((year % 4 == 0 && year % 100 != 0)||year % 400 == 0) cout<<"this is a leap year";
    else cout<<"this is not a leap year"; 

    //Q3. Largest of Three: Find the largest among three numbers entered by the user.
    int num1,num2,num3;
    cout<<"enter 3 numbers to find greatest: \n";
    cin>>num1>>num2>>num3 ;
    if(num1>num2 && num1>num3) cout<<num1<<" is greater";
    else if(num2>num1 && num2>num3) cout<<num2<<" is greater";
    else cout<<num3<<" is greater";

    //Q4. Vowel or Consonant: Check whether an input character is a vowel (a, e, i, o, u) or a consonant.
    char alph;
    cout<<"enter an alphabet to find vowel or consonent :\n";
    cin>>alph;
    if(alph == 'a' ||alph == 'e' ||alph == 'i' ||alph == 'o' ||alph == 'u') cout<<"this is a vowel";
    else cout<<"this is a consonenet";

    //Q5. Positive, Negative, or Zero: Check if a number is positive, negative, or zero.
    int num;
    cout<<"Enter number to check if positive or negative";
    cin>>num;
    if(num > 0) cout<<"number is positive" ;
    else if(num < 0) cout<<"number is negative";
    else cout<<"number is zero";

    //Q6. Voting Eligibility: Check if a person is eligible to vote based on their age (age >= 18).
    int age;
    cout << "enter age :";
    cin >> age;
    if (age >= 18) cout << "vote";
    else cout<< "can not vote";

    //Q7. Grade Calculation: Assign a grade (A, B, C, D, F) based on a student's percentage marks. (e.g., >90% is A, 80-89% is B, etc.).
    float percentage;
    cout<< "enter percentage: ";
    cin>> percentage;
    if (percentage >= 90) cout<<"A";
    else if (percentage >=80) cout<<"B";
    else if (percentage >=60) cout<<"C";
    else if (percentage >=40) cout<<"D";
    else cout<<"F";

    //Q8. Triangle Type: Take three sides of a triangle as input and check if it is equilateral (all sides equal), 
    //isosceles (two sides equal), or scalene (no sides equal).
    int side1, side2, side3;
    cout<<"enter the sides of triangle: ";
    cin>>side1>>side2>>side3;
    if(side1 == side2 && side2 == side3) cout<<"equilateral triangle";
    else if(side1 == side2 || side2 == side3 || side1 == side3) cout<<"isosceles triangle";
    else cout<<"scalene triangle";

    //Q9. Character Type: Check if a character is an alphabet, a digit, or a special character.
    char something;
    cout<<"press any key from either alphabets, digits, special characters(0-9): ";
    cin>>something;
    if (something >= 'a' && something <= 'z') cout<<"it is an alphabet.";
    else if(something >= 0 || something <= 9) cout<<"it is a digit.";
    else cout<<"it is a special character"; //NOTE: special characters arent printing

    //Q10. Simple Calculator to performs addition, subtraction, multiplication, or division based on the user's choice 
    //using a switch statement or if-else if ladder.
    int a, b;
    char symbol;
    cout<<"enter valid integers :";
    cin>>a>>b;
    cout<<"enter operation to perform \n + is for addition\n - is for subtraction \n * is for multiplication \n / for division:";
    cin>>symbol;
    switch(symbol){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
    }

}