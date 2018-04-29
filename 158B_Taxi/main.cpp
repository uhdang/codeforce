#include <iostream>

using namespace std;

int main() {

    int c = 0, n_one = 0, n_two = 0, n_three = 0, n_four = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int r;
        cin >> r;
        switch(r) {
            case 1:
                n_one++;
                break;
                
            case 2:
                n_two++;
                break;

            case 3:
                n_three++;
                break;

            case 4:
                n_four++;
                break;

            default:
                cout << "invalid value" << "\n";
        }
    }

    c += n_four;

     if (n_one < n_three) {
        c += n_three;
        c += n_two/2;
        c += n_two%2;
        cout << c << "\n";

    } else if (n_one == n_three) {
        c += n_three;
        c += n_two/2;
        c += n_two%2;
        cout << c << "\n";

    }  else {
        c += n_three;
        c += n_two/2;
        
        int sum = (n_two%2) * 2 + (n_one - n_three);
        c += sum/4;
        if (sum%4 != 0) {
            c++;
        }
        cout << c << "\n";
    }
}
