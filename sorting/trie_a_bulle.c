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
