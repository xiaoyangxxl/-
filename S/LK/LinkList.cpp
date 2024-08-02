//
// Created by MR on 2024/7/18.
//

#include "LinkList.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

////初始化
//LinkList* Init_LinkList(){
//    auto * list = (LinkList*)malloc(sizeof(LinkList));
//    list->size =0;
//
//    //头结点 是不保存数据信息
//    list->head = (LinkNode*)malloc(sizeof(LinkNode));
//    list->head->date =nullptr;
//    list->head->next = nullptr;
//    return list;
//}
////指定位置插入
//void Insert_LinkList(LinkList* list, int pos, LinkNode *data){
//    if(list == nullptr){
//        return;
//    }
//    if(data == nullptr){
//        return;
//    }
//    //pos越界
//    if(pos<0||pos>list->size){
//        pos=list->size;
//    }
//    //创建新的结点
//    auto* NewNode= (LinkNode*)malloc(sizeof(LinkNode));
//    NewNode->date =data;
//    NewNode->next = nullptr;
//
//    //找结点
//    //辅助指针变量
//    LinkNode * pCurrent = list ->head;
//    for(int i=0;i<pos;i++){
//        pCurrent =pCurrent->next;
//    }
//
//    //新结点入链表
//    NewNode->next =pCurrent->next;
//    pCurrent->next=NewNode;
//    list->size++;
//}
////删除指定位置的值
//void RemoveByPos_LinkList(LinkList* list,int pos){
//    if(list== nullptr){
//        return;
//    }
//    if(pos<0||pos>=list->size){
//        return;
//    }
//    //查找删除结点的前一个位置
//    LinkNode *pCurrent=list->head;
//    for(int i=0;i<pos;i++){
//        pCurrent =pCurrent->next;
//    }
//    //缓存删除结点
//    LinkNode *pDel=pCurrent->next;
//    pCurrent->next =pDel->next;
//    free(pDel);
//
//    list->size--;
//}
////获取链表长度
//[[maybe_unused]] int Size_LinkList(LinkList* list){
//    return list->size;
//}
////查找
//int Find_LinkList(LinkList* list,void* data){
//    if(list== nullptr){
//        return -1;
//    }
//    if(data== nullptr){
//        return -1;
//    }
//    //遍历
//    LinkNode *pCurrent=list->head->next;
//    int i=0;
//    while (pCurrent!= nullptr){
//        if(pCurrent->date==data){
//            break;
//        }
//        i++;
//        pCurrent =pCurrent->next;
//    }
//    return i;
//}
////打印
//void Print_LinkList(LinkList* list, PRINCELINESS print){
//    if(list== nullptr){
//        return;
//    }
//    LinkNode *pCurrent=list->head->next;
//    while (pCurrent!= nullptr){
//        print(pCurrent->date);
//        pCurrent=pCurrent->next;
//    }
//}
////返回第一个结点
//void* Front_LinkList (LinkList* list){
//    return list->head->next;
//}
////释放链表内存
//void FreeSpace_LinkList(LinkList* list){
//    if(list== nullptr){
//        return;
//    }
//    //辅助指针变量
//    LinkNode *pCurrent=list->head;
//    while (pCurrent!= nullptr){
//        //缓存下一个结点
//        LinkNode *pNext=pCurrent->next;
//        free(pCurrent);
//        pCurrent=pNext;
//    }
//    //释放链表内存
//    list->size=0;
//    free(list);
//}
