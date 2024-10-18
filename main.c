#include <stdio.h>
#include <malloc.h>


int* DynamicArray(int size){
    int* myarray = (int* )malloc(size * sizeof(int));
    return myarray;
}


int* ArrayFill(int* myarray, int size){
    for(int i = 0; i < size; ++i){
        scanf("%d", (myarray + i));
    }
    return myarray;
}

int ArrayPrint(int* myarray, int size){
    for(int i = 0; i < size; ++i){
        printf("A[%d] = %d\n", i, myarray[i]);
    }
}


int HighestValue(int* myarray, int size){
    int highestvalue = myarray[0];
    for(int i = 0; i < size; ++i){
        if(myarray[i] > highestvalue){
            highestvalue = myarray[i];
        }
    }
    return highestvalue;
}


int LowestValue(int* myarray, int size){
    int lowestvalue = *myarray;
    for(int i = 0; i < size; ++i){
        if(myarray[i] < lowestvalue){
            lowestvalue = myarray[i];
        }
    }
    return lowestvalue;
}


int AverageValue(int* myarray, int size){
    int sum = 0;
    for(int i = 0; i < size; ++i){
        sum += myarray[i];
    }
    return sum / size;
}


int main(int argc, char* argv[]) {


    return 0;
}

