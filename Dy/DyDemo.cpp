//
// Created by MR on 2024/7/17.

#include <cstring>
#include "DynamicArray.h"

void test01(){
    //初始化动态数组
    Dynamic_Array* myArray=Init_Array();
    //打印数组容量
    printf("数组容量：%d\n", Capacity_Array(myArray));
    printf("数组大小：%d\n", Size_Array(myArray));
    //插入元素
    for(int i=0;i<30;i++){
        PushBack_Array(myArray,i);
    }
    printf("数组容量：%d\n", Capacity_Array(myArray));
    printf("数组大小：%d\n", Size_Array(myArray));
//    //删除
//    RemoveByPos_Array(myArray,0);
//    RemoveByValue_Array(myArray,16);
    //查找
    int array = Find_Array(myArray, 5);
    printf("5查找到：pos：%d %d\n",array, At_Array(myArray,array));
    //打印
    Print_Array(myArray);
    //销毁
    FreeSpace_Array(myArray);
}

//int main(){
//
//    test01();
//    system("pause");
//    return 0;
//}