#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
  int val;
  struct Node* next;
} Node;

int main() {
  // 读入 m 和 n
  int m, n;
  printf("Input integer m and n: \n");
  scanf("%d %d", &m, &n);
  printf("Exit in order: \n");

  // 创建一个长度为 m 的循环链表
  Node* head = (Node*)malloc(sizeof(Node));
  head->val = 1;
  head->next = head;
  Node* curr = head;
  for (int i = 2; i <= m; ++i) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->val = i;
    node->next = head;
    curr->next = node;
    curr = node;
  }

  // 从 head 开始报数
  Node* prev = curr;
  curr = head;
  while (curr != curr->next) {
    // 报数，如果到 n，删除当前节点
    for (int i = 1; i < n; ++i) {
      prev = curr;
      curr = curr->next;
    }
    printf("%d ", curr->val);  // 输出当前节点的值
    prev->next = curr->next;  // 删除当前节点
    free(curr);  // 释放内存
    curr = prev->next;  // 更新当前节点
  }
  printf("%d\n", curr->val);  // 输出最后一个节点的值

  // 释放内存
  free(curr);

  
  return 0;
}
