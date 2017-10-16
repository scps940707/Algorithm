template<typename T>
void insertion_sort(T arr[] ,int len) {
    for(int i=1, j=0; i<len; i++) {
        T temp = arr[i];
        for(j=i-1; j>=0 && arr[j]>temp; j--)
            arr[j+1] = arr[j];
        arr[j+1] = temp;
    }
}
