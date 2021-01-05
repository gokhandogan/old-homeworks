
// GOKHAN DOGAN 17901183


#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int toplam=1;

class TreeNode {
public:

    int numara;

    TreeNode* left;
    TreeNode* right;
    TreeNode(int numara = 0,
        TreeNode* left = NULL, TreeNode* right = NULL)
        : numara(numara), left(left), right(right)
    {   }
};

enum MOD { PREORDER, INORDER, POSTORDER };


class BinarySearchTree {
    TreeNode* root;
    TreeNode* insert(TreeNode* start, int numara) {
        if (start) {
            if (numara < start->numara)
                start->left = insert(start->left, numara);
            else
                start->right = insert(start->right, numara);
        }

        else
            return new TreeNode(numara);
        return start;
    }

    TreeNode* mirror(TreeNode* start) {
        if (start) {
            mirror(start->left);
            mirror(start->right);
            TreeNode* temp = start->left;
            start->left = start->right;
            start->right = temp;
        }
        return start;
    }

public:
    BinarySearchTree(TreeNode* root = NULL) : root(root) {   }
    bool isEmpty()const { return root == NULL; }
    TreeNode* getRoot()const { return root; }

    TreeNode* find(TreeNode* start, int numara) {
        if (start) {
            if (numara < start->numara)
                return find(start->left, numara);
            else if (start->numara < numara)
                return find(start->right, numara);
        }
        return start;
    }

    TreeNode* find(int numara, bool last = false) {
        TreeNode* before = find(root, numara);
        TreeNode* after = before;
        if (last) {
            while (before && (before = find(before->right, numara)))
                after = before;
        }
        return after;
    }

    void insert(int numara) {
        root = insert(root, numara);
    }

    TreeNode* getMin(TreeNode* start) {
        while (start && start->left)
            start = start->left;
        return start;
    }

    TreeNode* getMin() {
        return(getMin(root));
    }

    TreeNode* getMax(TreeNode* start) {
        while (start && start->right)
            start = start->right;
        return start;
    }

    TreeNode* getMax() {
        return getMax(root);
    }

    TreeNode* remove(TreeNode* start, TreeNode* deleted) {
        if (start) {
            if (deleted->numara < start->numara)
                start->left = remove(start->left, deleted);
            else if (start->numara < deleted->numara)
                start->right = remove(start->right, deleted);
            else if (start == deleted) {
                TreeNode* temp = NULL;
                if (start->left && start->right) {
                    temp = getMin(start->right);
                    remove(start, temp);
                    temp->left = start->left;
                    temp->right = start->right;
                }
                else if (start->left)
                    temp = start->left;
                else if (start->right)
                    temp = start->right;
                return temp;
            }
            else
                start->right = remove(start->right, deleted);
        }
        return start;
    }

    void remove(TreeNode* node) {
        if (node) {
            root = remove(root, node);
            delete node;
        }
    }

    void remove(int numara, bool last = false) {
        remove(find(numara, last));
    }

    int height(TreeNode* node) {
        if (node) {
            int left = height(node->left);
            int right = height(node->right);
            return 1 + max(left, right);
        }
        else
            return -1;
    }

    int height() {
        return height(root);
    }

    int depth(TreeNode* start, TreeNode* finish) {
        if (start) {
            if (start == finish)
                return 0;
            int left = depth(start->left, finish);
            int right = depth(start->right, finish);
            return 1 + max(left, right);
        }
        else
            return INT_MIN;
    }

    int depth(TreeNode* finish) {
        return depth(root, finish);
    }

    void preorder(TreeNode* start) {
        if (start) {
            cout << start->numara << " ";
            preorder(start->left);
            preorder(start->right);
        }
    }

    void inorder(TreeNode* start) {
        if (start) {
            inorder(start->left);

            cout << start->numara << " ";
            inorder(start->right);
        }
    }

    void postorder(TreeNode* start) {
        if (start) {
            postorder(start->left);
            postorder(start->right);

            cout << start->numara << " ";
        }
    }

    void print(MOD mod) {
        switch (mod) {
        case PREORDER:
            preorder(root);
            break;
        case INORDER:
            inorder(root);
            break;
        case POSTORDER:
            postorder(root);
            break;
        }
        if (!isEmpty())
            cout << endl << endl;
    }


    void mirror() {
        root = mirror(root);
    }

    void fonksiyon_cift(TreeNode* start, BinarySearchTree& agac) {

        if (start) {
            if ((start->numara%2) == 0) {
                agac.insert(start->numara);
            }
           
            fonksiyon_cift(start->left, agac);
            fonksiyon_cift(start->right, agac);
            
        }
    }

    void fonksiyon_tek(TreeNode* start, BinarySearchTree& agac) {

        if (start) {
            if ((start->numara%2) != 0) {
                agac.insert(start->numara);
            }

            fonksiyon_tek(start->left, agac);
            fonksiyon_tek(start->right, agac);
            
        }
    }

    void sorgu(TreeNode* node) {
        if (node) {
            toplam = toplam * node->numara;
            sorgu(node->left);
            sorgu(node->right);
        }
    }

    int sorgu_1(int aranan) {
        toplam = 1;
        sorgu(root);
        if (toplam==aranan)
            return 1;
        else
            return 0;
        
    }

    bool sorgu_2(int aranan) {
        toplam = 1;
        sorgu(root);
        if (toplam == aranan)
            return true;
        else
            return false;
        
    }

};

int main()
{
    setlocale(LC_ALL, "Turkish");
    cout << boolalpha;


    BinarySearchTree BST;
    BinarySearchTree BSTcift;
    BinarySearchTree BSTtek;
   
    BST.insert(50);
    BST.insert(28);
    BST.insert(46);
    BST.insert(80);
    BST.insert(47);
    BST.insert(96);
    BST.insert(14);
    BST.insert(10);
    BST.insert(68);
    BST.insert(20);
    BST.insert(34);
    BST.insert(71);
    BST.insert(61);
    BST.insert(41);
    BST.insert(82);
    BST.insert(64);
    BST.insert(13);
    BST.insert(18);
    BST.insert(27);
    BST.insert(95);
    BST.insert(74);
    BST.insert(81);
    BST.insert(11);
    BST.insert(36);

    //ÖDEV-1
    cout << "---------ÖDEV-1----------" << endl<<endl;

    TreeNode* BSTkok = BST.getRoot();
    TreeNode* BSTciftkok = BSTcift.getRoot();
    TreeNode* BSTtekkok = BSTtek.getRoot();
    BST.fonksiyon_tek(BSTkok, BSTtek);
    BST.fonksiyon_cift(BSTkok, BSTcift);
    cout << "BST:" << endl << endl;
    BST.print(PREORDER);
    cout << "BST-çift:" << endl << endl;
    BSTcift.print(PREORDER);
    cout << "BST-tek:" << endl << endl;
    BSTtek.print(PREORDER);
    
    //ÖDEV-2
    cout << "---------ÖDEV-2----------" << endl << endl;
    cout << "BST için:" << endl<<endl;
    cout<<BST.sorgu_1(-2147483648)<<endl;
    cout << BST.sorgu_1(-214748364) << endl;
    cout << BST.sorgu_2(-2147483648) << endl;
    cout << BST.sorgu_2(-214748364) << endl;
    cout << endl;
    toplam = 1;
    
    
    return 0;
}