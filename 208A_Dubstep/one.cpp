#include <iostream>

using namespace std;

int main() {
    string x, o = "";
    int dubstep_count = 2;
    cin >> x;
    while (x.length() > 0) {
        if(x.substr(0,3) == "WUB") {
            dubstep_count++;
            x.erase(0,3);
        } else {
            o += x[0];
            x.erase(0,1);
            dubstep_count = 0;
        }

        if (dubstep_count == 1) {
            o += " ";
        }
    }
    cout << o << "\n";

}
