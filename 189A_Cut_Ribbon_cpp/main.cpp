#include <iostream>
#include <vector>
//#include <bits/stdc++.h>

int main() {
    int num, ribbonLength;
    std::vector<int> pieceList;
    for (int i = 0; i < 4; i++) {
        std::cin >> num;
        if (i == 0) {
            ribbonLength = num;
        } else {
            pieceList.push_back(num);
        }
    }

    sort(pieceList.begin(), pieceList.end());

    int first = pieceList.at(0);
    int second = pieceList.at(1);
    int third = pieceList.at(2);

    int output = 0;
    std::vector<int> outputList;

    int thirdAddition, secondAddition, firstAddition;
    int thirdQuotient = ribbonLength / third;
    int secondQuotient = ribbonLength / second;
    int firstQuotient = ribbonLength / first;

    if (ribbonLength % first == 0) {
        std::cout << ribbonLength / first;
    } else {

        for (int i = 0; i <= thirdQuotient; i++) {
            thirdAddition = third * i;
            for (int j = 0; j <= secondQuotient; j++) {
                secondAddition = second * j;

                for (int k = 0; k <= firstQuotient; k++) {
                    firstAddition = first * k;
                    int sum = firstAddition + secondAddition + thirdAddition;
                    if (sum > ribbonLength) {
                        break;
                    }

                    if (sum == ribbonLength) {
                        int localOutput = i + j + k;
                        if (output < localOutput) {
                            output = localOutput;
                        }
                    }
                }
            }
        }

        std::cout << output;
    }
    return 0;
}