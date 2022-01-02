#include <iostream>
#include <vector>

int main()
{
    int num;
    int numInput = 2;
    int numProblems;
    int duration;
    std::vector<int> inputList;
    for (int i= 0; i < numInput; i++) {
        std::cin >> num;
        inputList.push_back(num);
    }
    numProblems = inputList.at(0);
    duration = inputList.at(1);

    int givenTime = 240 - duration;
    int output = numProblems;
    for (int i = 1; i < numProblems + 2; i++) {
        givenTime -= i * 5;
        if (givenTime < 0) {
            output = i - 1;
            break;
        }
    }
    std::cout << output;
    return 0;
}