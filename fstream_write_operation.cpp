#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string user_name;
    cout << "Who is this? ";
    getline(cin, user_name);

    // Create and open a text file in append mode.
    // std::ios::app ensures data is added to the end of the file.
    // If the file doesn't exist, it will be created.
    ofstream myFile(user_name + ".txt", ios::app);

    // Check if the file opened successfully
    if (!myFile.is_open()) {
        cerr << "Error: Could not open or create file " << user_name << ".txt" << endl;
        return 1; // Indicate an error
    }

    cout << "File opened successfully. Type 'QUIT' to stop writing." << endl;

    string data;
    while (true) {
        cout << "Enter data to write: ";
        getline(cin, data);

        if (data == "QUIT") {
            cout << "Stopping. Data saved to " << user_name << ".txt" << endl;
            break;
        }

        myFile << data << endl;
    }

    // Close the file
    myFile.close();

    return 0; // Indicate successful execution
}
