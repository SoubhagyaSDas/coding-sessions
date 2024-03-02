#include <iostream>

using namespace std;

void merge_sort(int* a, int si, int ei) {
    if (si >= ei) {
        return;
    }

    int mid = (si + ei) / 2;

    merge_sort(a, si, mid);
    merge_sort(a, mid + 1, ei);

    for(int i = 0; i < ei; i++) {
        if
    }
}

int main() {
    return 0;
}