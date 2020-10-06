#include<stdio.h>
int main(){
int arr[] = {1,2,3,4,5};
int o = sizeof(arr);

printf("%d\n",o);
int n = sizeof(arr)/sizeof(arr[1]);

printf("%d",n);

return 0;
}
