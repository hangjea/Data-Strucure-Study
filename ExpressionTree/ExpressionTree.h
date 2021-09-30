#ifndef __EXPRESSION_TREE_H__
#define __EXPRESSION_TREE_H__

#include "BinaryTree2.h"

BTreeNode * MakeExpTree(char exp[]);// 수식 트리 구성 문자열로 구성됨
int EvaluateExpTree(BTreeNode * bt); //수식 트리 계산

void ShowPrefixTypeExp(BTreeNode * bt); //전위 
void ShowInfixTypeExp(BTreeNode * bt);//중위
void ShowPostfixTypeExp(BTreeNode * bt);//후위

#endif
