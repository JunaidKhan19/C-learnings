#include <iostream>
using namespace std;

int main(){
    //Q1. dogs age calculator.
    float age ;
    cout<<"enter dogs age as human years (eg: 3,7,8,etc..)";
    cin>>age;
    if(age <= 2) cout<<"the dogs age is :"<<10.5*age;
    else if(age > 2) cout<<"the dogs age is :"<<(2*10.5)+((age-2)*4);
    else cout<<"Invalid input";
    return 0;

    //Q2. Season detector 
    int month1 = 0, day1 = 0;
    cout<<"enter month:";
    cin>>month1;
    cout<<"enter day:";
    cin>>day1;
    if((month1==12&&day1>=21)||(month1<=3&&day1<=19)){
        cout<<"Winter\n";
    }else if((month1==3&&day1>=20)||(month1<=6&&day1<=20)){
        cout<<"Spring\n";
    }else if((month1==6&&day1>=21)||(month1<=9&&day1<=21)){
        cout<<"Summer\n";
    }else if((month1==9&&day1>=22)||(month1<=12&&day1<=20)){
        cout<<"Autmn\n";
    }else {
        cout<<"Enter a valid input\n";
    }

    //Q3. Astrological sign finder
    int month = 0, day = 0;
    cout<<"enter month between 1-12: ";
    cin>>month;
    cout<<"enter day between 1-31: ";
    cin>>day;
    if((month==3&&day>=21)||(month==4&&day<=19)){
        cout<<"Aries\n";
    }else if((month==4&&day>=20)||(month==5&&day<=20)){
        cout<<"Taurus\n";
    }else if((month==5&&day>=21)||(month==6&&day<=20)){
        cout<<"Gemini\n";
    }else if((month==6&&day>=21)||(month==7&&day<=22)){
        cout<<"Cancer\n";
    }else if((month==7&&day>=23)||(month==8&&day<=22)){
        cout<<"Leo\n";
    }else if((month==8&&day>=23)||(month==9&&day<=22)){
        cout<<"virgo\n";
    }else if((month==9&&day>=23)||(month==10&&day<=22)){
        cout<<"Libra\n";
    }else if((month==10&&day>=23)||(month==11&&day<=21)){
        cout<<"Scorpio\n";
    }else if((month==11&&day>=22)||(month==12&&day<=21)){
        cout<<"Saggitarius\n";
    }else if((month==12&&day>=22)||(month==1&&day<=19)){
        cout<<"Capricorn\n";
    }else if((month==1&&day>=20)||(month==2&&day<=18)){
        cout<<"Aquarius\n";
    }else if((month==2&&day>=19)||(month==3&&day<=20)){
        cout<<"Pisces\n";
    }else {
        cout<<"Enter a valid input\n";
    }

    //Q4. Divisible by 7, Multiple of 5
    for(int i=1500; i<=2700; i++){
        if(i%5==0 && i%7==0){
            cout<<i<<" \n";
        }
    }

    //Q5. count number of even and number of odd input numbers entered by user
    int num, odds = 0, evens = 0;
    do{
        cout<<"enter numbers as you wish & to stop, enter -1: ";
        cin>>num;
        if(num%2==0){
            evens += 1; 
        }else if(num>0 && num%2!=0){
            odds += 1;
        }
    } while(num > 0);
    cout<<"Number of evens: "<<evens
        <<"\nNumber of odds: "<<odds<<"\n";

    //Q6.  Skip Numbers with 'continue
    for(int i = 0; i<=6; i++){
        if(i==3 && i==6){
            continue;
        } else {
            cout<<i<<" \n";
        }
    }

    //Q7. FizzBuzz Challenge
    for(int i = 1; i<=50; i++){
        if(i%3==0 && i%5!=0){
            cout<<"Fizz\n";
        }else if(i%3!=0 && i%5==0){
            cout<<"Buzz\n";
        }else if(i%3==0 && i%5==0){
            cout<<"FizzBuzz\n";
        }else {
            cout<<i<<"\n";
        }
    }

    //Q8. even digits from 100 to 400 where every digit is an even number.
    int i, temp;
    bool flag = true;

    for(i=100; i<= 400; i++){
        temp = i;
        while(temp>0){
            int digits = temp%10;
            temp = temp/10;
            if (digits%2 == 0){
                flag = true;
                continue;
            }else {
                flag = false;
                break;
            }
        }
        if (flag) cout<<i<<", ";
    }
}
