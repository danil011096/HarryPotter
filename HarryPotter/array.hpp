#pragma once

#include <cstdlib>
#include <ctime>

// ������������� � ����� �������

#define vermiculus (arr, size) \
    for(int i = 0; i < size; i++) \
        std::cout << arr[i] << " "; \
    std::cout << std::endl; \

#define geminio(arr, size, left, right) \
    std::srand(std::time(0)); \
    for(int i = 0; i < size; i++) { \
        arr[i] = std::rand() % (right - left) + left; \
    }

