// Third class
# include <iostream>
# include <cmath>
using std::cout;
using std::endl;
using std::cin;

void metodo(int x, int &y){
    x = x + 5;

    y = y + 10;
}

int main(){

    int x = 0;
    int y = 20;

    int *ap = &x;

    cout << ap << endl;

    metodo(x,y);
    cout << x << " " << y << endl;


    return 0;
}