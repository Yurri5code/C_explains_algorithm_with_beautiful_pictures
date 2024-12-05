#include <stdio.h>
#include <stdlib.h>

void mergeSort(int array[],int temp[],int left,int right){
    if(left < right){
        int center = (left + right)/2;
        mergeSort(array,temp,left,center);//left merge sort
        mergeSort(array,temp,center+1,right);//right merge sort
        merge(array,temp,left,center+1,right);//merge two ordered arrays
    }
}

void merge(int array[],int temp[],int left,int right,int rightEndIndex){
    int leftEndIndex = right - 1;
    int tempIndex = left;
    int elementNumber = rightEndIndex - left + 1;

    while(left <= leftEndIndex && right <= rightEndIndex){
        if(array[left] <= array[right]){
            temp[tempIndex++] = array[left++];
        }else{
            temp[tempIndex++] = array[right++];
        }
    }

    while(left <= leftEndIndex){
        temp[tempIndex++] = array[left++];
    }

    while(right <= rightEndIndex){
        temp[tempIndex++] = array[right++];
    }

    for(int i = 0;i < elementNumber;i++){
        array[rightEndIndex] = temp[rightEndIndex];
        rightEndIndex--;
    }
}

void sort(int array[],int length){
    int temp[length];
    mergeSort(array,temp,0,length - 1);
}

int main()
{
    int scores[] = {50,65,99,87,74,63,76,100,92};
    int length = sizeof(scores)/sizeof(scores[0]);
    sort(scores,length);

    for(int i = 0;i < length;i++){
        printf("%d   ->",scores[i]);
    }
    return 0;
}
