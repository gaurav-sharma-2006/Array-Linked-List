#include<stdio.h>
int print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int insertion(int arr[],int size,int index,int element){
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    print_array(arr,size);
    insertion(arr,size,2,4);
    size++;
    print_array(arr,size);
}