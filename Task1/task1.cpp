#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
 
int main() { 
    srand(time(0)); 
    int number = rand() % 100 + 1; 
    int guess; 
    cout << "Guess the number (1-100): "; 
    do { 
        cin >> guess; 
        if (guess > number) cout << "Too high! Try again: "; 
        else if (guess < number) cout << "Too low! Try again: "; 
    } while (guess != number); 
    cout << "Correct!" << endl; 
    return 0; 
}