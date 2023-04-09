#include <vector>
#include <iostream>
#include <random>
#include <chrono>
#include <algorithm>

#define N 25
#define MAX 35
#define MIN 0

template <typename T>
void print_vec(std::vector<T> v) {
    std::cout << "[";
    for (T el : v) {
        std::cout << el << " ";
    }

    std::cout << "]" << std::endl;
}

void simpsort(std::vector<int> *arr) {
    int n = arr->size() - 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr->at(i) < arr->at(j)) {
                std::swap((*arr)[i], (*arr)[j]);
            }
        }
    }
}

int main(void) {
    std::vector<int> vec;
    vec.reserve(N);

    unsigned time = std::chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand0 rand(time);

    for (int i = 0; i < N; i++) {
        vec.push_back(rand() % (MAX+1 - MIN)+MIN);
    }

    print_vec(vec);
    simpsort(&vec);
    print_vec(vec);
}