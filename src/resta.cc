#include "../include/trinomios"

void RestaTrinomios(int a1, int b1, int c1, int a2, int b2, int c2, int array[]) {
    array[0] = a1 - a2;
    array[1] = b1 - b2;
    array[2] = c1 - c2;
} 