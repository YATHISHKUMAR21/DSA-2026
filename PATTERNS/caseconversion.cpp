#include <iostream>
using namespace std;

void convertToLower(char ch){
    char ans = ch - 'A' + 'a';
    cout<<ans<<"\n";
}

void lowerToUpper(char ch){
    char ans = int(ch)-32;
    cout<<char(ans)<<"\n";
}

int main(){
    // convertToLower('B');
    lowerToUpper('b');

}