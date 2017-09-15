#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    cout << "Hello user!\nPlease enter your name: ";
    string name;
    getline(cin, name);
    cout << "Hello " << name << "!" << endl;
    return 0;
}