#include <stdio.h>
#include <stdlib.h>

void swap(int array[],int a,int b){
    array[a] = array[a] + array[b];
    array[b] = array[a] - array[b];
    array[a] = array[a] - array[b];
}

void shellShort(int array[],int length){
    int gap;
    for(gap = length/2;gap>0;gap = gap /2){
        int i;
        for(i = gap;i < length;i++){
            int j = i;
            while(j - gap >= 0 && array[j] < array[j - gap]){
                swap(array,j,j - gap);
                j = j - gap;
            }
        }
    }
}

int main()
{
    int scores[] = {9,6,5,8,0,7,4,3,1,2};
    int length = sizeof(scores)/sizeof(scores[0]);
    shellShort(scores,length);
    for(int i = 0;i < length;i++){
        printf("%d ",*(scores + i));
    }
    return 0;
}
