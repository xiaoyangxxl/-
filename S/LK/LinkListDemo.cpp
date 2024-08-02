//
// Created by MR on 2024/7/18.
//
//#include "LinkList.h"
//#include <cstring>
//#include <cstdlib>
//#include <cstring>
//#include <cstdio>
//
//typedef struct PERSON{
//    char name[64];
//    int age;
//    int score;
//}Person;
//
////打印函数
//void MyPrint(void *data){
//    auto *p=(Person*)data;
//    printf("Name:%s Age:%d Score:%d\n",p->name,p->age,p->score);
//}

//int main(void){
//    //创建链表
//    LinkList* list=Init_LinkList();
//    Person p1={"aaa",18,100};
//    Person p2={"bbb",19,91};
//    Person p3={"ccc",20,85};
//    Person p4={"ddd",21,95};
//    Person p5={"eee",22,72};
//    //数据插入链表
//    Insert_LinkList(list,0,&p1);
//    Insert_LinkList(list,0,&p2);
//    Insert_LinkList(list,0,&p3);
//    Insert_LinkList(list,0,&p4);
//    Insert_LinkList(list,0,&p5);
//    //打印
//    Print_LinkList(list,MyPrint);
//    //删除
//    RemoveByPos_LinkList(list, 3);
//    printf("------------\n");
//    //打印
//    Print_LinkList(list,MyPrint);
//    //销毁链表
//    FreeSpace_LinkList(list);
//    return 0;
//}