#include <iostream>
using namespace std;

class Solution {
    public :
       void printSquare(int n) {
           for(int i = 0; i < n; i++) {
               for(int j = 0; j < n; j++) {
                   cout << "* ";
               }
               cout << endl;
           }
       }
};

int main() {
    // 1. Create an instance of your class
    Solution solver;
    
    // 2. Call the function with a target pattern size (e.g., 4x4 grid)
    cout << "Printing a 4x4 Square Pattern:" << endl;
    solver.printSquare(4);
    
    return 0;
}
