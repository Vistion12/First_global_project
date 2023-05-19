using namespace std;
#include <iostream>


struct vector {
    int* array;
    int size;
};

vector init_vec(int size) {
    vector mas;
    mas.array = new int[size];
    mas.size = size;

    for (int i = 0; i < size; ++i) {
        mas.array[i] = rand() % 56;
    }
    return mas;
}



int main()
{
    
    vector mas = init_vec(4);


















}

