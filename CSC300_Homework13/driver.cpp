#include <iostream>
#include "BinaryTree.hpp"

using namespace std;

int main(int argc, char** argv)
{
    BinaryTree* bt = new BinaryTree();
    bt->add(5);
    bt->add(2);
    bt->add(13);
    bt->add(17);
    cout << "count: ";
    cout << bt->getCount() << endl;
    bt->visitInOrder();
    cout << "\n";
    bt->visitPreOrder();
    cout << "\n";
    bt->visitPostOrder();
    return 0;
}