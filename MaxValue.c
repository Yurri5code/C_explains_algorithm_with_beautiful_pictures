/*
cette maniere de trouver le max d'un tableau , permet de le trier de facon incomplete, si le trie par insertion se suivait
apres l'operation de la recherche du max alors on gagnerais enormement en temps

25.11.2024
*/

#include <stdio.h>
#include <stdlib.h>

int max(int arrays[],int length){
    for(int i = 0;i < length - 1;i++){
        if(arrays[i] > arrays[i+1]){
            int temp = arrays[i];
            arrays[i] = arrays[i+1];
            arrays[i + 1] = temp;
        }
    }
    int maxValue = arrays[length - 1];
    return maxValue;
}

void printArray(int arr[],int length){
    for(int i = 0;i < length;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

//a partir de cette algorithm peut s'effectuer le tri a bulle
void sort(int arrays[],int length){
    for(int i = 0;i < length - 1;i++){
        for(int j = 0;j < length - i -1;j++){
            if(arrays[j] > arrays[j + 1]){
                int flag = arrays[j];
                arrays[j] = arrays[j + 1];
                arrays[j + 1] = flag;
            }
        }
    }
}

int main()
{
    int scores[] = {45,23,12,1234,54,29,65,56,11,22,69,90};
    int length = sizeof(scores)/sizeof(scores[0]);
   // int maxValue = max(scores,length);
   // printf("Max Value = %d\n",maxValue);
   sort(scores,length);
    printArray(scores,length);

    return 0;
}

