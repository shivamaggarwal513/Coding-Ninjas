#include <iostream>
#include "01BinaryTrees.h"
using namespace std;

int main()
{
    BinaryTreeNode<int> *root = takeInputLW();
    cout << numNodes(root) << "\n";
    delete root;
    return 0;
}