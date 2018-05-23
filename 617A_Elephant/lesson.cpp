#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    cout << (x+4)/5 << "\n";
    
    // REASONING
    // another solution to this problem is ceil(x/5.0)
    // Adopting this to simpler example,
    // ceil(x/2.0) is equivalent to (x+1)/2
    // from this, we can conclude
    // "round up of x/y" is equal to "drop of (x+(y-1))/y"
    // Lesson learned !

}
