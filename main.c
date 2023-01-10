#include <stdio.h>
/*
 * 5.2 数组的访问越界与数组的传递
 *  Ⅰ、数组的访问越界
 *
 *  Ⅱ、数组的传递
 * */
//一维数组的存储和访问越界
//int main() {
//   int a[5]={1,2,3,4,5}; //定义数组时，数组长度必须固定
//   int j=20;
//   int i=10;
//   a[5]=6; //越界访问
//   a[6]=7; //越界访问会造成数据异常
//   printf("i=%d\n",i); //i发生改变 访问越界的危险之处 ———— 未对变量i赋值，其值却发生了改变！
//    return 0;
//}

//数组的传递
//一维数组在传递时，数组长度无法传递给子函数
//C语言的函数调用方式是值传递
void print(int arr[],int sz){//arr存储的是数组的首地址，在调用函数传递时，是将数组的首地址给了变量arr(变量arr是指针类型)
    int i;
    for(i=0;i<sz;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    arr[4]=8;//在子函数中修改数组元素
}

int main(){
    int arr[5]={1,2,3,4,5};
    int sz=sizeof(arr)/sizeof(int);
    print(arr,sz);
    printf("arr[4]=%d\n",arr[4]);
    return 0;
}
