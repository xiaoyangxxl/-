//
// Created by MR on 2024/7/17.

#include <cstring>
#include "DynamicArray.h"

void test01(){
    //��ʼ����̬����
    Dynamic_Array* myArray=Init_Array();
    //��ӡ��������
    printf("����������%d\n", Capacity_Array(myArray));
    printf("�����С��%d\n", Size_Array(myArray));
    //����Ԫ��
    for(int i=0;i<30;i++){
        PushBack_Array(myArray,i);
    }
    printf("����������%d\n", Capacity_Array(myArray));
    printf("�����С��%d\n", Size_Array(myArray));
//    //ɾ��
//    RemoveByPos_Array(myArray,0);
//    RemoveByValue_Array(myArray,16);
    //����
    int array = Find_Array(myArray, 5);
    printf("5���ҵ���pos��%d %d\n",array, At_Array(myArray,array));
    //��ӡ
    Print_Array(myArray);
    //����
    FreeSpace_Array(myArray);
}

//int main(){
//
//    test01();
//    system("pause");
//    return 0;
//}