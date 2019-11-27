#include "AB.h"

string AB::createString(int N, int K) {
    if (!AB::isPossible(N, K)) return "";
    string ABString = string(N, 'B');
    int res = K - N;
    int step = 0;
    while (res >= -step) {
        ABString[step] = 'A';
        step++;
        res = res - (N - (step * 2));
    }
    ABString[-(res + 1)] = 'A';
    return ABString;
}

bool AB::isPossible(int N, int K) {
    int firstPart = N / 2;
    int lastPart = N - firstPart;
    return (firstPart * lastPart) >= K;
}
