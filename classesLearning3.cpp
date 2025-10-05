#include <iostream>
using namespace std;

//Multi-level inheritence: descendents of classes like classA->B->C
class Vehicle{
    string make;
    int model;

    public:
    Vehicle(string make, int model){
        this->make = make;
        this->model = model;
    }

    void setProperties(string make, int model){
        this->make = make;
        this->model = model;
    }

    void displayinfo(){
        cout<<"Vehicle is ready";
        cout<<make;
        cout<<model;
    }
};

class Car: public Vehicle{
    string make;
    int model;
    int num_doors;

    public:
    Car(string make, int model, int num_doors): Vehicle(make, model){
        this->make = make;
        this->model = model;
        this->num_doors = num_doors;
    }

    void setProperties(string make, int model, int num_doors){
        this->make = make;
        this->model = model;
        this->num_doors = num_doors;
    }

    void displayinfo(){
        Vehicle::displayinfo();
        cout<<"no. of doors: ";num_doors;
    }
};

class ElectricCar: public Car{
    string make;
    int model;
    int num_doors;
    int battery_capasity;

    public:
    ElectricCar(string make, int model, int num_doors): Car(make, model, num_doors){
        this->make = make;
        this->model = model;
        this->num_doors = num_doors;
    }

    void setProperties(string make, int model, int num_doors, int battery_capasity){
        this->make = make;
        this->model = model;
        this->num_doors = num_doors;
        this->battery_capasity = battery_capasity;
    }

    void displayinfo(){
        Car::displayinfo();
        cout<<"battery capacity: "<<battery_capasity;
    }
};

//Heirarchical inheritence: 1 base class multiple child class
class Shape{
    public:
    virtual void calculate_area()=0;
};

class Rectangle: virtual public Shape{
    double length;
    double breadth;

    public:
    void setProperties(double length, double breadth){
        this->length;
        this->breadth;
    }

    double calculate_area(){
        return length*breadth;
    }
};

class Circle: virtual public Shape{
    double radius;

    public:
    void setProperties(double radius){
        this->radius;
    }

    double calculate_area(){
        return 3.14*radius*radius;
    }
};



int main(){
    //multi-lievel 
    string make = "Tesla";
    string model = "Model S";
    ElectricCar my_car(make, model, 4, 100);

    cout << "Displaying information for my Electric Car:" << endl;

    my_car.display_info();

   
    // heirarchical
    Shape   *shapes[2];//array of pointers
    shapes[0] = new Rectangle(5.0, 4.0);//allocated memory 
    shapes[1] = new Circle(3.0);//allocated memory

    for (int i = 0; i < 2; i++) {
        cout << "The area is: " << shapes[i]->calculate_area() << endl;
                                  //pointer to method
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];//free
    } 

    return 0;


}