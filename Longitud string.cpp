#include <iostream>

using namespace std;

int main() {
    string cadena;

    //cin>> cadena; // Lee hasta espacio o \n
    getline(cin, cadena); // Lee hasta el ○\n
    if (cadena == "int"){
        cout << sizeof(int) << endl;
    }

    return 0;
}
