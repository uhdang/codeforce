#include <iostream>
#include <vector>


//he can break either his best or his worst performance record.
// First, it is amazing if during the contest the coder earns
// strictly more points that he earned on each past contest.
// Second, it is amazing if during the contest the coder earns
// strictly less points that he earned on each past contest.
// A coder's first contest isn't considered amazing.
// Now he wants to count the number of amazing performances
// the coder had throughout his whole history of participating
// in contests. But the list of earned points turned out long
// and Vasya can't code... That's why he asks you to help him.

int main()
{
    int numInput {};
    int num;
    int amazingCount = 0;
    std::cin >> numInput;
    std::vector<int> inputList;
    for (int i = 0; i < numInput; i++) {
        std::cin >>  num;
        inputList.push_back(num);
    }

    int min { };
    int max { };
    for (int i = 0; i < numInput; i++) {

        for (int j = 0; j < numInput; j++) {
            if (i == 0 && j == 0) {
                min = inputList.at(i);
                max = inputList.at(i);
                break;
            }
            if (j >= i) {
                break;
            }
            int inputListAt = inputList.at(i);

            if (inputListAt > max) {
                amazingCount += 1;
                max = inputList.at(i);
            }
            if (inputListAt < min) {
                amazingCount += 1;
                min = inputList.at(i);
            }
        }
    }
    std::cout << amazingCount << "\n";
    return 0;
}