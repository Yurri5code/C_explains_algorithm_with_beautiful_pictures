#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int scores[] = {90,70,50,80,60,85};
    printf("please enter the index to be deleted : \n");
    int index = 0;
    scanf("%d",&index);

    int length = sizeof(scores) / sizeof(scores[0]);
    int tempArray[length - 1];
    int i;
    for(i = 0;i < length;i++){
        if(i < index){
            tempArray[i] = scores[i];
        }
        if(i > index){
            tempArray[i - 1] = scores[i];
        }
    }

    memcpy(scores,tempArray,sizeof(tempArray));
    for(i = 0;i < length - 1;i++){
        printf("%d  ",scores[i]);
    }

    return 0;
}
