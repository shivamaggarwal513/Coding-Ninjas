#include <iostream>
#include "01BinaryTrees.h"
using namespace std;

int main()
{
    BinaryTreeNode<int> *root = takeInputRec();
    printTreeRec(root);
    delete root;
    return 0;
}