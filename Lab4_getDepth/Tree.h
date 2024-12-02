#ifndef TREE_H
#define TREE_H

#include "Node.h"
using namespace std;

class Tree{
    private:
        Node* root;

        void Display(Node* node){
            if(node==NULL)
                return;
            Display(node->Left);
            cout<<node->data<<"  ";
            Display(node->Right);
        }

        int getDepth(Node* current){
            if(current == NULL){
                return 0;
            }
            int maxLvl_Left  = getDepth(current->Left);
            int maxLvl_Right = getDepth(current->Right);
            if(maxLvl_Left > maxLvl_Right)
                return maxLvl_Left+1;
            else
                return maxLvl_Right+1;

        }

    public:
        Tree(){
            root=NULL;
        }

        void add(int data){
            Node * newNode=new Node(data);
            Node * parent=NULL;
            if(root == NULL)
                root=newNode;
            else{
                Node * current=root;
                while(current != NULL){
                    parent=current;
                    if(data>current->data)
                        current=current->Right;
                    else
                       current=current->Left;
                  }
                if(data > parent->data)
                    parent->Right=newNode;
                else
                    parent->Left=newNode;
            }
        }

        int getMaxDepth() {
            return getDepth(this->root);
        }

        void traverse(){
            Display(root);
        }
        ~Tree() {}
};

#endif // TREE_H
