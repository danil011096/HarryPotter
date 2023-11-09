#pragma once

// Подключение библиотек для генерации случайных чисел

#include <cstdlib>
#include <ctime>

// Команды для генерации случайных чисел

#define snufflyforce srand(time(NULL))
#define tergeo rand()