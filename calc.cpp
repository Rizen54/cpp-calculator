#include <string>
#include <iostream>
using namespace std;

int main()
{

    // Declaring vars
    int x, y;
    char op;
    
    // Getting input
    cout << "Enter first num: ";
    cin >> x;
    
    cout << "Enter second num: ";
    cin >> y;
    
    cout << "Enter operator: ";
    cin >> op;
    
    // Output
    switch (op){
    
    case '+':
        cout << x + y;
        break;
    case '-':
        cout << x - y;
        break;
    case '*':
        cout << x * y;
        break;
    case '/':
        cout << x / y;
        break; 

    }

    cout << "\n";
    return 0;
}
