#include <iostream>
using namespace std;

/*
//pass by value/call by value:
//In this, data is not passed only the value is replicated, making changes appear only local. 
void swap(int no1,int no2){
	int temp;
	cout<<"\n	start: in function no1:"<<no1<<" @"<<&no1<<" no2:"<<no2<<" @"<<&no2;
	temp=no1;
	no1=no2;
	no2=temp;
	cout<<"\n	end: in function no1:"<<no1<<" no2:"<<no2;
}
*/
//pass by address/call by address:
//In this, data is not passed but address is changes are done and seen globally
void swap(int *no1,int *no2){
	int temp;
	cout<<"\n	start: in function no1:"<<*no1<<" @"<<no1<<" no2:"<<*no2<<" @"<<no2;
	temp=*no1;
	*no1=*no2;
	*no2=temp;
	cout<<"\n	end: in function no1:"<<*no1<<" no2:"<<*no2;
}

//pass by reference:
//In this, data is not passed but address is changes are done and seen globally
void swap(int &no1,int &no2){
	int temp;
	cout<<"\n	start: in function no1:"<<no1<<" @"<<&no1<<" no2:"<<no2<<" @"<<&no2;
	temp=no1;
	no1=no2;
	no2=temp;
	cout<<"\n	end: in function no1:"<<no1<<" no2:"<<no2;
}

//minimum finder
int min(int no1,int no2)
{
	if(no1<no2)
		return no1;
	else	
		return no2;
}

//USD -> INR
float INRtoUSD(float inr){
    return inr/90;
}
//INR -> USD
float USDtoINR(float usd){
    return 90*usd;
}

//area of circle
float area(float radius){
    return 3.14*radius*radius;
}
//area of rectangle
float area(float length, float breadth){
    return length*breadth;
}

void person(string name, string state = "maharashtra", string nationality = "INDIA"){
    cout<<"\n"<<name<<","<<state<<","<<nationality;
}

bool can_vote(int age){
    if(age>=18) return true;
    else return false;
}

void voter(string name, string gender, int age){
    cout<<name<<":"<<gender<<","<<age<<"("<<(can_vote(age)?"can vote":"cannot vote")<<")";
}

//recursion
int fact(int num){
    if(num == 1){
        return 1;
    } else return num*fact(num-1);
}

int numPower(int num,int power){
    if(power == 0){
        return 1;
    } else return num*numPower(num,power-1);
}

int greatestCommonDivisor(int num1, int num2){
    if(num1%num2 == 0){
        cout<<num2<<" is gcd";
    } else return greatestCommonDivisor(num2,num1%num2);
}

//array in functions
void doubler(int a[],int size){
    for(int i=0;i<size;i++) a[i]=a[i]*2;
}
void printer(int a[],int size){
	cout<<"\nArray has:";
	for(int i=0;i<size;i++) cout<<a[i]<<",";
}

//this function checks if sum of any elements is equal to sum of user given sum 
void sum_of_subset(int num[], int size, int sum){
    for(int i = 0; i<size; i++){
        for(int j=size-1; j>0; j--){
            if((num[i]+num[j]) == sum){
                cout<<num[i]<<","<<num[j];
            } else continue;
        }
    }
}

void maximumprofit(int num[], int size){
    int i,j,profit=0,buyday=0,sellday=0;
    for(i =0; i<size; i++){
        for(j=i+1; j<size; j++){
            if((num[j]-num[i]) > profit){
                buyday = i;
                sellday = j;
                profit = num[j]-num[i];
            }
        }
    } 
    cout<<"sell day:"<< sellday<<" buy day: "<<buyday<<" profit is: "<<profit;
}

void maxbid(int num[], int size){
    int i, j, maxbid=0, winner=0;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(num[i]>num[j] && num[i]>maxbid){
                maxbid = num[i];
                winner = i;
            } else if (num[i]<num[j] && num[j]>maxbid){
                maxbid = num[j];
                winner = j;
            } else if(num[i] == num[j] && i < j){
                maxbid = num[i];
                winner = i;
            }
        }
    }
    cout<<" maxbid :"<< maxbid<<" winner :"<<winner;
}



int main(){
    //Function

    int no1=100,no2=200;
    cout<<"\nstart: in main no1:"<<no1<<" @"<<&no1<<" no2:"<<no2<<" @"<<&no2;
    swap(no1,no2);
    cout<<"\nend: in main no1:"<<no1<<" no2:"<<no2;

    int no1=100,no2=200;
    cout<<"\nstart: in main no1:"<<no1<<" @"<<&no1<<" no2:"<<no2<<" @"<<&no2;
    swap(&no1,&no2);
    cout<<"\nend: in main no1:"<<no1<<" no2:"<<no2;

    int no1,no2,no3,no4;
    cout<<"\nEnter 4 numbers:\n";
    cin>>no1>>no2>>no3>>no4;

    int min1=min(no1,no2);
    int min2 = min(no3, no4);
    int min3 = min(min1, min2);
    cout<<"\nmin is:"<<min(min1, min2);
    //cout<<"\nmin is:"<<min(min(no1, no2),min(no3, no4));//directly print the answer 

    cout<<INRtoUSD(1)<<"\n";
    cout<<USDtoINR(6);

    float r, l, b;
    cout<<"enter radius:";
    cin>>r;
    cout<<area(r)<<" of circle"<<"\n";
    cout<<"enter length and breadth:";
    cin>>l>>b;
    cout<<area(l,b)<<" of rectangle"<<"\n";

    string name, nationality , state;
    cout<<"\nenter name, state and nationality:\n";
    cin>>name>>state>>nationality;
    person(name,state,nationality);
    cout<<"\nenter name, state:\n";
    cin>>name>>state;
    person(name,state);
    cout<<"\nenter name:\n";
    cin>>name;
    person(name);

    //nesting function
    voter("junaid","male",18);

    //recursion
    cout<<fact(6)<<" ";
    cout<<numPower(2,3);

    //                  gcd ka likhna hai
    
    //array in functions
    int a[]={1,2,3,4},size=4;
	cout<<"\nStart:";
	printer(a,size);
	doubler(a,size);
	cout<<"\nend:";
	printer(a,size);

    sum_of_subset(a,size,5); //see again

    int a[]={7,2,0,6,12,3,6},size=7;
    maximumprofit(a,size); 


    int a[]={110,450,320,99,250, 500, 480, 390,150,220},size=10;
    int a[]={110,450,500,99,250, 500, 480, 390,150,220},size=10;
    maxbid(a,10);

}





