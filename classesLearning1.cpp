#include <iostream>
using namespace std;

class Product{
    //always private until mentioned public
    int product_id;
    string product_name;
    string details;
    float price;

    public:
    void setId(int a){
        cout << "Enter product id";
        cin >> a ;
        product_id = a;
    };

    int getId(){
        return product_id;
    };
};


class areaOfCircle{
    float radius;
    public:
    void set_r(float r){
        radius = r;
    };
    void area(){
        cout<<3.14*radius*radius;
    };
};

/*constructor & destructor

Constructor will assign memory ,
initialized data to default value or 
initialized data to user-given value,
creates copy of preexisting object

it is a function with the class name itself
No return type, not even void.

generally public
*/

class Human
{
	string name,gender;
    public:
	//setter
	Human()//default constructor
	{
		cout<<"\nobject created...";
		name="None";
		gender="unknown";
	}
	Human(string n,string g)//parameterized constructor
		{
			name=n;
			gender=g;
			cout<<"\n given data set..";
		}
	Human(Human &ref)//copy constructor:creates deep copy
		{
			name=ref.name;
			gender=ref.gender;
			cout<<"\n given data set from ref";
		}	
	//getter
	void display_Human()
		{
			cout<<"\nName is:"<<name<<" I am a "<<gender;
		}
};

class Car{
    string brand, model;
    int num;

    public:
    Car(){
        brand = "Car";
        model = "m1";
        num = 0;
    }

    Car(string nm, string mo, int n){
        brand = nm;
        model = mo;
        num = n;
    }

    Car(Car &ref){
        brand = ref.brand;
        model = ref.model;
        num = ref.num;
    }

    void get_details(){
        cout<<"\ncar brand is: "<<brand<<"model is:"<<model<<" and number is: "<<num;
    }
};

class Account{
    Product bottle;
    bottle.setId(1);
    cout << "Product id : " << bottle.getId() << "\n";

    string name, gender;
    int accNumber;
    float amount;
    static int accNumberGenerator;

    public:
    Account(string nm = "No name", string ge = "No gender", float amt = 0.0f){
        name = nm;
        gender = ge;
        amount = amt;
        accNumber = ++accNumberGenerator;
    }

    void setAccDetails(string nm, string ge, float amt){
        name = nm;
        gender = ge;
        amount = amt;
        //accNumber = ++accNumberGenerator;
        cout<<"\n"<<name<<" your account is created, remember your account number: "<<accNumber;
    }

    void checkDetails(){
        cout<<"\nAccount no: "<<accNumber<<"\n"
            <<"Account holder: "<<name<<"\n"
            <<"Account balance: "<<amount;
    }

	int get_account_no()
	{
		return accNumber;
	}

    void deposit(float num){
        if(amount<=0){
            cout<<"no money deposited";
            checkDetails();
        } else {
            amount += num; 
            cout<<"Transaction done";
            checkDetails();
        }
    }
    void withdraw(float num){
        if(num>amount){
            cout<<"not sufficient balance";
            checkDetails();
        } else {
            amount -= num; 
            cout<<"Transaction done";
            checkDetails();
        }
    }
};
int Account::accNumberGenerator = 100;// static initialization

int main(){
    areaOfCircle Circle1;
    Circle1.set_r(5.1);
    Circle1.area();

    constructor
    Human h;//Created object H and default constructor called
	h.display_Human();
	Human h2("amar","male");//h2 parameterize constructor
	h2.display_Human();	
	Human h3(h2);//call copy constructor
	h3.display_Human(); 

    Car c1;
    c1.get_details();
    Car c2("toyota", "camri", 2024);
    c2.get_details();
    Car c3(c2);
    c3.get_details();

    Account acc[100];
    Account ac("junaid", "male", 200);
    string name, gender;
    int choice, accounts = 0, acc_no;
    float amount;
    bool flag;
    do{
        cout<<"\n============================================";
        cout<<"\n==================My Bank===================";
        cout<<"\n============================================";
        cout<<"\n1.open account";
        cout<<"\n2.deposit";
        cout<<"\n3.withdraw ";
        cout<<"\n4.check balance";
        cout<<"\n0.Exit";
        cout<<"\n============================================";
        cout<<"\nEnter your choice : \n";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\nEnter your name, gender\n";
                cin>>name>>gender;
                do{
                    cout<<"Enter amount 5000 to add initially :";
                    cin>>amount;
                }while(amount<5000);
                acc[accounts].setAccDetails(name, gender, amount);
                accounts++;
                break;
            case 2:
                flag=false;
 				cout<<"\nEnter account number:";
 				cin>>acc_no;
 				for(int i=0;i<=accounts;i++){
				   if(acc_no==acc[i].get_account_no()){
                        flag=true;
                        acc[i].checkDetails();
                        cout<<"\nEnter amount to deposit:"	;
                        cin>>amount;
                        acc[i].deposit(amount);
						break;
				    }
				}
                if(flag==false)
                    cout<<endl<<acc_no<<" Not found....";
                break;
            case 3:
                flag=false;
 				cout<<"\nEnter account number:";
 				cin>>acc_no;
 				for(int i=0;i<=accounts;i++){
				   if(acc_no==acc[i].get_account_no()){
                        flag=true;
                        acc[i].checkDetails();
                        cout<<"\nEnter amount to withdraw:"	;
                        cin>>amount;
                        acc[i].withdraw(amount);
						break;
				    }
				}
                if(flag==false)
                    cout<<endl<<acc_no<<" Not found....";
                break;
            case 4:
                flag=false;
 				cout<<"\nEnter account number:";
 				cin>>acc_no;
 				for(int i=0;i<=accounts;i++){
				   if(acc_no==acc[i].get_account_no()){
 						flag=true;
 						acc[i].checkDetails();
						break;
				    }
				}
                if(flag==false)
                    cout<<endl<<acc_no<<" Not found....";
                break;
            case 0:
                cout<<"Exiting....";
                break;
            default:
                cout<<"Wrong choice given..";
                break;
        }
    }while (choice!=0);

    return 0;
}