#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
using namespace std;

//enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
//              0    1        2         3          4        5       6
enum week { Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, Saturday=7 };
enum coffee { regular = 1, tall = 2, tower = 3};

//stl
//1.Template
template <typename T>
T add(T x, T y){
    return x+y;
}
/*
//2.Vectors
class Shopping_List_App{
	vector<string> my_list;
	
    public:
    bool search_item(string item){
        for(string i: my_list){
            if(i==item) return  true;
        }
        return false;
    }

    void display_list(){
        if (my_list.size() != 0){
                for(string s: my_list){
                cout<<my_list[s]<<endl;
            }
        } else cout<<"the list is empty.. add elements please"<<endl;
    }
        
    void add_item(string item){
        if(search_item(item)==false){
            my_list.emplace_back(item);
            cout<<"\n"<<item<<" added in list.";
        } else cout<<"\n"<<item<<" already in list";
    }
        
    void delete_item(string item){
        if(search_item(item)==true){
            my_list.erase(my_list.begin() + 1); 
            cout<<"\n"<<item<<" removed from list.";
        } else cout<<"\n"<<item<<" not in list";
    }
};
*/
/*
//3. list
class Songs{
    list<string> songList;

    public:
    Songs() {
    songList = {"Song A", "Song B", "Song C", "Song D", "Song E"};
    }
    void show_playlist(){
        cout << "Current Playlist: ";
        cout<<"[";
        for(string song: songList){
            cout << "\"" << song << "\" ";
        }
        cout<<"]";
    }

    
    // Notice: 
    // ->when rotations < songList, rotations % songList = rotations.
    // ->When rotations == songList , rotations % songList = 0 → full cycle, playlist returns to original order.
    // ->when rotations > songList, rotations % songList = remainder which is the actual number of rotation required. 
    //   eg: 11%10 = 1 rotation required since at 10th rotation the list would be at original position. 
    
    void rotate_anti_clockwise(int n){
        if(songList.empty() == false){
            int rotations = n % songList.size();
            for (int i = 0; i < rotations; ++i){
                songList.push_back(songList.front());
                songList.pop_front();
                cout << "\nPlaylist after " << rotations << " anti-clockwise rotation(s):" << endl;
                show_playlist();
            }
        }
    }

    void rotate_clockwise(int n){
        if (songList.empty()==false){
            int rotations = n % songList.size();
            for (int i = 0; i < rotations; ++i) {
                songList.push_front(songList.back());
                songList.pop_back();
                cout << "\nPlaylist after " << rotations << " clockwise rotation(s):" << endl;
                show_playlist();
            }
        }
    }
};
*/

/*
class Find_ith_Min(int position){
    list<int> numlist;

    numlist.sort();
    for(int i < 1|| i>numlist.size())
}//to be completed


//set
void find_count(int list){
    vector<int> list = list;
    set<int> numset;
    int countnum;

    for(int num : list){
        numset.insert(num);
    }

    for(int num: numset){
        countnum = 0;
        for(int value: list){
            if(num == value){
                countnum++;
            }else continue;
        }
        cout<<num<<"->"<<countnum;
    }
}*/

//map
//life path number
int sum_it(int num){
    int sum = 0;
    while(num > 0){
        int digit = num%10;
        num = num/10;
        sum += digit;
    }
    return sum;
}

int num_under9(int num){
    while(num>9){
        num = sum_it(num);
    }
    return num;
}

string i_am(int numerology_number){
    vector<string> trait = {" ","The Leader","The Peacemaker","The Communicator","The Builder",
                            "The Adventurer","The Caregiver","The Seeker","The Powerhouse","The Humanitarian"};
    return trait[numerology_number];
}
string properties(int numerology_number){
    map<int, string> properties;
    properties[1] = "Positive: Independent, Ambitious, Pioneer\n Negative: Self-centered, Domineering, Aggressive"; 
    properties[2] = "Positive: Cooperative, Diplomatic, Harmonious\n Negative: Shy, Dependent, Indecisive"; 
    properties[3] = "Positive: Creative, Expressive, Social\n Negative: Scattered, Superficial, Unfocused"; 
    properties[4] = "Positive: Disciplined, Hard-working, Practical\n Negative: Rigid, Dogmatic, Lacking imagination"; 
    properties[5] = "Positive: Adaptable, Resourceful, Free-spirited\n Negative: Restless, Impulsive, Irresponsible"; 
    properties[6] = "Positive: Nurturing, Loving, Responsible\n Negative: Self-righteous, Controlling, Worried"; 
    properties[7] = "Positive: Analytical, Intuitive, Spiritual\n Negative: Aloof, Secretive, Pessimistic"; 
    properties[8] = "Positive: Authoritative, Ambitious, Visionary\n Negative: Materialistic, Controlling, Domineering"; 
    properties[9] = "Positive: Compassionate, Idealistic, Selfless\n Negative: Possessive, Defensive, Emotional"; 
    return properties[numerology_number];
}


int main()
{
    /*
    week today;
    today = Wednesday;//3
    cout << "Day " << today+1;//4
    
    int cofe, milk; 
    string choice;
    coffee mycoffee;
    cout<<"enter coffee, milk and type of coffee;";
    cin>>cofe>>milk;
    cin>>choice;
    mycoffee = choice;
    price = (cofe + milk)*mycoffee;
    cout<<"your price is: "<<price;
    */

    /*---------------- stl ----------------*/

    /*
    //template
    cout<<add<int>(4,5)<<endl;
    cout<<add<float>(4.5,5.9)<<endl;
    cout<<add<string>("Junaid"," Khan")<<endl;
    */
    /*
    //vector menu program. To be completed
    vector<int> vec = {1, 2, 3}; 
    // Add an element to the end 
    vec.push_back(4); // vec = {1, 2, 3, 4} 
    // Add an element using emplace_back (constructs in place) 
    vec.emplace_back(5); // vec = {1, 2, 3, 4, 5} 
    */

    //list

    Songs my_playlist;
    string direction;
    int rotations;
    cout << "Welcome to the Circular Playlist App!" << endl;
    my_playlist.show_playlist();
    while (true){
        cout<<"\n-----------------------------------------------------" << endl;
        cout<<"Enter rotation direction (anti-clockwise or clockwise) or 'exit' to quit: ";
        getline(cin, direction);
        if (direction == "exit") {
            cout<<"\nExiting app. Goodbye!" << endl;
            break;
        }
        cout<<"Enter number of rotations: ";
        cin>>rotations;
        cin.ignore();
        if (direction == "anti-clockwise") {
            my_playlist.rotate_anti_clockwise(rotations);
        }
        else if (direction == "clockwise") {
            my_playlist.rotate_clockwise(rotations);
        }
        else {
            cout << "\nInvalid direction. Please enter 'anti-clockwise' or 'clockwise'." << endl;
        }
    }

    //set
    //complete thiss


    /*
    //map
    //life path number
    //note : c-'0' converts the character to int
    string name, dob;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter dob in dd-mm-yyyy:";
    cin>>dob;
    int sum=0;
    for(char c:dob)
    {
        if (c!='-')
            sum+=c-'0';
    }
    
    int numerology_number = num_under9(sum);
    cout<<i_am(numerology_number);
    cout<<properties(numerology_number);
    */

    return 0;
}

