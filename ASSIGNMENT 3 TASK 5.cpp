#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int array[] = {5, 2, 9, 1, 7, 3, 8, 6, 4, 0};
    cout << "MY NAME IS MUHAMMAD TAHA REHMAN" << endl;
    int size = 10;

    sort(array, array + size);

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
