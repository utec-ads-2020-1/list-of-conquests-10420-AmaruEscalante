#include <iostream>
#include "string"
#include <map>
#include <limits>

using namespace std;

int main() {
    int number = 0;
    int i = 0;
    string input;
    map <string, int> conquest;

    cin >> input;
    cin.ignore(256,'\n');
    number = stoi(input);

    while(number--){
        cin >> input;
        cin.ignore(numeric_limits<streamsize>::max(), ' ');
        conquest[input]++;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    map<string, int>::iterator itr;
    for(itr = conquest.begin(); itr != conquest.end(); ++itr){
        cout << itr -> first << ' ';
        cout << itr -> second << '\n';
    }

    return 0;
}

