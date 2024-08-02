//
// Created by MR on 2024/7/24.
#include "CircleLinkList.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

typedef struct PERSON{
    CircleLinkNode node;
    char name[64];
    int age;
    int score;
}Person;

void Myprint(CircleLinkNode* data){
    auto *p=(Person*)data;
    printf("%s %d %d",p->name,p->age,p->score);
}
//int main(){
//    //创建循环链表
//    CircleLinkList *clist= Init_CircleLinkList();
//    //创建数据
//    Person p1,p2,p3,p4,p5;
//    strcpy(p1.name,"aaa");
//    strcpy(p2.name,"bbb");
//    strcpy(p3.name,"ccc");
//    strcpy(p4.name,"ddd");
//    strcpy(p5.name,"eee");
//    p1.score=10;
//    p2.score=20;
//    p3.score=30;
//    p4.score=40;
//    p5.score=50;
//    //插入链表
//    Insert_CircleLinkList(clist,0,(CircleLinkNode*)&p1);
//    Insert_CircleLinkList(clist,0,(CircleLinkNode*)&p2);
//    Insert_CircleLinkList(clist,0,(CircleLinkNode*)&p3);
//    Insert_CircleLinkList(clist,0,(CircleLinkNode*)&p4);
//    Insert_CircleLinkList(clist,0,(CircleLinkNode*)&p5);
//    //打印
//    Print_CircleLinkList(clist,Myprint);
//    FreeSpace_CircleLinkList(clist);
//}