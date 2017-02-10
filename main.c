
#include <stdio.h>

int* Insertion_Sort(int* array){
    int tmp=0, j=0;
    for(int i = 1; i < 10; i ++){
        tmp = array[i];          // tmp = operating value
        j = i - 1;
        while( j > -1 && tmp < array[j]){
            array[j+1] = array[j];    // right shift
            j--;
        }
        array[j+1] = tmp; // Insert new value
    }
    return array;
}

int main() {
    int data[10] = {34,36,11,99,48,44,28,66,55,19}, *array;
    array = Insertion_Sort(data);
    for(int k=0; k<10;k++){printf("%d\n",*(array+k));}
    return 0;
}
