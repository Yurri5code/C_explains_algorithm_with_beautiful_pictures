#include <stdio.h>
#include <stdlib.h>

void reverse(int arrays[],int length){
    int middle = length / 2;
    int i;
    for(i = 0;i <= middle;i++){
        int temp = arrays[i];
        arrays[i] = arrays[length - i -1];
        arrays[length - i -1] = temp;
    }
}

void printArray(int arrays[],int length){
    for(int i = 0;i < length;i++){
        printf("%d ",arrays[i]);
    }
}

int main()
{
    int scores[] = {50,60,70,80,90};
    int length = sizeof(scores) / sizeof(scores[0]);
    printArray(scores,length);
    reverse(scores,length);
    printArray(scores,length);
    return 0;
}
