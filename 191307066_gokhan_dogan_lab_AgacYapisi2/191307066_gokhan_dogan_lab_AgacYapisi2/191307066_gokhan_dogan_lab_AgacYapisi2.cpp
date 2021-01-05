// GOKHAN DOGAN 17901183


#include <iostream>
#include <string>
#include <clocale>

using namespace std;



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

    void fonksiyon() {
        fonksiyon(root);
    }

    void fonksiyon(TreeNode* start) {
        
        if (start) {
            if (start->numara <= 70 && start->numara >= 60)
                remove(start->numara);
            else {
                fonksiyon(start->left);
                fonksiyon(start->right);
            }           
        }
    }

    void fonksiyon_3(TreeNode* start, BinarySearchTree &agac) {
        if (start) {
            agac.insert(start->numara);
            fonksiyon_3(start->left,agac);
            fonksiyon_3(start->right,agac);
        }

    }

    void fonksiyon_2(TreeNode* start, BinarySearchTree &agac) {

        if (start) {
            if (start->numara <= 70 && start->numara >= 60) {
                fonksiyon_3(start, agac);
            }
                
            else {
                fonksiyon_2(start->left,agac);
                fonksiyon_2(start->right,agac);
            }
        }
    }

   

};

int main()
{
    setlocale(LC_ALL, "Turkish");



    BinarySearchTree A;

    //a şıkkının icra edilmesi
    cout << "----------A ŞIKKI----------" << endl << endl;

    A.insert(50);
    A.insert(28);
    A.insert(46);
    A.insert(80);
    A.insert(47);
    A.insert(96);
    A.insert(14);
    A.insert(10);
    A.insert(68);
    A.insert(20);
    A.insert(34);
    A.insert(71);
    A.insert(61);
    A.insert(41);
    A.insert(82);
    A.insert(64);
    A.insert(13);
    A.insert(18);
    A.insert(27);
    A.insert(95);
    A.insert(74);
    A.insert(81);
    A.insert(11);
    A.insert(36);
    A.print(PREORDER);
    A.print(INORDER);
    A.print(POSTORDER);

    //b şıkkının icra edilmesi
    cout << "----------B ŞIKKI----------" << endl << endl;

    int sayi;
    cout << "aramak istediğiniz sayıyı giriniz.: ";
    cin >> sayi;
    if (A.find(sayi) == NULL)
        cout <<"sayı bulunamadığından adresi null dönmüştür. : "<< A.find(sayi) << endl;
    else
        cout <<"sayının adresi : "<< &A.find(sayi)->numara << endl<<endl;

    //c şıkkının icra edilmesi
    cout << "----------C ŞIKKI----------" << endl << endl;

    cout << "fonksiyon icra edilmeden önce preorder sıralama:" << endl;
    A.print(PREORDER);
    cout << "fonksiyon icra edildikten sonra preorder sıralama:" << endl;
    A.fonksiyon();
    A.print(PREORDER);
    
    //d şıkkının icra edilmesi
    cout << "----------D ŞIKKI----------" << endl << endl;
        
    BinarySearchTree B;
    TreeNode* Akok = A.getRoot();
    A.fonksiyon_2(Akok, B);

    B.print(PREORDER);


    return 0;
}