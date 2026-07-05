#include <iostream> 
using namespace std; 
 
int main() { 
    char op; 
    double n1, n2; 
    cout << "Enter operator (+, -, *, /): "; 
    cin >> op; 
    cout << "Enter two numbers: "; 
    cin >> n1 >> n2; 
    switch(op) { 
        case '+': cout << n1 + n2; break; 
        case '-': cout << n1 - n2; break; 
        case '*': cout << n1 * n2; break; 
        case '/': if(n2 != 0) cout << n1 / n2; else cout << "Error"; 
break; 
        default: cout << "Invalid operator"; 
    } 
    return 0;
}