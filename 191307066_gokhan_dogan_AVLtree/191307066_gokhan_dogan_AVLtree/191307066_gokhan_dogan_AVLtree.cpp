﻿// GÖKHAN DOĞAN 17901183

#include<iostream> 
using namespace std;

 
class AVLNode
{
public:
    int key;
    AVLNode* left;
    AVLNode* right;
    int depth;
};

 
int max(int a, int b) {
    return (a > b) ? a : b;
}


int depth(AVLNode* n)
{
    if (n == NULL)
        return 0;
    return n->depth;
}

AVLNode* newNode(int key)
{
    AVLNode* node = new AVLNode();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->depth = 1;  
    return(node);
}

AVLNode* rightRotate(AVLNode* y)
{
    AVLNode* x = y->left;
    AVLNode* T2 = x->right;

     
    x->right = y;
    y->left = T2;

      
    y->depth = max(depth(y->left),
        depth(y->right)) + 1;
    x->depth = max(depth(x->left),
        depth(x->right)) + 1;

      
    return x;
}


AVLNode* leftRotate(AVLNode* x)
{
    AVLNode* y = x->right;
    AVLNode* T2 = y->left;

      
    y->left = x;
    x->right = T2;
      
    x->depth = max(depth(x->left),
        depth(x->right)) + 1;
    y->depth = max(depth(y->left),
        depth(y->right)) + 1;

      
    return y;
}

  
int getBalance(AVLNode* N)
{
    if (N == NULL)
        return 0;
    return depth(N->left) -
        depth(N->right);
}

AVLNode* insert(AVLNode* node, int key) {
    
    if (node == NULL)
        return(newNode(key));

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else   
        return node;

    
    node->depth = 1 + max(depth(node->left), depth(node->right));

    int balance = getBalance(node);        

     

     
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

      
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);
     
    if (balance > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

     
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}

 
AVLNode* minValueNode(AVLNode* node)
{
    AVLNode* current = node;

    
    while (current->left != NULL)
        current = current->left;

    return current;
}
  
AVLNode* deleteNode(AVLNode* root, int key)
{
    if (root == NULL)
        return root;

     
    if (key < root->key)
        root->left = deleteNode(root->left, key);

    else if (key > root->key)
        root->right = deleteNode(root->right, key);

    else
    {
         
        if ((root->left == NULL) ||
            (root->right == NULL))
        {
            AVLNode* temp = root->left ?
                root->left :
                root->right;

            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else   
                *root = *temp;
            free(temp);
        }
        else
        {
            AVLNode* temp = minValueNode(root->right);

            root->key = temp->key;

              
            root->right = deleteNode(root->right,
                temp->key);
        }
    }

    if (root == NULL)
        return root;

      
    root->depth = 1 + max(depth(root->left),
        depth(root->right));

     
    int balance = getBalance(root);

    

      
    if (balance > 1 &&
        getBalance(root->left) >= 0)
        return rightRotate(root);

      
    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
      
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);

      
    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

void inOrder(AVLNode* root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->key << " ";
        inOrder(root->right);
    }
}
 
int main()
{
    AVLNode* root = NULL;

    
    root = insert(root, 12);
    root = insert(root, 8);
    root = insert(root, 18);
    root = insert(root, 5);
    root = insert(root, 11);
    root = insert(root, 17);
    root = insert(root, 4);

    
    cout << "Inorder Siralama: \n";
    inOrder(root);
    root = deleteNode(root, 5);
    cout << "\n\n5 Degeri Silindikten Sonra Inorder Siralama: \n";
    inOrder(root);
    cout << endl;
    return 0;
}
