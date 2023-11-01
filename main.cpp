// C++ basics
// Including C++ libraries
# include <iostream>
# include <cmath>
using std::cout;
using std::endl;
using std::cin;

// Above 'std' is used to indicate the code to use the 'cout' and 'endl' functions.
// Std means 'standard' and it contains the built-in classes and declared functions.
// 'using namespace std;' shall not be used, it's lazy and it could carry trouble when creating other library.

// 'int main()' defines the starting point of a C++ program
int main (){
    float x = 0.0;
    cout << "La variable x es: " << x << endl;
    cout << "Hello, World!" << endl;
    int z = sqrt(4);

    // 'cin' is the equivalent to 'input' in Python
    //cin >> z;

    if (z == 2){
        cout << "Z is 2" << endl;
    }

    else{
        cout << "Z is not 2" << endl;
    }

    for(int i = 0; i < 10; i++){
        cout << i << endl;
    }

    int i = 0;
    while (i < 10){
        cout << "Inside while" << i << endl;
        i = i + 2;

    }
    
    // do while executes the orders at least one time before verifying the conditions
    do{
        cout << "Inside do while " << i << endl;
    }
    while(i < 10);

}