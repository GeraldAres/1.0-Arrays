# 1.0-Arrays
Array function problems

//create a program that prints the product of 10 iteration through the use of for loop
//You'll also need to access the index
#include<stdio.h>
void RunningInteger(int* arr){
  for(int i = 0; i < 10; i++){
    arr[i]  = ( i + 1) * 10;
}
  return;
}

int main(){
  int arr[10] = {0};
  RunningInteger(arr);
  for(int i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
  return 0;
{
  
