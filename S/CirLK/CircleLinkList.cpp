//
// Created by MR on 2024/7/24.
//

//#include "CircleLinkList.h"
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//
//int compare(CircleLinkNode *pCirclelinknode, CircleLinkNode *pCirclelinknode1);
//
////初始化函数
//CircleLinkList *Init_CircleLinkList() {
//    auto * clist=(CircleLinkList*) malloc(sizeof(CircleLinkList));
//    clist->head->next=(clist->head);
//    clist->size=0;
//    return clist;
//}
////插入函数
//void Insert_CircleLinkList(CircleLinkList * clist,int pos,CircleLinkNode* data){
//    if(clist== nullptr){
//        return;
//    }
//    if(data== nullptr){
//        return;
//    }
//    if (pos < 0 || pos > clist->size){
//        return;
//    }
//    //根据位置查找结点
//    //辅助指针变量
//    auto *pCurrent= reinterpret_cast<CircleLinkNode *>(&(clist->head));
//    for(int i=0;i<pos;i++){
//        pCurrent =pCurrent->next;
//    }
//    //新数据入链表
//    data->next =pCurrent->next;
//    pCurrent->next=data;
//
//    clist->size++;
//}
////获得第一个元素
//CircleLinkNode * Front_CircleLinkList(CircleLinkList * clist){
//    return clist->head->next;
//}
////根据位置删除
//void RemoveByPos_CircleLinkList(CircleLinkList * clist,int pos){
//    if(clist== nullptr){
//        return;
//    }
//    if(pos<0||pos>=clist->size){
//        return;
//    }
//    //根据pos找结点 辅助指针变量
//    auto *pCurrent= reinterpret_cast<CircleLinkNode *>(&(clist->head));
//    for(int i=0;i<pos;i++){
//        pCurrent=pCurrent->next;
//    }
//    //缓存当前结点的下一个结点
//    CircleLinkNode *pNext=pCurrent->next;
//    pCurrent->next=pNext->next;
//
//    clist->size--;
//}
////根据值删除
//void RemoveByValue_CircleLinkList(CircleLinkList * clist, CircleLinkNode *data, COMPARENODE* comparenode){
//    if(clist==nullptr){
//        return;
//    }
//    if(data==nullptr){
//        return;
//    }
//    //这个是循环链表，辅助指针
//    auto *pPrev= reinterpret_cast<CircleLinkNode *>(&(clist->head));
//    CircleLinkNode *pCurrent =pPrev->next;
//    int i=0;
//    for( i=0;i<clist->size;i++){
//        if(comparenode(pCurrent,data)== true){
//            pPrev->next=pCurrent->next;
//            break;
//        }
//        pPrev=pCurrent;
//        pCurrent=pCurrent->next;
//    }
//}
////获取链表长度
//int Size_CircleLinkList(CircleLinkList * clist){
//    return clist->size;
//}
////判断是否为空
//int IsEmpty_CircleLinkList(CircleLinkList * clist){
//    if(clist->size==0){
//        return CIRCLELINKLIST_TRUE;
//    }
//    return CIRCLELINKLIST_FALSE;
//}
////查找
//int Find_CircleLinkList(CircleLinkList * clist,CircleLinkNode* data,COMPARENODE* comparenode){
//    if(clist== nullptr){
//        return -1;
//    }
//    if(data== nullptr){
//        return -1;
//    }
//    //遍历
//    CircleLinkNode *pCurrent=clist->head->next;
//    int flag=-1;
//     for(int i=0;i<clist->size;i++){
//         if(comparenode (pCurrent,data) == true){
//             flag=i;
//             break;
//         }
//         pCurrent=pCurrent->next;
//     }
//    return flag;
//}
//
////打印
//void Print_CircleLinkList(CircleLinkList * clist,PRINTNODE print){
//    if(clist== nullptr){
//        return;
//    }
//    //辅助指针变量
//    CircleLinkNode * pCurrent=clist->head->next;
//    for(int i=0;i<clist->size*2;i++){
//        if(&pCurrent == &(clist->head)){
//            pCurrent=pCurrent->next;
//        }
//        print(pCurrent);
//        pCurrent=pCurrent->next;
//    }
//}
////释放内存
//void FreeSpace_CircleLinkList(CircleLinkList * clist){
//    if(clist== nullptr){
//        return;
//    }
//    free(clist);
//}