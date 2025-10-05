#include <iostream>
using namespace std;

//Q1. Challenge 1: The Student Enrollment System
class Student{
    int id;
    string name;
    float score;
    static int id_generator;

    public:
    Student(string name, float score){
        this->id = ++id_generator;
        this->name = name;
        this->score = score;
    }

    void display_details(){
        cout<<"\nId: "<<id;
        cout<<"\nName: "<<name;
        cout<<"\nScore: "<<score;
    }
};
int Student:: id_generator = 100;

//Q2. Challenge 2: The Library Management System
class Library{
    string author, title,  isbn;

    public:
    Library(){
        author = "The Hobbit";
        title = "J.R.R. Tolkien";
        cout<<"\nBook '"<<title<<"' by '"<<author<<"' created.";
    }

    Library(string title, string author, string isbn){
        this->isbn = isbn;
        this->author = author;
        this->title = title;
        cout<<"\nBook '"<<title<<"' by '"<<author<<"' with ISBN '"<<isbn<<"' created.";
    }

    ~Library(){
        cout<<"\nBook '"<<title<<"' is being destroyed";
    }
};

//Q3. Challenge 3: The Online Store Inventory
class Product{
    int id, num;
    double price;
    string name;
    static int id_generator, num_generator;

    public:
    Product(string name, double price){
        this->id = ++id_generator;
        this->num = ++num_generator;
        this->name = name;
        this->price = price;
    }

    void display_details(){
        cout<<"\nProduct "<<num<<": "<<name<<"(ID: "<<id<<", Price: $"<<price<<")";
    }
};
int Product::id_generator = 100;
int Product::num_generator = 0;

//Q4. Challenge 4: The Mathematical Operations
class Calculator{
    int num1, num2;
    double num3, num4;

    public:
    void add(int a, int b){
        num1 = a;
        num2 = b;
        cout<<"\nSum of "<<num1<<", "<<num2<<" is: "<< num1+num2;
    }
    
    void add(double a, double b){
        num3 = a;
        num4 = b;
        cout<<"\nSum of "<<num3<<", "<<num4<<", and "<<num3<<" is: "<< num3+num4;
    }

    void add(int a, int b, double c){
        num1 = a;
        num2 = b;
        num3 = c;
        double sum = num1+num2+num3;
        cout<<"\nSum of "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<sum;
    }
};

//Q5. Challenge 5: The Vector Operations
class Vector2D{
    float x, y;

    public:
    Vector2D(){
        x = 0;
        y = 0;
    } 

    Vector2D(float x, float y){
        this->x = x;
        this->y = y;
        cout<<"\n("<<x<<","<<y<<")";
    } 

    void display_details(){
        cout<<"\nResultant Vector: ("<<x<<", "<<y<<")";
    }

    friend Vector2D operator+(Vector2D v1, Vector2D v2);
};
Vector2D operator+(Vector2D v1, Vector2D v2){
    Vector2D result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

//Q6. Challenge 6: The Employee Hierarchy
class Employee{
    protected:
    string name, employee_id;

    public:
    Employee(string name, string employee_id){ 
        this->name = name;
        this->employee_id = employee_id;
    }

    void display_info(){
        cout<<"\nEmployee Name: "<<name;
        cout<<"\nID: "<<employee_id;
    };
};

class Manager: public Employee{
    int team_size;

    public:
    Manager(string name, string employee_id,int team_size):Employee(name, employee_id){
        this->team_size = team_size;
    }

    void display_info(){
        Employee::display_info(); 
        cout<<"\nTeam Size: "<<team_size;
    };
};

//Q7. Challenge 7: The University System
class Person{
    protected:
    string name;
    int age;

    public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void display_info(){
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
    }
};

class Students:public Person{
    protected:
    string student_id;

    public:
    Students(string name, int age, string student_id):Person(name, age){
        this->name = name;
        this->age = age;
        this->student_id = student_id;
    }

    void display_info(){
        Person::display_info();
        cout<<"\nStudent ID: "<<student_id;
    }
};

class GraduateStudents:public Students{
    string thesis_title;

    public:
    GraduateStudents(string name, int age, string student_id, string thesis_title):Students(name, age, student_id){
        this->name = name;
        this->age = age;
        this->student_id = student_id;
        this->thesis_title = thesis_title;
    }

    void display_info(){
        Students::display_info();
        cout<<"\nThesis Title: "<<thesis_title;
    }
};

//Q8. Create a base class Subscription with a pure virtual method calculate_bill().
class Subscription{
    public:
    virtual void calculate_bill()=0;
};

class BasicSubscription: public Subscription{
    int bill;

    public:
    BasicSubscription(int bill){
        this->bill = bill;
    }

    void calculate_bill(){
        cout<<"\nMonthly bill for subscription 1: $"<<bill;
    }
};

class PremiumSubscription: public Subscription{
    int bill;

    public:
    PremiumSubscription(int bill){
        this->bill = bill;
    }

    void calculate_bill(){
        cout<<"\nMonthly bill for subscription 2: $"<<bill;
    }
};

//Q9. Challenge 9: The Account and Audit System
class BankAccount{
    double balance = 0;

    public:
    void deposit(double amount){
        cout<<"\nInitial Balance: "<<balance;
        balance = amount; 
        cout<<"\nDepositing $"<<amount<<"...";
    }

    void current_balance(){
        cout<<"\nCurrent Balance: "<<balance;
    }

    friend void perform_audit(BankAccount &account);
};
void perform_audit(BankAccount &account){
    cout<<"\nAudit performed. Audited Balance: $"<<account.balance;
}

//Q10. Challenge 10: The Document Management System
class Document{
    public:
    virtual void print()=0;
};

class PDFDocument:public Document{
    string type;
    public:
    PDFDocument(string type){
        this->type = type;
    }

    void print(){
        cout<<"\nPrinting "<<type<<" Document...";
    }
};

class WordDocument: public Document{
    string type;
    public:
    WordDocument(string type){
        this->type = type;
    }

    void print(){
        cout<<"\nPrinting "<<type<<" Document...";
    }
};

int main(){
    //Q1. Challenge 1: The Student Enrollment System
    Student s1("John Doe",85.5);
    s1.display_details();

    //Q2. Challenge 2: The Library Management System
    Library bk1;
    Library bk2("C++ Primer", "Stanley B. Lippman", "978-0-321-71411-4");

    //Q3. Challenge 3: The Online Store Inventory
    Product array_products [3] = {{"Laptop", 1200.50}, {"Mouse", 25.00},{"Keyboard", 75.75}};
    int i, size=3;
    for(i=0; i<size; i++){
        array_products[i].display_details();
    }

    //Q4. Challenge 4: The Mathematical Operations
    Calculator c1;
    c1.add(5,5);
    c1.add(5.5,10.5);
    c1.add(5,10,15.5);

    //Q5. Challenge 5: The Vector Operations
    Vector2D v1(5.5,8.9);
    Vector2D v2(64.2, 89.6);
    Vector2D v3;
    v3=v1+v2;
    v3.display_details();

    //Q6. Challenge 6: The Employee Hierarchy
    Manager m1("Jane Smith", "M123", 15);
    m1.display_info();

    //Q7. Challenge 7: The University System
    GraduateStudents gs1("Alice Johnson", 25, "G456", "AI in Healthcare");
    gs1.display_info();

    //Q8. Create a base class Subscription with a pure virtual method calculate_bill().
    Subscription *subs [2];
    subs[0] = new BasicSubscription(10);
    subs[1] = new PremiumSubscription(25);

    for(int i = 0; i<2; i++){
        subs[i]->calculate_bill();
    }

    for(int i = 0; i<2; i++){
        delete subs[i];
    }

    //Q9. Challenge 9: The Account and Audit System
    BankAccount b1;
    b1.deposit(500);
    b1.current_balance();
    perform_audit(b1);

    //Q10. Challenge 10: The Document Management System
    Document *docs[2];
    docs[0] = new PDFDocument("PDF");
    docs[1] = new WordDocument("Word");

    for(int i=0; i<2; i++){
        docs[i]->print();
    }

    for(int i=0; i<2; i++){
        delete docs[i];
    }

}