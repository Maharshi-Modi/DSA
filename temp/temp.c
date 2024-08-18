void insertion_sort(int arr[]){
 
    int i;
    int temp;
    int j;
    for(i = 1 ; i < size ; i++ ){
        temp = arr[i];
        for(j = i -1 ; j >= 0 ; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

}
