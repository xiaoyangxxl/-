//
// Created by MR on 2024/7/17.
//

#ifndef UNTITLED1_DYNAMICAL_H
#define UNTITLED1_DYNAMICAL_H

#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

//动态数据的结构体
typedef struct DYNAMICAL{
    int *pAddr;//存放数据的地址
    int size; //当前有多少个元素
    int capacity; //容量
}Dynamic_Array;

//初始化
Dynamic_Array *Init_Array();
//插入
void PushBack_Array(Dynamic_Array* arr,int value);
//根据位置删除
void RemoveByPos_Array(Dynamic_Array* arr,int pos);
//根据值删除
void RemoveByValue_Array(Dynamic_Array* arr,int value);
//查找
int Find_Array(Dynamic_Array *arr, int i);
//打印
void Print_Array(Dynamic_Array* arr);
//释放动态数组内存
void FreeSpace_Array(Dynamic_Array* arr);

//清空数组
void Clear_Array(Dynamic_Array* arr);
//获得动态数组容量
int Capacity_Array(Dynamic_Array* arr);
//获得动态数组元素个数
int Size_Array(Dynamic_Array* arr);
//根据位置获取某个位置的元素
int At_Array(Dynamic_Array* arr,int pos);
class  DynamicArray {

};

#endif //UNTITLED1_DYNAMICAL_H
