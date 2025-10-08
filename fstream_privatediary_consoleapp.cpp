#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

//Q1. My Personal Diary App
string Secured(string line, int key){
    string processed_data = "";
    for(char c:line){
        int d = c;
        processed_data += char(d^key);
    }
    return processed_data;
}

int main(){
    int key, choice;
    string username, data;
    do{
        cout<<"\nSelect a task from below: ";
        cout<<"\n1. Read a file.";
        cout<<"\n2. write a file.";
        cout<<"\n0. Exit";
        cout<<"\nYour choice: ";
        cin>>choice;
        switch(choice){
            case 1: {
                cout<<"Enter username: ";
                cin>>username;
                ifstream myfile(username+".txt");
                if(!myfile.is_open()){
                    cerr<<"Couldn't open file :"<<username<<".txt"<<endl;
                    return 1;
                } else {
                    cout<<"Enter key: ";
                    cin>>key;
                    while(getline(myfile,data)){
                        cout<<Secured(data,key)<<endl;
                    }
                    myfile.close();
                }
                break;
            }
            case 2: {
                cout<<"Enter username: ";
                cin>>username;
                ofstream myfile(username+".txt", ios::app);
                if(!myfile.is_open()){
                    cerr<<"Couldn't open file :"<<username<<".txt"<<endl;
                } else {
                    cout<<"Enter key:";
                    cin>>key;
                    getline(cin, data);//to flush the buffer extra data

                    /*auto now = chrono::system_clock::now();
                    time_t now_time = chrono::system_clock::to_time_t(now);*/
                    time_t now_time = chrono::system_clock::to_time_t(chrono::system_clock::now());
                    myfile<<"<------------------ New entry on "<<ctime(&now_time)<<" ------------------>"<<endl;
                    cout<<"File ready to write"<<endl;
                    while(true){
                        getline(cin, data);
                        if(data == "QUIT"){
                            cout<<"Terminating the writing process. Storing files securely....";
                            break;
                        }
                        myfile<<Secured(data, key)<<endl;
                    }
                    myfile.close();
                }  
                break;
            }  
            case 0:
                cout<<"Terminating the program!!!!!";
                break;
            default:
                cout<<"Please select correct option !!!";        
        }
    }while(choice!=0);

    //Q2. File Summary and Analysis Tool 
    string path, data;
    long countChar=0, countDigits=0, countSymbols=0, countWords=0, countLine=0;
    cout<<"Enter the complete file path to get the summary: ";
    getline(cin, path);
    ifstream myfile(path);

    if(!myfile.is_open()){
        cerr<<"Couldn't open the file :"<<path<<" \nPlease check the path...!!"<<endl;
        return 1;
    } else {
        while(getline(myfile,data)){
            countLine++;

            for(char c: data){
                if(c=='\0')continue;
                else if(c>='A' && c<='Z' ) countChar++;
                else if(c>='a' && c<='z' ) countChar++;
                else if(c>='0' && c<='9' ) countDigits++;
                else if(c == ' ') countWords++;
                else countSymbols++;
            }
        }
    }
    myfile.close();

    cout<<"<--------------file summary-------------->"<<endl;
    cout<<"\nTotal characters :"<<countChar<<endl;
    cout<<"\nTotal digits :"<<countDigits<<endl;
    cout<<"\nTotal symbols :"<<countSymbols<<endl;
    cout<<"\nTotal words :"<<countWords+1<<endl;
    cout<<"\nTotal lines :"<<countLine+1<<endl;

    return 0;
}

