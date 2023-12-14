#include<stdio.h>
int print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int deletion(int arr[],int size,int index){
    for(int i=index;i<=size;i++){
        arr[i]=arr[i+1];
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    print_array(arr,size);
    deletion(arr,size,2);
    size--;
    print_array(arr,size);
}