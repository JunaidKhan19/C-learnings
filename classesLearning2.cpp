#include<iostream>
using namespace std;

/*
create call cm and inches
inches has unit data member in inches
cm has unit data mebmber in cm
use frined add(Inches i, CM c)---print total in inches and in cm both in 2 line
*/
class Inches;//forward declaration which tells compiler that is another class
class CM{
	private:
		float unit;
	public:
		CM(float unit)
		{
			this->unit=unit;
			//this pointer points to instance member this-> pointercan access datamember via arrow operator
		}
		friend void add(Inches i,CM c);
};

class Inches{
	private:
		float unit;
	public:
		Inches(float u)
		{
			unit=u;
		}
		friend void add(Inches i,CM c);
};

void add(Inches i,CM c)
{
	cout<<"\nAdding both in Inches:"<<i.unit+c.unit/2.5;
	cout<<"\nAdding both in CMs:"<<i.unit*2.5+c.unit;
}


//operator overloading
class Complex{
    private:
    int real,imaginary;	
    public:
    void set_data(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }

    void display_data(){
        cout<<"\n"<<real<<" + "<<imaginary<<"i";
    }

    friend Complex operator+(Complex n1,Complex n2);
    friend void operator-(Complex &n1,Complex &n2);
};

Complex operator+(Complex n1,Complex n2){
    Complex temp;
    temp.real=n1.real+n2.real;
    temp.imaginary=n1.imaginary+n2.imaginary;
    return temp;
}

void operator-(Complex &n1,Complex &n2){
    n1.real-=n2.real; //n1.real=n1.real-n2.real
    n1.imaginary-=n2.imaginary;
}


class Time{
    int hours, minutes, seconds;

    public:
    void set_data(int hrs, int min, int sc){
        hours=hrs;
        minutes=min;
        seconds = sc;
    }

    void display_time(){
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }

    friend Time operator+(Time &t1, Time &t2);
};

Time operator+(Time &t1, Time &t2){
    Time temp;
    temp.seconds = t1.seconds+t2.seconds;
    temp.minutes = t1.minutes+t2.minutes;
    temp.hours = t1.hours+t2.hours;

    temp.seconds = temp.seconds%60;
    temp.minutes += (temp.seconds/60);
    temp.hours += (temp.minutes/60);
    temp.minutes = temp.minutes%60;
    return temp;
}

int main() 
{
	Inches i(6.3f);
	CM  c(12.5f);
	add(i,c);
    int i = 78;

    Complex n1,n2,n3;
    n1.set_data(10,5);
    n1.display_data();
    n2.set_data(2,6);
    n2.display_data();
    n3=n1+n2;//  operator+(n1,n2);

    cout<<"\n------------";
    n3.display_data();	
    n1-n2;
    n1.display_data();

    Time t1, t2, t3;
    t1.set_data(1,30,45);
    t2.set_data(2,45,55);
    t3 = t1 + t2;
    t3.display_time();
}

