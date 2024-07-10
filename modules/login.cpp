#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void login();
void registration();
void forgot();

int main () {
    int choice;

    cout << "\t\t\t__________________________________________________\n\n";
    cout << "\t\t\t             Welcome to the Login page \n\n";
    cout << "\t\t\t________________________Menu______________________ \n\n";
    cout << "\t\t\t| Press 1 to Login                                |" << endl;
    cout << "\t\t\t| Press 2 to Register                             |" << endl;
    cout << "\t\t\t| Press 3 to Forgot Password                      |" << endl;
    cout << "\t\t\t| Press 4 for exit                                |" << endl;
    cout << "\t\t\t__________________________________________________\n\n";
    cout << " \t\t\t Enter yout choice : ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        login();
        break;

    case 2:
        registration();
        break;

    case 3:
        forgot();
        break;

    case 4:
        cout << "Fuck Off" << endl;
        return 0;
        break;
    
    default:
        system("cls");
        cout << "Imbecil !!!";
        main();
        break;
    }
}

void login() {
    int count;
    string userID, password, id, pass;
    system("cls");
    cout << "\t\t\t Enter user and password" << endl;
    cout << "\t\t\t UserName ";
    cin >> userID;
    cout << "\t\t\t Password ";
    cin >> password;
    ifstream input("record.txt");

    while(input >> id >> pass) {
        if(id == userID && pass == password) {
            count = 1;
            system("cls");
        }
    }
    input.close();

    if(count == 1) {
        cout << userID << "\nLogged in\n";
        main();
    } else {
        cout << "user not found, loggin failed";
        main();
    }
}

void registration() {
    string registerUserId, registerPassword, registerId, registerPass;
    system("cls");

    cout << "\t\t\t Enter the username: ";
    cin >> registerUserId;

    cout << "\t\t\t Enter the password: ";
    cin >> registerPassword;

    ofstream f1("records.txt", ios::app);
    f1 << registerUserId << " " << registerPassword << " " << endl;
    system("cls");

    cout << "\n\t\t\t Registration is successful.";
}

void forgot() {
    return;
}