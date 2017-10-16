#include <algorithm>
#include <utility>

using std::swap;

template<typename T>
void bubble_sort(T arr[], int len) {
    for(int i=0; i<len-1; i++)
        for(int j=0; j<len-1-i; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}
