#include <iostream>
#include "NumberList.h"

void NumberList::Init() {
    for (int i = 0; i < 10; i++)
        numbers[i] = 0;
    count = 0;
}

bool NumberList::Add(int x) {
    if (count >= 10) return false;
    else {
        numbers[count] = x;
        count++;
        return true;
    }
}

void NumberList::Sort() {
    int ultim = count - 1;
    while (ultim > 0) {
        int n1 = ultim - 1;
        ultim = 0;
        for (int i = 0; i <= n1; i++)
            if (numbers[i] > numbers[i + 1]) {
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
                ultim = i;
            }
    }
}

void NumberList::Print() {
    for (int i = 0; i < count; i++)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;
}