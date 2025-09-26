#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Q1. Area of circle
    float radius;
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    cout<<"Area of circle is : "<<3.14*radius*radius<<"\n";

    //Q2. Simple Interest (Formula: SI=(PtimesRtimesT)/100)
    double principalAmount;
    int time;
    int rateOfInterest;
    cout<<"enter principal amount\n";
    cin>>principalAmount;
    cout<<"enter rate of interest\n";
    cin>>rateOfInterest;
    cout<<"enter time period\n";
    cin>>time;
    cout<<"the simple interest is: "<<((principalAmount*rateOfInterest*time)/100);
    
    //Q3. Fahrenheit to Celsius: Convert temperature from Fahrenheit to Celsius. (Formula: C=(F−32)times5/9)
    float fahrenheit;
    cout<<"enter the temperature in Fahrenheit: ";
    cin>>fahrenheit;
    cout<<"the temperature in celcius is :"<<(fahrenheit-32)*5/9;

    //Q4. Gross Salary: Input the basic salary. Assume HRA is 10% of basic salary and DA is 25% of basic salary. (Formula: GrossSalary=Basic+HRA+DA)
    int basicSalary;
    cout<<"enter basic salary to calculate gross salary :";
    cin>>basicSalary;   
    cout<<"the gross salary is :"<<basicSalary+basicSalary*0.10+basicSalary*0.25;

    //Q5. Perimeter of a Rectangle: Write a program that takes the length and width of a rectangle as input and calculates its perimeter. (Formula: P=2times(length+width))
    float length;
    float width;
    cout<<"enter the length of rectangle :";
    cin>>length;
    cout<<"enter the width of rectangle :";
    cin>>width;
    cout<<"the perimeter of the rectangle is :"<<2*(length + width);

    //Q6. Swap Two Numbers: Swap the values of two variables without using a third (temporary) variable.
    int num1 = 5;
    int num2 = 10;
    cout<<"num1 : "<<num1<<" & num2 : "<<num2;
    cout<<"num1 : "<<(num1+num2)-num1<<" & num2 : "<<(num2+num1)-num2;

    //Q7. Sum of Three Numbers: Find the sum and average of three numbers.
    int num1, num2, num3;
    cout<<"enter the three numbers :";
    cin>>num1>>num2>>num3;
    cout<<"the sum of the three numbers is :"<<num1+num2+num3<<"\nthe average of the sum of three numbers is :"<<(num1+num2+num3)/3;
    
    //Q8. Area of triangle/
    int base;
    int height;
    cout<<"enter base of triangle :";
    cin>>base;
    cout<<"enter height of triangle :";
    cin>>height;
    cout<<"the area of triangle is :"<<0.5*base*height ;

    //Q9. Distance Between Two Points (x1,y1) and (x2,y2) in a 2D plane. (Formula: D=sqrt((x2−x1)^2+(y2−y1)^2)) pow(),sqrt()
    float x1, x2, y1, y2;
    cout<<"enter the point 1's x (x1) ";
    cin>>x1;
    cout<<"enter the point 1's x (y1) ";
    cin>>y1;
    cout<<"enter the point 2's x (x2) ";
    cin>>x2;
    cout<<"enter the point 2's x (y1) ";
    cin>>y2;
    cout<<"the distance between two points is "<<sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    //Q10. Compound Interest: Calculate compound interest. Take principal, rate, and time as input. (Formula: Amount=P(1+R/100)t)
    double principalAmount, time, rate;
    cout<<"enter the principal amount, rate, time : ";
    cin>>principalAmount>>rate>>time;
    cout<<"the compound interest is :"<<principalAmount*pow((1+rate/100),time) ;
}