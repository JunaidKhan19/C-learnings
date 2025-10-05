#include <iostream>
using namespace std;

//Q1. Book management: menu-driven approach, class, static member.
class Book{
    string bookTitle, bookAuthor;
    int bookId;
    static int bookCounter;

    public:
    void setbook(string bkTitle, string bkAuthor){
        bookTitle = bkTitle;
        bookAuthor = bkAuthor;
        bookId = ++bookCounter;
        cout<<"\nBook added with book id: "<<bookId;
        cout<<"\nBook added with book id: "<<bookTitle;
        cout<<"\nBook added with book id: "<<bookAuthor;
    }

    void getbook(){
        cout<<"\nbook id: "<<bookId;
        cout<<"\nbook title: "<<bookTitle;
        cout<<"\nbook author: "<<bookAuthor;
        cout<<"\n";
    }

    int getBookId()
	{
		return bookId;
	}
};
int Book::bookCounter=0;


//Q2. Adding Time Using a Friend Function
class Time2;
class Time1{
    int hours, minutes;

    public:
    Time1(int hrs, int min){
        hours=hrs;
        minutes=min;
    }

    friend void addTime(Time1 t1, Time2 t2);
};

class Time2{
    int hours, minutes;

    public:
    Time2(int hrs, int min){
        hours=hrs;
        minutes=min;
    }

    friend void addTime(Time1 t1, Time2 t2);
};

void addTime(Time1 t1, Time2 t2){
    int minutes = (t1.minutes+t2.minutes)%60;
    int hours = t1.hours+t2.hours+((t1.minutes+t2.minutes)/60);
    cout<<"after adding both time we get: "<<hours<<":"<<minutes;
}


//Q3. Constructor Overloading and Destructor
class Box{
    float length, breadth, hieght;

    public:
    Box(){
        length = 0;
        breadth = 0;
        hieght = 0;
    }

    Box(int l, int b, int h){
        length = l;
        breadth = b;
        hieght = h;
    }

    Box(int s){
        length = breadth = hieght = s;
    }

    void volume(){
        cout<<"\nthe volume is: "<<length*breadth*hieght;
    }

    ~Box(){
        cout<<"\nBox object is being destroyed";
    };
};

int main(){

    int i, j, choice, bkid, bookIndex=0;
    string bookTitle, bookAuthor;
    bool flag = false;
    Book books[100];

    do{ 
        cout<<"\n=============================";
        cout<<"\n| Library management system |";
        cout<<"\n|===========================|";
        cout<<"\n|1. Add Book                |";
        cout<<"\n|2. Display All Books       |";
        cout<<"\n|3. Search for a Book       |";
        cout<<"\n|0. Exit                    |";
        cout<<"\n=============================";
        cout<<"\nEnter your choice : \n";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter book title: ";
                cin>>bookTitle;
                cout<<"Enter author's name: ";
                cin>>bookAuthor;
                books[bookIndex].setbook(bookTitle, bookAuthor);
                bookIndex++;
                break;
            case 2:
                for(i=0; i<bookIndex;i++){
                    books[i].getbook();
                }
                break;
            case 3:
                cout<<"Enter book id to search: ";
                cin>>bkid;
                for(i=0; i<bookIndex;i++){
                    if(bkid == books[i].getBookId()){
                        flag = true;
                        books[i].getbook();
                        break;
                    } 
                }
                if(!flag){
                    cout<<"sorry book not found..:)";
                }
                break;
            case 0:
                cout<<"Exiting";
                break;
            default:
                cout<<"Wrong choice given..";
                break;
        }
    }while(choice!=0);

    //Q2
    Time1 t1(1,30);
    Time2 t2(2,45);
    addTime(t1, t2);

    //Q3
    Box b1;
    b1.volume();
    Box b2(5, 4, 2);
    b2.volume();
    Box b3(5);
    b3.volume();
}
