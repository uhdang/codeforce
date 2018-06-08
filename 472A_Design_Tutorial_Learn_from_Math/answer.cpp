#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    // Logic here is, 
    // In case of even number, assigning x as one composite number will 
    // automatically make sure the other y to be composite number.
    // Just need to make sure minimum number of 12 could suffice. 
    // So, if x is 4, y could be 8 and 8 is composite number.
    //
    // In case of odd number,
    // lets see for example, n = 13. if x is even number, 4, y is 9 and both are composite number alright.
    //
    // if x is an odd number, 3, y is 8 and only y is composite number.
    // assigning 3, 5, 7 would not work because they are prime number. So, smallest odd composite number would be... 9.
    // but if x is 9, then if n is 13, y would be 4. and 4 is composite number. 

    if (n%2 == 0) {
        cout << 4 << " " << n - 4 << "\n";
    } else {
        cout << 9 << " " << n - 9 << "\n";
    }
}
