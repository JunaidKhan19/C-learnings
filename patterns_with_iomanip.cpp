#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<setw(7)<<setfill('x')<<""<<setfill(' ')<<endl;
    for(int i = 1; i<6; i++){
        cout<<"x"<<setw(6)<<"x"<<endl;
    }
    cout<<setw(7)<<setfill('x')<<""<<setfill(' ')<<endl;

    cout<<"x"<<setw(5)<<setfill(' ')<<""<<endl;
    for(int i = 1; i<5; i++){
        cout<<"x"<<setw(i)<<"x"<<endl;
    }
    cout<<setw(6)<<setfill('x')<<""<<setfill(' ')<<endl;
    

    cout <<setw(7)<<"X"<<endl; 
    for(int i=6; i>=2; i--){  
        cout<<setw(i)<<"x"<<setw(7-i)<<"x"<<endl;
 	    //cout<<setw(l)<<"X"<<setw(7-l)<<"X";
    }
    cout<<setw(6)<<setfill('x')<<""<<setfill(' ')<<endl;

    for(int i=6; i>=2; i--){
        cout <<setw(7)<<"X";   
        cout<<setw(i)<<"x"<<setw(7-i)<<"x"<<endl;
        //cout<<setw(l)<<"X"<<setw(7-l)<<"X";
    }
    cout<<setw(6)<<setfill('x')<<""<<setfill(' ')<<endl;
    
}