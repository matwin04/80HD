#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;
using namespace std::filesystem;

void createDirectories(){
    string mainFolder = "./80HD";
    create_directory("./80HD");
    cout << "Main 80HD folder created @ " << mainFolder << endl;
    cout << "./80HD\n";
}
void processOption(){
    int option;
    cin >> option;
    switch(option){
        case 1:{
            cout << "Calendar\n";
            break;
        }
        case 2:{
            cout << "ToDo List\n";
            break;
        }
        case 3:{
            cout << "Settings\n";
            break;
        }
        default:{
            cout << "No Answer Selected Please Try Again\n";
            break;
        }
    }
}
int main(){
    createDirectories();
    cout << "Hello welcome to 80HD organizer\n";
    cout << "Im not sure what hd is but i deffenetly got 80 of them\n";
    
    processOption();

    return 0;
}