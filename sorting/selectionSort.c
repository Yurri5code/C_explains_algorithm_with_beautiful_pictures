void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

//l'exemple suivant est a verifier il ne fonctionne pas correctement 
void selectSort(int arrays[],int length){
    int minIndex;
    int i,j;
    for(i = 0;i < length - 1;j++){ //i a la place de j mais malgre ca le probleme continue
        minIndex = i;
        int minValue = arrays[minIndex];
        for(j = i;j < length - 1;j++){
            if(minValue > arrays[j+1]){
                minValue = arrays[j + 1];
                minIndex = j + 1;
            }
        }
    }
    if(i != minIndex){
        int temp = arrays[i];
        arrays[i] = arrays[minIndex];
        arrays[minIndex] = temp;
    }
}
