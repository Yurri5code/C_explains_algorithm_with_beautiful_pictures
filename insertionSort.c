#include <stdio.h>
#include <stdlib.h>

int main()
{
    int scores[] = {90,70,50,80,60,85};
    int length = sizeof(scores) / sizeof(scores[0]);
    sort(scores,length);
    printArray(scores,length);
    return 0;
}

void sort(int arrays[],int length){
    int i,j;
    for(i = 0;i < length;i++){
        int insertElement = arrays[i];
        int insertPosition = i;
        for(j = insertPosition - 1;j >= 0;j--){
            if(insertElement < arrays[j]){
                arrays[j+1] = arrays[j];
                insertPosition--;
            }
        }
        arrays[insertPosition] = insertElement;
    }
}

void printArray(int arrays[],int length){
    for(int i = 0;i < length;i++){
        printf("%d  ",arrays[i]);
    }
    printf("\n");
}
