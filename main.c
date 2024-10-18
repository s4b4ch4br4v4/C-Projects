#include <stdio.h>
#include <malloc.h>



// rac sheexeba massivs:

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

void ArrayPrint(int* myarray, int size){
    for(int i = 0; i < size; ++i){
        printf("A[%d] = %d\n", i, myarray[i]);
    }
}

void ArrayPrint1(int myarray[], int size){
    for(int i = 0; i < size; ++i){
        printf("A[%d] = %d\n", i, myarray[i]);
    }
}


// matematikuri moqmedebebi:

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

int SumSquareElements(int* myarray, int size){
    int sum = 0;
    for(int i = 0; i < size; ++i){
        sum += myarray[i] * myarray[i];
    }
    return sum;
}


// rac sheexeba fails:

FILE* CreateFile(char filename[]){
    FILE* myfile = fopen(filename, "a");
    return myfile;
}

void FillMyFileWithThatArray(int* myarray, int size, FILE* myfile){
    for(int i = 0; i < size; ++i){
        fprintf(myfile, "A[%d] = ", i);
        fprintf(myfile, "%d\n", myarray[i]);
        fclose(myfile);
    }
}



int main(int argc, char* argv[]){

    int size;
    printf("Sheiyvanet tqveni masivis elementta raodenoba: "); scanf("%d\n", &size);
    int* myarray = DynamicArray(size);
    ArrayFill(myarray, size);
    ArrayPrint(myarray, size);

    printf("\n");

    int myarray1[] = {HighestValue(myarray, size), LowestValue(myarray, size), AverageValue(myarray, size), SumSquareElements(myarray, size)};
    ArrayPrint1(myarray1, 4);


    char filename[255];
    printf("Sheiyvanet tqveni failis saxeli da !gafartoeba!: "); scanf("%s", filename);

    FillMyFileWithThatArray(myarray1, 4, CreateFile(filename));

    return 0;
}
