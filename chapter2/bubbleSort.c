#include <stdio.h>
int main(){
    int arr[] = {1, 4, 2, 0, -23, 34, -100};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
