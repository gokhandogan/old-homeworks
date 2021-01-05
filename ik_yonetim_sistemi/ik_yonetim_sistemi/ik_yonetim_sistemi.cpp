
#include <iostream>
#include <string>
#include <clocale>
#include <fstream>
#include <istream>
using namespace std;
ofstream yazma;


class TreeNode {
public:
    string ad;
    string adres;
    int telefon;
    string eposta;
    int dogum_tarihi;
    string dil_1;
    string dil_2;
    string dil_3;
    string ehliyet_1;
    string ehliyet_2;
    string okul_lise;
    string okul_lisans;
    string okul_yuksek_lisans;
    string okul_dotora;
    string bolum_lise;
    string bolum_lisans;
    string bolum_yuksek_lisans;
    string bolum_dotora;
    int lise_baslangic;
    int lise_bitis;
    int lisans_baslangic;
    int lisans_bitis;
    int yuksek_lisans_baslangic;
    int yuksek_lisans_bitis;
    int dotora_baslangic;
    int dotora_bitis;
    int not_lise;
    int not_lisans;
    int not_yuksek_lisans;
    int not_dotora;
    string is_deneyim_1;
    string is_deneyim_2;
    string is_deneyim_3;
    string is_deneyim_4;
    string is_deneyim_5;
    string is_deneyim_6;
    string is_adres_1;
    string is_adres_2;
    string is_adres_3;
    string is_adres_4;
    string is_adres_5;
    string is_adres_6;
    string is_pozisyon_1;
    string is_pozisyon_2;
    string is_pozisyon_3;
    string is_pozisyon_4;
    string is_pozisyon_5;
    string is_pozisyon_6;
    float is_tecrube_1;
    float is_tecrube_2;
    float is_tecrube_3;
    float is_tecrube_4;
    float is_tecrube_5;
    float is_tecrube_6;
    
    TreeNode* left;
    TreeNode* right;
    TreeNode(string ad = NULL, string adres=NULL, int telefon=0, string eposta=NULL,
        int dogum_tarihi=0, string dil_1=NULL, string dil_2 = NULL, string dil_3 = NULL,
        string ehliyet_1=NULL, string ehliyet_2=NULL, string okul_lise=NULL,
        string okul_lisans=NULL, string okul_yuksek_lisans=NULL, string okul_dotora=NULL,
        string bolum_lise=NULL, string bolum_lisans=NULL, string bolum_yuksek_lisans=NULL,
        string bolum_dotora=NULL, int lise_baslangic=0, int lise_bitis=0,
        int lisans_baslangic=0, int lisans_bitis=0, int yuksek_lisans_baslangic=0,
        int yuksek_lisans_bitis=0, int dotora_baslangic=0, int dotora_bitis=0,
        int not_lise=0, int not_lisans=0,int not_yuksek_lisans=0, int not_dotora=0,
        string is_deneyim_1=NULL, string is_deneyim_2=NULL, string is_deneyim_3=NULL,
        string is_deneyim_4=NULL, string is_deneyim_5=NULL, string is_deneyim_6=NULL,
        string is_adres_1=NULL, string is_adres_2=NULL, string is_adres_3=NULL,
        string is_adres_4=NULL, string is_adres_5=NULL, string is_adres_6=NULL,
        string is_pozisyon_1=NULL, string is_pozisyon_2=NULL, string is_pozisyon_3=NULL,
        string is_pozisyon_4=NULL, string is_pozisyon_5=NULL, string is_pozisyon_6=NULL,
        float is_tecrube_1=0, float is_tecrube_2=0, float is_tecrube_3=0, float is_tecrube_4=0,
        float is_tecrube_5=0, float is_tecrube_6=0,
        TreeNode* left = NULL, TreeNode* right = NULL)
        : ad(ad),adres(adres),telefon(telefon),eposta(eposta), dogum_tarihi(dogum_tarihi),
        dil_1(dil_1), dil_2(dil_2), dil_3(dil_3), ehliyet_1(ehliyet_1), ehliyet_2(ehliyet_2),
        okul_lise(okul_lise), okul_lisans(okul_lisans), okul_yuksek_lisans(okul_yuksek_lisans),
        okul_dotora(okul_dotora), bolum_lise(bolum_lise), bolum_lisans(bolum_lisans),
        bolum_yuksek_lisans(bolum_yuksek_lisans), bolum_dotora(bolum_dotora), lise_baslangic(lise_baslangic),
        lise_bitis(lise_bitis), lisans_baslangic(lisans_baslangic), lisans_bitis(lisans_bitis),
        yuksek_lisans_baslangic(yuksek_lisans_baslangic), yuksek_lisans_bitis(yuksek_lisans_bitis),
        dotora_baslangic(dotora_baslangic), dotora_bitis(dotora_bitis),not_lise(not_lise),
        not_lisans(not_lisans),not_yuksek_lisans(not_yuksek_lisans),not_dotora(not_dotora),
        is_deneyim_1(is_deneyim_1), is_deneyim_2(is_deneyim_2), is_deneyim_3(is_deneyim_3),
        is_deneyim_4(is_deneyim_4), is_deneyim_5(is_deneyim_5), is_deneyim_6(is_deneyim_6),
        is_adres_1(is_adres_1), is_adres_2(is_adres_2), is_adres_3(is_adres_3),
        is_adres_4(is_adres_4), is_adres_5(is_adres_5), is_adres_6(is_adres_6),
        is_pozisyon_1(is_pozisyon_1), is_pozisyon_2(is_pozisyon_2), is_pozisyon_3(is_pozisyon_3),
        is_pozisyon_4(is_pozisyon_4), is_pozisyon_5(is_pozisyon_5), is_pozisyon_6(is_pozisyon_6),
        is_tecrube_1(is_tecrube_1), is_tecrube_2(is_tecrube_2), is_tecrube_3(is_tecrube_3),
        is_tecrube_4(is_tecrube_4), is_tecrube_5(is_tecrube_5), is_tecrube_6(is_tecrube_6),
        left(left), right(right)
    {   }
};

enum MOD{PREORDER,INORDER,POSTORDER};











class BinarySearchTree {
    TreeNode* root;
    TreeNode* insert(TreeNode* start, string ad, string adres, int telefon, string eposta,
        int dogum_tarihi, string dil_1, string dil_2, string dil_3, string ehliyet_1,
        string ehliyet_2, string okul_lise, string okul_lisans, string okul_yuksek_lisans,
        string okul_dotora, string bolum_lise, string bolum_lisans, string bolum_yuksek_lisans,
        string bolum_dotora, int lise_baslangic, int lise_bitis,int lisans_baslangic,
        int lisans_bitis, int yuksek_lisans_baslangic,int yuksek_lisans_bitis,
        int dotora_baslangic, int dotora_bitis,int not_lise, int not_lisans, int not_yuksek_lisans,
        int not_dotora,string is_deneyim_1, string is_deneyim_2, string is_deneyim_3,
        string is_deneyim_4, string is_deneyim_5, string is_deneyim_6,
        string is_adres_1, string is_adres_2, string is_adres_3,
        string is_adres_4, string is_adres_5, string is_adres_6,
        string is_pozisyon_1, string is_pozisyon_2, string is_pozisyon_3,
        string is_pozisyon_4, string is_pozisyon_5, string is_pozisyon_6,
        float is_tecrube_1, float is_tecrube_2, float is_tecrube_3, float is_tecrube_4,
        float is_tecrube_5, float is_tecrube_6 ) {
        if (start) {
            if (ad < start->ad)
                start->left = insert(start->left, ad, adres, telefon, eposta, dogum_tarihi,
                    dil_1, dil_2, dil_3, ehliyet_1, ehliyet_2,
                    okul_lise, okul_lisans, okul_yuksek_lisans,
                    okul_dotora, bolum_lise, bolum_lisans,
                    bolum_yuksek_lisans, bolum_dotora, lise_baslangic,
                    lise_bitis, lisans_baslangic, lisans_bitis,
                    yuksek_lisans_baslangic, yuksek_lisans_bitis,
                    dotora_baslangic, dotora_bitis, not_lise,
                    not_lisans, not_yuksek_lisans, not_dotora,
                    is_deneyim_1, is_deneyim_2, is_deneyim_3,
                    is_deneyim_4, is_deneyim_5, is_deneyim_6,
                    is_adres_1, is_adres_2, is_adres_3,
                    is_adres_4, is_adres_5, is_adres_6,
                    is_pozisyon_1, is_pozisyon_2, is_pozisyon_3,
                    is_pozisyon_4, is_pozisyon_5, is_pozisyon_6,
                    is_tecrube_1, is_tecrube_2, is_tecrube_3,
                    is_tecrube_4, is_tecrube_5, is_tecrube_6);
            else
                start->right = insert(start->right, ad, adres, telefon, eposta, dogum_tarihi,
                    dil_1, dil_2, dil_3, ehliyet_1, ehliyet_2,
                    okul_lise, okul_lisans, okul_yuksek_lisans,
                    okul_dotora, bolum_lise, bolum_lisans,
                    bolum_yuksek_lisans, bolum_dotora, lise_baslangic,
                    lise_bitis, lisans_baslangic, lisans_bitis,
                    yuksek_lisans_baslangic, yuksek_lisans_bitis,
                    dotora_baslangic, dotora_bitis, not_lise,
                    not_lisans, not_yuksek_lisans, not_dotora,
                    is_deneyim_1, is_deneyim_2, is_deneyim_3,
                    is_deneyim_4, is_deneyim_5, is_deneyim_6,
                    is_adres_1, is_adres_2, is_adres_3,
                    is_adres_4, is_adres_5, is_adres_6,
                    is_pozisyon_1, is_pozisyon_2, is_pozisyon_3,
                    is_pozisyon_4, is_pozisyon_5, is_pozisyon_6,
                    is_tecrube_1, is_tecrube_2, is_tecrube_3,
                    is_tecrube_4, is_tecrube_5, is_tecrube_6);
        }
        else
            return new TreeNode(ad, adres, telefon, eposta, dogum_tarihi,
                dil_1, dil_2, dil_3, ehliyet_1, ehliyet_2,
                okul_lise, okul_lisans, okul_yuksek_lisans,
                okul_dotora, bolum_lise, bolum_lisans,
                bolum_yuksek_lisans, bolum_dotora, lise_baslangic,
                lise_bitis, lisans_baslangic, lisans_bitis,
                yuksek_lisans_baslangic, yuksek_lisans_bitis,
                dotora_baslangic, dotora_bitis, not_lise,
                not_lisans, not_yuksek_lisans, not_dotora,
                is_deneyim_1, is_deneyim_2, is_deneyim_3,
                is_deneyim_4, is_deneyim_5, is_deneyim_6,
                is_adres_1, is_adres_2, is_adres_3,
                is_adres_4, is_adres_5, is_adres_6,
                is_pozisyon_1, is_pozisyon_2, is_pozisyon_3,
                is_pozisyon_4, is_pozisyon_5, is_pozisyon_6,
                is_tecrube_1, is_tecrube_2, is_tecrube_3,
                is_tecrube_4, is_tecrube_5, is_tecrube_6);
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
    BinarySearchTree(TreeNode* root = NULL) : root(root){   }
    bool isEmpty()const { return root == NULL; }
    TreeNode* getRoot()const { return root; }
    
    TreeNode* find(TreeNode* start, string ad) {
        if (start) {
            if (ad < start->ad)
                return find(start->left, ad);
            else if (start->ad < ad)
                return find(start->right, ad);
        }
        return start;
    }

    TreeNode* find(string ad,bool last = false) {
        TreeNode* before = find(root, ad);
        TreeNode* after = before;
        if (last) {
            while (before && (before = find(before->right, ad)))
                after = before;
        }
        return after;
    }

    void insert(string ad, string adres, int telefon, string eposta,
        int dogum_tarihi, string dil_1, string dil_2, string dil_3, string ehliyet_1,
        string ehliyet_2, string okul_lise, string okul_lisans, string okul_yuksek_lisans,
        string okul_dotora, string bolum_lise, string bolum_lisans, string bolum_yuksek_lisans,
        string bolum_dotora, int lise_baslangic, int lise_bitis, int lisans_baslangic,
        int lisans_bitis, int yuksek_lisans_baslangic, int yuksek_lisans_bitis,
        int dotora_baslangic, int dotora_bitis, int not_lise, int not_lisans, int not_yuksek_lisans,
        int not_dotora, string is_deneyim_1, string is_deneyim_2, string is_deneyim_3,
        string is_deneyim_4, string is_deneyim_5, string is_deneyim_6,
        string is_adres_1, string is_adres_2, string is_adres_3,
        string is_adres_4, string is_adres_5, string is_adres_6,
        string is_pozisyon_1, string is_pozisyon_2, string is_pozisyon_3,
        string is_pozisyon_4, string is_pozisyon_5, string is_pozisyon_6,
        float is_tecrube_1, float is_tecrube_2, float is_tecrube_3, float is_tecrube_4,
        float is_tecrube_5, float is_tecrube_6) {


        root = insert(root, ad, adres, telefon, eposta, dogum_tarihi,
            dil_1, dil_2, dil_3, ehliyet_1, ehliyet_2,
            okul_lise, okul_lisans, okul_yuksek_lisans,
            okul_dotora, bolum_lise, bolum_lisans,
            bolum_yuksek_lisans, bolum_dotora, lise_baslangic,
            lise_bitis, lisans_baslangic, lisans_bitis,
            yuksek_lisans_baslangic, yuksek_lisans_bitis,
            dotora_baslangic, dotora_bitis, not_lise,
            not_lisans, not_yuksek_lisans, not_dotora,
            is_deneyim_1, is_deneyim_2, is_deneyim_3,
            is_deneyim_4, is_deneyim_5, is_deneyim_6,
            is_adres_1, is_adres_2, is_adres_3,
            is_adres_4, is_adres_5, is_adres_6,
            is_pozisyon_1, is_pozisyon_2, is_pozisyon_3,
            is_pozisyon_4, is_pozisyon_5, is_pozisyon_6,
            is_tecrube_1, is_tecrube_2, is_tecrube_3,
            is_tecrube_4, is_tecrube_5, is_tecrube_6);
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
            if (deleted->ad < start->ad)
                start->left = remove(start->left, deleted);
            else if (start->ad < deleted->ad)
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

    void remove(string ad, bool last = false) {
        remove(find(ad, last));
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
            cout << start->ad << ","<< start->adres << ","<<start->telefon << "," 
                << start->eposta << "," << start->dogum_tarihi << "," << start->dil_1 << "," 
                << start->dil_2 << "," << start->dil_3 << "," << start->ehliyet_1 << "," 
                << start->ehliyet_2 << "," << start->okul_lise << "," << start->okul_lisans << "," 
                << start->okul_yuksek_lisans << "," << start->okul_dotora << ","
                << start->bolum_lise << "," << start->bolum_lisans << ","
                << start->bolum_yuksek_lisans << "," << start->bolum_dotora << ","
                << start->lise_baslangic << "," << start->lise_bitis << ","
                << start->lisans_baslangic << "," << start->lisans_bitis << ","
                << start->yuksek_lisans_baslangic << "," << start->yuksek_lisans_bitis << ","
                << start->dotora_baslangic << "," << start->dotora_bitis << ","
                << start->not_lise << "," << start->not_lisans << "," << start->not_yuksek_lisans << ","
                << start->not_dotora << "," << start->is_deneyim_1 << "," << start->is_deneyim_2 << ","
                << start->is_deneyim_3 << "," << start->is_deneyim_4 << "," << start->is_deneyim_5 << ","
                << start->is_deneyim_6 << "," << start->is_adres_1 << "," << start->is_adres_2 << ","
                << start->is_adres_3 << "," << start->is_adres_4 << "," << start->is_adres_5 << ","
                << start->is_adres_6 << "," << start->is_pozisyon_1<< "," << start->is_pozisyon_2 << ","
                << start->is_pozisyon_3 << "," << start->is_pozisyon_4 << "," << start->is_pozisyon_5 << ","
                << start->is_pozisyon_6 << "," << start->is_tecrube_1 << "," << start->is_tecrube_2 << ","
                << start->is_tecrube_3 << "," << start->is_tecrube_4 << "," << start->is_tecrube_5 << ","
                << start->is_tecrube_6 << endl << endl << endl;

            preorder(start->left);
            preorder(start->right);
        }
    }

    void inorder_cok_dil(TreeNode* start,int yanit) {
        if (start) {
            inorder_cok_dil(start->left,yanit);
            int kontrol = 0;
            if (start->dil_1 != "")
                kontrol++;
            if (start->dil_2 != "")
                kontrol++;
            if (start->dil_3 != "")
                kontrol++;
            if (kontrol >= 2) {
                cout << "adı: " << start->ad << endl;
                if (yanit == 1) {

                    yazma << start->ad << endl << "adı:\t" << start->ad <<endl<< "dil\t" << start->dil_1 << endl
                        << "dil\t" << start->dil_2 << endl << "dil\t" << start->dil_3 << endl << endl << endl;

                }
            }
                
            inorder_cok_dil(start->right,yanit);
        }
    }

    void inorder_ingilizce(TreeNode* start,int yanit) {
        if (start) {
            inorder_ingilizce(start->left,yanit);
            if (start->dil_1 == "ingilizce" || start->dil_2 == "ingilizce" || start->dil_3 == "ingilizce") {
                cout << "adı: " << start->ad << endl;
                if (yanit == 1) {

                    yazma <<start->ad<<endl<< "adı:\t" << start->ad<<"dil\t"<<start->dil_1<<endl
                        << "dil\t" << start->dil_2 << endl << "dil\t" << start->dil_3 << endl << endl << endl;

                }
            }
                
            inorder_ingilizce(start->right,yanit);
        }
    }

    void inorder_deneyimsiz(TreeNode* start,int yanit) {
        if (start) {
            float deneyim = start->is_tecrube_1 + start->is_tecrube_2 + start->is_tecrube_3 + start->is_tecrube_4 + start->is_tecrube_5 + start->is_tecrube_6;
            inorder_deneyimsiz(start->left,yanit);
            if (deneyim == 0) {
                cout << "adı: " << start->ad << endl;
                if (yanit == 1) {

                    yazma <<"adı:\t" << start->ad <<endl << endl;

                }
            }
                
            inorder_deneyimsiz(start->right,yanit);
        }
    }

    void inorder_yas_alti(TreeNode* start, int yas,int yanit) {
        if (start) {
            int asil_yas = 2020 - start->dogum_tarihi;
            inorder_yas_alti(start->left, yas,yanit);
            if (asil_yas <= yas) {
                if (yanit == 1) {
                    
                    yazma << start->ad <<endl<< "adı:\t"<<start->ad << 
                        endl << "yaşı:\t" << asil_yas << endl << endl;

                }
                cout << "adı: " << start->ad << endl;
            }
                
            inorder_yas_alti(start->right, yas,yanit);
        }
    }

    void inorder_deneyim_min(TreeNode* start,float tecrube,int yanit) {
        if (start) {
            float deneyim = start->is_tecrube_1 + start->is_tecrube_2 + start->is_tecrube_3 + start->is_tecrube_4 + start->is_tecrube_5 + start->is_tecrube_6;
            inorder_deneyim_min(start->left,tecrube,yanit);
            if (deneyim >= tecrube) {
                if (yanit == 1) {
                    
                    yazma << start->ad << endl << "adı:\t" << start->ad << endl
                        << "deneyim:\t" << deneyim << endl << endl;

                }
                cout << "adı: " << start->ad << endl;
            }
                
            inorder_deneyim_min(start->right,tecrube,yanit);
        }
    }
    
    void inorder_an_az_lisans(TreeNode* start,int yanit) {
        if (start) {
            inorder_an_az_lisans(start->left,yanit);
            if (start->okul_lisans != "") {
                cout << "adı: " << start->ad << endl;
                if (yanit == 1) {
                    
                    yazma << start->ad <<endl<<"adı:\t"<<start->ad<<endl
                        <<"lisans:\t"<<start->okul_lisans<< endl << endl;

                }
            }
                
            inorder_an_az_lisans(start->right,yanit);
        }
    }

    void inorder_ehliyetli_ve_yas_alti(TreeNode* start, string ehliyet, int yas,int yanit) {
        if (start) {
            int asil_yas = 2020 - start->dogum_tarihi;
            inorder_ehliyetli_ve_yas_alti(start->left, ehliyet,yas,yanit);
            if (start->ehliyet_1 == ehliyet || start->ehliyet_2 == ehliyet) {
                if (asil_yas <= yas) {
                    cout << "adı: " << start->ad << endl;
                    if (yanit == 1) {
                        
                        yazma <<start->ad<<endl<< "adı: " << start->ad << endl<<"ehliyeti:\t"<<start->ehliyet_1
                            <<endl<< "ehliyeti:\t" << start->ehliyet_2<<endl<<"yaşı:\t"<<asil_yas<<endl<<endl;

                    }
                }
                    

            }
                
            inorder_ehliyetli_ve_yas_alti(start->right, ehliyet,yas,yanit);
        }
    }

    void inorder_ehliyetli(TreeNode* start,string ehliyet,int yanit) {
        if (start) {
            inorder_ehliyetli(start->left, ehliyet,yanit);
            if (start->ehliyet_1 == ehliyet || start->ehliyet_2 == ehliyet) {
                cout << "adı: " << start->ad << endl;
                if (yanit == 1) {
                    
                    yazma << start->ad << endl << "adı:\t" << start->ad << endl << endl << "ehliyeti:\t" 
                        << start->ehliyet_1 <<endl<< "ehliyeti:\t" << start->ehliyet_2 << endl<<endl<<endl;
                    
                }
                
            }
                
            inorder_ehliyetli(start->right, ehliyet,yanit);
        }
    }

    void special_inorder(TreeNode* start,int yanit) {
        if (start) {
            special_inorder(start->left,yanit);
            cout << "adı: " << start->ad << "   düzeyi: " << height(start) << " derinligi: " << depth(start) << endl;
            if (yanit == 1) {

                yazma <<start->ad<<endl<< "adı: " << start->ad << "   düzeyi: " << height(start) << " derinligi: " << depth(start) << endl;

            }
            special_inorder(start->right,yanit);
        }
    }

    void inorder(TreeNode* start) {
        if (start) {
            inorder(start->left);

            cout << start->ad << "," << start->adres << "," << start->telefon << ","
                << start->eposta << "," << start->dogum_tarihi << "," << start->dil_1 << ","
                << start->dil_2 << "," << start->dil_3 << "," << start->ehliyet_1 << ","
                << start->ehliyet_2 << "," << start->okul_lise << "," << start->okul_lisans << ","
                << start->okul_yuksek_lisans << "," << start->okul_dotora << ","
                << start->bolum_lise << "," << start->bolum_lisans << ","
                << start->bolum_yuksek_lisans << "," << start->bolum_dotora << ","
                << start->lise_baslangic << "," << start->lise_bitis << ","
                << start->lisans_baslangic << "," << start->lisans_bitis << ","
                << start->yuksek_lisans_baslangic << "," << start->yuksek_lisans_bitis << ","
                << start->dotora_baslangic << "," << start->dotora_bitis << ","
                << start->not_lise << "," << start->not_lisans << "," << start->not_yuksek_lisans << ","
                << start->not_dotora << "," << start->is_deneyim_1 << "," << start->is_deneyim_2 << ","
                << start->is_deneyim_3 << "," << start->is_deneyim_4 << "," << start->is_deneyim_5 << ","
                << start->is_deneyim_6 << "," << start->is_adres_1 << "," << start->is_adres_2 << ","
                << start->is_adres_3 << "," << start->is_adres_4 << "," << start->is_adres_5 << ","
                << start->is_adres_6 << "," << start->is_pozisyon_1 << "," << start->is_pozisyon_2 << ","
                << start->is_pozisyon_3 << "," << start->is_pozisyon_4 << "," << start->is_pozisyon_5 << ","
                << start->is_pozisyon_6 << "," << start->is_tecrube_1 << "," << start->is_tecrube_2 << ","
                << start->is_tecrube_3 << "," << start->is_tecrube_4 << "," << start->is_tecrube_5 << ","
                << start->is_tecrube_6 << endl << endl << endl;

            inorder(start->right);
        }
    }

    void postorder(TreeNode* start) {
        if (start) {
            postorder(start->left);
            postorder(start->right);

            cout << start->ad << "," << start->adres << "," << start->telefon << ","
                << start->eposta << "," << start->dogum_tarihi << "," << start->dil_1 << ","
                << start->dil_2 << "," << start->dil_3 << "," << start->ehliyet_1 << ","
                << start->ehliyet_2 << "," << start->okul_lise << "," << start->okul_lisans << ","
                << start->okul_yuksek_lisans << "," << start->okul_dotora << ","
                << start->bolum_lise << "," << start->bolum_lisans << ","
                << start->bolum_yuksek_lisans << "," << start->bolum_dotora << ","
                << start->lise_baslangic << "," << start->lise_bitis << ","
                << start->lisans_baslangic << "," << start->lisans_bitis << ","
                << start->yuksek_lisans_baslangic << "," << start->yuksek_lisans_bitis << ","
                << start->dotora_baslangic << "," << start->dotora_bitis << ","
                << start->not_lise << "," << start->not_lisans << "," << start->not_yuksek_lisans << ","
                << start->not_dotora << "," << start->is_deneyim_1 << "," << start->is_deneyim_2 << ","
                << start->is_deneyim_3 << "," << start->is_deneyim_4 << "," << start->is_deneyim_5 << ","
                << start->is_deneyim_6 << "," << start->is_adres_1 << "," << start->is_adres_2 << ","
                << start->is_adres_3 << "," << start->is_adres_4 << "," << start->is_adres_5 << ","
                << start->is_adres_6 << "," << start->is_pozisyon_1 << "," << start->is_pozisyon_2 << ","
                << start->is_pozisyon_3 << "," << start->is_pozisyon_4 << "," << start->is_pozisyon_5 << ","
                << start->is_pozisyon_6 << "," << start->is_tecrube_1 << "," << start->is_tecrube_2 << ","
                << start->is_tecrube_3 << "," << start->is_tecrube_4 << "," << start->is_tecrube_5 << ","
                << start->is_tecrube_6 << endl << endl << endl;
        }
    }

    void update(string ad, string yazili_ifade, string yeni_ifade) {
        if (yazili_ifade == "adres")
            find(ad)->adres = yeni_ifade;
        if (yazili_ifade == "eposta")
            find(ad)->eposta = yeni_ifade;
        if (yazili_ifade == "dil_1")
            find(ad)->dil_1 = yeni_ifade;
        if (yazili_ifade == "dil_2")
            find(ad)->dil_2 = yeni_ifade;
        if (yazili_ifade == "dil_3")
            find(ad)->dil_3 = yeni_ifade;
        if (yazili_ifade == "ehliyet_1")
            find(ad)->ehliyet_1 = yeni_ifade;
        if (yazili_ifade == "ehliyet_2")
            find(ad)->ehliyet_2 = yeni_ifade;
        if (yazili_ifade == "okul_lise")
            find(ad)->okul_lise = yeni_ifade;
        if (yazili_ifade == "okul_lisans")
            find(ad)->okul_lisans = yeni_ifade;
        if (yazili_ifade == "okul_yuksek_lisans")
            find(ad)->okul_yuksek_lisans = yeni_ifade;
        if (yazili_ifade == "okul_dotora")
            find(ad)->okul_dotora = yeni_ifade;
        if (yazili_ifade == "bolum_lise")
            find(ad)->bolum_lise = yeni_ifade;
        if (yazili_ifade == "bolum_lisans")
            find(ad)->bolum_lisans = yeni_ifade;
        if (yazili_ifade == "bolum_yuksek_lisans")
            find(ad)->bolum_yuksek_lisans = yeni_ifade;
        if (yazili_ifade == "bolum_dotora")
            find(ad)->bolum_dotora = yeni_ifade;
        if (yazili_ifade == "is_deneyim_1")
            find(ad)->is_deneyim_1 = yeni_ifade;
        if (yazili_ifade == "is_deneyim_2")
            find(ad)->is_deneyim_1 = yeni_ifade;
        if (yazili_ifade == "is_deneyim_3")
            find(ad)->is_deneyim_1 = yeni_ifade;
        if (yazili_ifade == "is_deneyim_4")
            find(ad)->is_deneyim_1 = yeni_ifade;
        if (yazili_ifade == "is_deneyim_5")
            find(ad)->is_deneyim_1 = yeni_ifade;
        if (yazili_ifade == "is_deneyim_6")
            find(ad)->is_deneyim_1 = yeni_ifade;
        if (yazili_ifade == "is_adres_1")
            find(ad)->is_adres_1 = yeni_ifade;
        if (yazili_ifade == "is_adres_2")
            find(ad)->is_adres_1 = yeni_ifade;
        if (yazili_ifade == "is_adres_3")
            find(ad)->is_adres_1 = yeni_ifade;
        if (yazili_ifade == "is_adres_4")
            find(ad)->is_adres_1 = yeni_ifade;
        if (yazili_ifade == "is_adres_5")
            find(ad)->is_adres_1 = yeni_ifade;
        if (yazili_ifade == "is_adres_6")
            find(ad)->is_adres_1 = yeni_ifade;
        if (yazili_ifade == "is_pozisyon_1")
            find(ad)->is_pozisyon_1 = yeni_ifade;
        if (yazili_ifade == "is_pozisyon_2")
            find(ad)->is_pozisyon_1 = yeni_ifade;
        if (yazili_ifade == "is_pozisyon_3")
            find(ad)->is_pozisyon_1 = yeni_ifade;
        if (yazili_ifade == "is_pozisyon_4")
            find(ad)->is_pozisyon_1 = yeni_ifade;
        if (yazili_ifade == "is_pozisyon_5")
            find(ad)->is_pozisyon_1 = yeni_ifade;
        if (yazili_ifade == "is_pozisyon_6")
            find(ad)->is_pozisyon_1 = yeni_ifade;

    }

    void update(string ad, string sayili_ifade, int yeni_ifade) {
        if (sayili_ifade == "telefon")
            find(ad)->telefon = yeni_ifade;
        if (sayili_ifade == "dogum_tarihi")
            find(ad)->dogum_tarihi = yeni_ifade;
        if (sayili_ifade == "lise_baslangic")
            find(ad)->lise_baslangic = yeni_ifade;
        if (sayili_ifade == "lise_bitis")
            find(ad)->lise_bitis = yeni_ifade;
        if (sayili_ifade == "lisans_baslangic")
            find(ad)->lisans_baslangic = yeni_ifade;
        if (sayili_ifade == "lisans_bitis")
            find(ad)->lisans_bitis = yeni_ifade;
        if (sayili_ifade == "yuksek_lisans_baslangic")
            find(ad)->yuksek_lisans_baslangic = yeni_ifade;
        if (sayili_ifade == "yuksek_lisans_bitis")
            find(ad)->yuksek_lisans_bitis = yeni_ifade;
        if (sayili_ifade == "dotora_baslangic")
            find(ad)->dotora_baslangic = yeni_ifade;
        if (sayili_ifade == "dotora_bitis")
            find(ad)->dotora_bitis = yeni_ifade;
        if (sayili_ifade == "not_lise")
            find(ad)->not_lise = yeni_ifade;
        if (sayili_ifade == "not_lisans")
            find(ad)->not_lisans = yeni_ifade;
        if (sayili_ifade == "not_yuksek_lisans")
            find(ad)->not_yuksek_lisans = yeni_ifade;
        if (sayili_ifade == "not_dotora")
            find(ad)->not_dotora = yeni_ifade;
        if (sayili_ifade == "is_tecrube_1")
            find(ad)->is_tecrube_1 = yeni_ifade;
        if (sayili_ifade == "is_tecrube_2")
            find(ad)->is_tecrube_2 = yeni_ifade;
        if (sayili_ifade == "is_tecrube_3")
            find(ad)->is_tecrube_3 = yeni_ifade;
        if (sayili_ifade == "is_tecrube_4")
            find(ad)->is_tecrube_4 = yeni_ifade;
        if (sayili_ifade == "is_tecrube_5")
            find(ad)->is_tecrube_5 = yeni_ifade;
        if (sayili_ifade == "is_tecrube_6")
            find(ad)->is_tecrube_6 = yeni_ifade;
    }

    void special_print() {
        int yanit;
        cout << "bilgileri ayrı bir dosyaya yazmak istiyormusunuz." << endl;
        cout << "evet için\t1'e" << endl;
        cout << "hayır için\t2'e" << endl;
        cin >> yanit;
        special_inorder(root,yanit);
    }

    void print_only(string ad) {
        int yanit;
        cout << "bilgileri ayrı bir dosyaya yazmak istiyormusunuz." << endl;
        cout << "evet için\t1'e" << endl;
        cout << "hayır için\t2'e" << endl;
        cin >> yanit;
        TreeNode* start = find(ad);
        cout << start->ad << "," << start->adres << "," << start->telefon << ","<< start->eposta << "," << start->dogum_tarihi << "," << start->dil_1 << ","
            << start->dil_2 << "," << start->dil_3 << "," << start->ehliyet_1 << ","
            << start->ehliyet_2 << "," << start->okul_lise << "," << start->okul_lisans << ","
            << start->okul_yuksek_lisans << "," << start->okul_dotora << ","
            << start->bolum_lise << "," << start->bolum_lisans << ","
            << start->bolum_yuksek_lisans << "," << start->bolum_dotora << ","
            << start->lise_baslangic << "," << start->lise_bitis << ","
            << start->lisans_baslangic << "," << start->lisans_bitis << ","
            << start->yuksek_lisans_baslangic << "," << start->yuksek_lisans_bitis << ","
            << start->dotora_baslangic << "," << start->dotora_bitis << ","
            << start->not_lise << "," << start->not_lisans << "," << start->not_yuksek_lisans << ","
            << start->not_dotora << "," << start->is_deneyim_1 << "," << start->is_deneyim_2 << ","
            << start->is_deneyim_3 << "," << start->is_deneyim_4 << "," << start->is_deneyim_5 << ","
            << start->is_deneyim_6 << "," << start->is_adres_1 << "," << start->is_adres_2 << ","
            << start->is_adres_3 << "," << start->is_adres_4 << "," << start->is_adres_5 << ","
            << start->is_adres_6 << "," << start->is_pozisyon_1 << "," << start->is_pozisyon_2 << ","
            << start->is_pozisyon_3 << "," << start->is_pozisyon_4 << "," << start->is_pozisyon_5 << ","
            << start->is_pozisyon_6 << "," << start->is_tecrube_1 << "," << start->is_tecrube_2 << ","
            << start->is_tecrube_3 << "," << start->is_tecrube_4 << "," << start->is_tecrube_5 << ","
            << start->is_tecrube_6 << endl << endl << endl;
        if (yanit == 1) {
            yazma <<"adı:\t\t\t\t"<< start->ad << endl<<"adres:\t\t\t\t" << start->adres << endl
                <<"telefon:\t\t\t\t"<< start->telefon << endl <<"eposta:\t\t\t\t"<< start->eposta 
                << endl<< "dogum_tarihi:\t\t\t"<< start->dogum_tarihi <<endl
                <<"dil_1:\t\t\t\t"<< start->dil_1 <<endl<<"dil_2:\t\t\t\t"
                << start->dil_2 <<endl<<"dil_3:\t\t\t\t"<< start->dil_3 <<endl
                <<"ehliyet_1:\t\t\t\t"<< start->ehliyet_1 <<endl<<"ehliyet_2:\t\t\t\t"
                << start->ehliyet_2 <<endl<<"okul_lise:\t\t\t\t"<< start->okul_lise <<endl
                <<"okul_lisans:\t\t\t"<< start->okul_lisans <<endl<<"okul_yuksek_lisans:\t\t\t"
                << start->okul_yuksek_lisans <<endl<<"okul_dotora:\t\t\t" << start->okul_dotora << endl
                <<"bolum_lise:\t\t\t"<< start->bolum_lise <<endl<<"bolum_lisans:\t\t\t"<< start->bolum_lisans
                << endl<<"bolum_yuksek_lisans:\t\t"<< start->bolum_yuksek_lisans <<endl
                <<"bolum_dotora:\t\t\t"<< start->bolum_dotora <<endl<<"lise_baslangic:\t\t\t"
                << start->lise_baslangic <<endl<<"lise_bitis:\t\t\t\t"<< start->lise_bitis <<endl
                <<"lisans_baslangic:\t\t\t"<< start->lisans_baslangic <<endl<<"lisans_bitis:\t\t\t"
                << start->lisans_bitis <<endl<<"yuksek_lisans_baslangic:\t\t"<< start->yuksek_lisans_baslangic <<endl 
                <<"yuksek_lisans_bitis:\t\t\t"<< start->yuksek_lisans_bitis <<endl<<"dotora_baslangic:\t\t\t"
                << start->dotora_baslangic <<endl<<"dotora_bitis:\t\t\t" << start->dotora_bitis <<endl
                <<"not_lise:\t\t\t\t"<< start->not_lise <<endl<<"not_lisans:\t\t\t"<< start->not_lisans 
                <<endl<<"not_yuksek_lisans:\t\t\t"<< start->not_yuksek_lisans <<endl<<"not_dotora:\t\t\t"
                << start->not_dotora <<endl<<"is_deneyim_1:\t\t\t"<< start->is_deneyim_1 <<endl
                <<"is_deneyim_2:\t\t\t"<< start->is_deneyim_2 <<endl<<"is_deneyim_3:\t\t\t"
                << start->is_deneyim_3 <<endl<<"is_deneyim_4:\t\t\t"<< start->is_deneyim_4 <<endl
                <<"is_deneyim_5:\t\t\t"<< start->is_deneyim_5 <<endl<<"is_deneyim_6:\t\t\t"
                << start->is_deneyim_6 <<endl<<"is_adres_1:\t\t\t"<< start->is_adres_1 <<endl
                <<"is_adres_2:\t\t\t"<< start->is_adres_2 <<endl<<"is_adres_3:\t\t\t"
                << start->is_adres_3 <<endl<<"is_adres_4:\t\t\t" << start->is_adres_4 <<endl
                <<"is_adres_5:\t\t\t"<< start->is_adres_5 <<endl<<"is_adres_6:\t\t\t"
                << start->is_adres_6 <<endl<<"is_pozisyon_1:\t\t\t"<< start->is_pozisyon_1 <<endl
                <<"is_pozisyon_2:\t\t\t"<< start->is_pozisyon_2 <<endl<<"is_pozisyon_3:\t\t\t"
                << start->is_pozisyon_3 <<endl<<"is_pozisyon_4:\t\t\t"<< start->is_pozisyon_4 <<endl
                <<"is_pozisyon_5:\t\t\t"<< start->is_pozisyon_5 <<endl<<"is_pozisyon_6:\t\t\t"
                << start->is_pozisyon_6 <<endl<<"is_tecrube_1:\t\t\t"<< start->is_tecrube_1 <<endl
                <<"is_tecrube_2:\t\t\t"<< start->is_tecrube_2 <<endl<<"is_tecrube_3:\t\t\t"
                << start->is_tecrube_3 <<endl<<"is_tecrube_4:\t\t\t"<< start->is_tecrube_4 <<endl
                <<"is_tecrube_6:\t\t\t"<< start->is_tecrube_5 <<endl<<"is_tecrube_6:\t\t\t"
                << start->is_tecrube_6 << endl << endl << endl;
            
        }
    }

    void print_deneyimsiz() {
        int yanit;
        cout << "bilgileri ayrı bir dosyaya yazmak istiyormusunuz." << endl;
        cout << "evet için\t1'e" << endl;
        cout << "hayır için\t2'e" << endl;
        cin >> yanit;
        inorder_deneyimsiz(root,yanit);
    }

    void print_ehliyetli_ve_yas_alti(string ehliyet,int yas) {
        int yanit;
        cout << "bilgileri ayrı bir dosyaya yazmak istiyormusunuz." << endl;
        cout << "evet için\t1'e" << endl;
        cout << "hayır için\t2'e" << endl;
        cin >> yanit;
        inorder_ehliyetli_ve_yas_alti(root, ehliyet,yas,yanit);
    }

    void print_ehliyetli(string ehliyet) {
        int yanit;
        cout << "bilgileri ayrı bir dosyaya yazmak istiyormusunuz."<<endl;
        cout << "evet için\t1'e" << endl;
        cout << "hayır için\t2'e" << endl;
        cin >> yanit;
        inorder_ehliyetli(root, ehliyet,yanit);
    }

    void print_yas_alti(int yas) {
        int yanit;
        cout << "bilgileri ayrı bir dosyaya yazmak istiyormusunuz." << endl;
        cout << "evet için\t1'e" << endl;
        cout << "hayır için\t2'e" << endl;
        cin >> yanit;
        inorder_yas_alti(root, yas,yanit);
    }

    void print_deneyim_min(float tecrube) {
        int yanit;
        cout << "bilgileri ayrı bir dosyaya yazmak istiyormusunuz." << endl;
        cout << "evet için\t1'e" << endl;
        cout << "hayır için\t2'e" << endl;
        cin >> yanit;
        inorder_deneyim_min(root,tecrube,yanit);
    }

    void print_cok_dil() {
        int yanit;
        cout << "bilgileri ayrı bir dosyaya yazmak istiyormusunuz." << endl;
        cout << "evet için\t1'e" << endl;
        cout << "hayır için\t2'e" << endl;
        cin >> yanit;
        inorder_cok_dil(root,yanit);
    }

    void print_ingilizce() {
        int yanit;
        cout << "bilgileri ayrı bir dosyaya yazmak istiyormusunuz." << endl;
        cout << "evet için\t1'e" << endl;
        cout << "hayır için\t2'e" << endl;
        cin >> yanit;
        inorder_ingilizce(root,yanit);
    }

    void print_en_az_lisans() {
        int yanit;
        cout << "bilgileri ayrı bir dosyaya yazmak istiyormusunuz." << endl;
        cout << "evet için\t1'e" << endl;
        cout << "hayır için\t2'e" << endl;
        cin >> yanit;
        inorder_an_az_lisans(root,yanit);
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
            cout << endl;
    }

    
    void mirror() {
        root = mirror(root);
    }

};

int main()
{
    setlocale(LC_ALL, "Turkish");

    

    BinarySearchTree A;
    A.insert("aliKaya", "istanbul", 5321234567, "akaya@gmail.com", 1985, "ingilizce",
        "fransızca", "-", "A2", "B", "galatasaray lisesi", "yıldız teknik üniversitesi",
        "yıldız teknik üniversitesi", "boğaziçi üniversitesi", "sayısal", "bilgisayar müh",
        "bilgisayar müh", "bilgisayar müh", 1999, 2003, 2004, 2009, 2010, 2013, 2013, 0, 82,
        80, 95, 0, "burger king", "armada bilgisayar", "comodo yazılım aş", "destek grup",
        "otokar", "vodafone", "istanbul", "istanbul", "ankara", "istanbul-ankara", "kocaeli",
        "istanbul", "vardiya müdürü", "yazılım uzmanı", "front end developer", "bilgisayar mühendisi",
        "network ve güvenlik mühendisi", "mediation solutions senior specialist",
        2, 1, 0.5, 2, 1.5, 1.5);

    A.insert("selimMert", "İstanbul", 5061234567, "smert@gmail.com", 1985, "", "", "", "B", "", "Çorum Lisesi",
        "Marmara Üniversitesi", "", "", "Sayısal", "Elektronik Mühendisliği", "", "", 1999, 2002,
        2004, 2010, 0, 0, 0, 0, 80, 77, 0, 0, "KAREL", "", "", "", "", "", "İstanbul", "", "", "", "", "",
        "Gömülü Yazılım Mühendisi", "", "", "", "", "", 5, 0, 0, 0, 0, 0);

    A.insert("ahmetSari", "Manisa", 5071234567, "asari@gmail.com", 1989, "arapça", "ingilizce", "almanca",
        "B", "", "Manisa Lisesi", "Yalvaç MYO", "Selçuk Üniversitesi", "Gazi Üniversitesi", "Sayısal",
        "Bilgisayar Programcılığı", "Matematik Bilgisayar", "Bilgisayar Müh", 2003, 2006, 2006, 2008,
        2009, 2012, 2012, 2015, 70, 95, 90, 92, "AG Software", "Randstad Professionals", "", "", "", "", "Konya",
        "Ankara", "", "", "", "", "Programcı", "Firmware Engineer", "", "", "", "", 2, 2, 0, 0, 0, 0);

    A.insert("nerimanKoc", "Ankara", 5331234567, "nkoca@ymail.com", 1988, "almanca", "", "", "E", "",
        "Ankara Anadolu Öğretmen Lisesi", "Ege Üniversitesi", "Ege Üniversitesi", "", "Sayısal",
        "Elektronik Haberleşme Müh", "Elektronik Haberleşme Müh", "", 2002, 2005, 2005, 2010, 2011, 0, 0, 0,
        90, 70, 0, 0, "Ege Üni Elektronik Haberleşme", "", "", "", "", "", "izmir", "", "", "", "", "", "Araştırma Görevlisi",
        "", "", "", "", "", 3, 0, 0, 0, 0, 0);

    A.insert("asliYel", "trabzon", 5421234567, "ayel@yahoo.com", 1970, "ingilizce", "", "", "", "", "Of Kız Meslek Lisei",
        "Orta Doğu Teknik Üniversitesi", "", "", "Elektrik", "Elektrik - Elektronik Mühendisliği", "", "", 1985, 1990,
        1992, 1996, 0, 0, 0, 0, 79, 80, 0, 0, "Türk Telekom", "Türk Telekom", "", "", "", "", "Trabzon", "Ankara",
        "", "", "", "", "Mühendis", "Müdür", "", "", "", "", 10, 14, 0, 0, 0, 0);



    A.insert("gokhan", "istanbul", 5321234567, "akaya@gmail.com", 1985, "ingilizce",
        "fransızca", "-", "A2", "B", "galatasaray lisesi", "",
        "yıldız teknik üniversitesi", "boğaziçi üniversitesi", "sayısal", "bilgisayar müh",
        "bilgisayar müh", "bilgisayar müh", 1999, 2003, 2004, 2009, 2010, 2013, 2013, 0, 82,
        80, 95, 0, "burger king", "armada bilgisayar", "comodo yazılım aş", "destek grup",
        "otokar", "vodafone", "istanbul", "istanbul", "ankara", "istanbul-ankara", "kocaeli",
        "istanbul", "vardiya müdürü", "yazılım uzmanı", "front end developer", "bilgisayar mühendisi",
        "network ve güvenlik mühendisi", "mediation solutions senior specialist",
        2, 1, 0.5, 2, 1.5, 1.5);

    A.insert("mehmetSağlam", "Kocaeli", 5051234567, "msaglam@hotmail.com",
        1990, "", "", "", "B", "", "Isparta Anadolu Lisesi", "Kocaeli Üniversitesi",
        "", "", "Sayısal", "Bilgisayar Müh", "", "", 2005, 2009, 2010, 2015, 0,
        0, 0, 0, 92, 75, 0, 0, "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "", "", "", 0, 0, 0, 0, 0, 0);


    A.print(INORDER);

    A.remove("gokhan");
    cout << "----------------gökhan ı silme--------------------" << endl << endl << endl;
    A.print(INORDER);

    A.insert("gokhan", "istanbul", 5321234567, "akaya@gmail.com", 1985, "ingilizce",
        "fransızca", "-", "A2", "B", "galatasaray lisesi", "yıldız teknik üniversitesi",
        "yıldız teknik üniversitesi", "boğaziçi üniversitesi", "sayısal", "bilgisayar müh",
        "bilgisayar müh", "bilgisayar müh", 1999, 2003, 2004, 2009, 2010, 2013, 2013, 0, 82,
        80, 95, 0, "burger king", "armada bilgisayar", "comodo yazılım aş", "destek grup",
        "otokar", "vodafone", "istanbul", "istanbul", "ankara", "istanbul-ankara", "kocaeli",
        "istanbul", "vardiya müdürü", "yazılım uzmanı", "front end developer", "bilgisayar mühendisi",
        "network ve güvenlik mühendisi", "mediation solutions senior specialist",
        2, 1, 0.5, 2, 1.5, 1.5);
    cout << "----------------gökhan ı ekleme--------------------" << endl << endl << endl;
    A.print(INORDER);

    A.update("aliKaya", "dogum_tarihi", 1990);
    cout << "-----------------ali kaya dogum yili güncelleme----------------------" << endl << endl << endl;
    A.print(INORDER);

    A.update("aliKaya", "adres", "kocaeli");
    cout << "-------------------ali kaya adres güncelleme--------------" << endl << endl << endl;
    A.print(INORDER);

    cout << "---------------------herkesi düzeyler ve derinliklerle listeleme-----------------" << endl << endl << endl;
    yazma.open("herkesi düzeyler ve derinliklerle listeleme.txt");
    A.special_print();
    yazma.close();
    cout << "--------------------işe başvuran herkesi listeleme----------------" << endl << endl << endl;
    A.print(INORDER);

    cout << "--------------------adindan kişi arama ve bilgilerini listeleme----------------------" << endl << endl << endl;
    yazma.open("adindan kişi arama ve bilgilerini listeleme.txt");
    A.print_only("gokhan");
    yazma.close();
    cout << "-------------------en az lisans---------------------" << endl << endl << endl;
    yazma.open("en az lisans.txt");
    A.print_en_az_lisans();
    yazma.close();
    cout << "------------------ingilizce bilen-----------------" << endl << endl << endl;
    yazma.open("ingilizce bilen.txt");
    A.print_ingilizce();
    yazma.close();
    cout << "--------------------birden fazla dil bilen---------------------" << endl << endl << endl;
    yazma.open("birden fazla dil bilen.txt");
    A.print_cok_dil();
    yazma.close();
    cout << "--------------------girilen minumum(5) yıl deneyimli herkesi listeleme---------------------" << endl << endl << endl;
    yazma.open("girilen minumum(5) yıl deneyimli herkesi listeleme.txt");
    A.print_deneyim_min(5);
    yazma.close();
    cout << "--------------------deneyimsiz herkesi listeleme---------------------" << endl << endl << endl;
    yazma.open("deneyimsiz herkesi listeleme.txt");
    A.print_deneyimsiz();
    yazma.close();
    cout << "--------------------girilen yas(33)in altindaki herkesi listeleme---------------------" << endl << endl << endl;
    yazma.open("girilen yas(33)in altindaki herkesi listeleme.txt");
    A.print_yas_alti(33);
    yazma.close();
    cout << "--------------------girilen ehliyet(A2) sahibi herkesi listeleme---------------------" << endl << endl << endl;
    yazma.open("girilen ehliyet(A2) sahibi herkesi listeleme.txt");
    A.print_ehliyetli("A2");
    yazma.close();
    cout << "--------------------girilen ehliyet(A2) sahibi ve girilen yas(33)in altindaki herkesi listeleme---------------------" << endl << endl << endl;
    yazma.open("girilen ehliyet(A2) sahibi ve girilen yas(33)in altindaki herkesi listeleme.txt");
    A.print_ehliyetli_ve_yas_alti("A2", 33);
    yazma.close();


    cout << endl << endl << endl << endl;





    string isim;

    int cevap;
    int cevap_2 = 0;
    int cevap_3 = 0;
    cout << "--------------------lütfen aşağıdaki seçeneklerden birini seçiniz:-------------------" << endl;
    cout << "işe başvuransanız\t1'e" << endl;
    cout << "iş verenseniz\t\t2'e\nbasınız." << endl;
    cin >> cevap;
    if (cevap == 1) {
        while (cevap_2 != 4) {

            string ad;string adres;int telefon;string eposta;int dogum_tarihi;string dil_1;string dil_2;
            string dil_3;string ehliyet_1;string ehliyet_2;string okul_lise;string okul_lisans;
            string okul_yuksek_lisans;string okul_dotora;string bolum_lise;string bolum_lisans;
            string bolum_yuksek_lisans;string bolum_dotora;int lise_baslangic;int lise_bitis;
            int lisans_baslangic;int lisans_bitis; int yuksek_lisans_baslangic;int yuksek_lisans_bitis;
            int dotora_baslangic; int dotora_bitis; int not_lise; int not_lisans;int not_yuksek_lisans;
            int not_dotora; string is_deneyim_1; string is_deneyim_2; string is_deneyim_3;
            string is_deneyim_4; string is_deneyim_5;string is_deneyim_6;    string is_adres_1;
            string is_adres_2; string is_adres_3;string is_adres_4;string is_adres_5;
            string is_adres_6;string is_pozisyon_1;string is_pozisyon_2; string is_pozisyon_3;
            string is_pozisyon_4; string is_pozisyon_5;string is_pozisyon_6; float is_tecrube_1;
            float is_tecrube_2; float is_tecrube_3; float is_tecrube_4; float is_tecrube_5; float is_tecrube_6;

            cout << "--------------------lütfen aşağıdaki seçeneklerden birini seçiniz:-------------------" << endl;
            cout << "Sisteme kayıt (kendi kişisel bilgilerini girme) için \t1'e" << endl;
            cout << "Sistemdeki bilgilerini görüntüleme için \t\t2'ye" << endl;
            cout << "Sistemden çıkma (bilgilerini silme) için \t\t3'e" << endl;
            cout << "çıkış yapmak için\t\t\t\t\t4'e\nbasınız" << endl;
            cin >> cevap_2;
            if (cevap_2 == 1) {


                cout << "adınız: ";cin >> ad;cout << endl;
                cout << "adres: ";cin >> adres;cout << endl;
                cout << "telefon: ";cin >> telefon;cout << endl;
                cout << "eposta: ";cin >> eposta;cout << endl;
                cout << "dogum_tarihi: ";cin >> dogum_tarihi;cout << endl;
                cout << "dil_1: ";cin >> dil_1;cout << endl;
                cout << "dil_2: ";cin >> dil_2;cout << endl;
                cout << "dil_3: ";cin >> dil_3;cout << endl;
                cout << "ehliyet_1: ";cin >> ehliyet_1;cout << endl;
                cout << "ehliyet_2: ";cin >> ehliyet_2;cout << endl;
                cout << "okul_lise: ";cin >> okul_lise;cout << endl;
                cout << "okul_lisans: ";cin >> okul_lisans;cout << endl;
                cout << "okul_yuksek_lisans: ";cin >> okul_yuksek_lisans;cout << endl;
                cout << "okul_dotora: ";cin >> okul_dotora;cout << endl;
                cout << "bolum_lise: ";cin >> bolum_lise;cout << endl;
                cout << "bolum_lisans: ";cin >> bolum_lisans;cout << endl;
                cout << "bolum_yuksek_lisans: ";cin >> bolum_yuksek_lisans;cout << endl;
                cout << "bolum_dotora: ";cin >> bolum_dotora;cout << endl;
                cout << "lise_baslangic: ";cin >> lise_baslangic;cout << endl;
                cout << "lise_bitis: ";cin >> lise_bitis;cout << endl;
                cout << "lisans_baslangic: ";cin >> lisans_baslangic;cout << endl;
                cout << "lisans_bitis: ";cin >> lisans_bitis;cout << endl;
                cout << "yuksek_lisans_baslangic: ";cin >> yuksek_lisans_baslangic;cout << endl;
                cout << "yuksek_lisans_bitis: ";cin >> yuksek_lisans_bitis;cout << endl;
                cout << "dotora_baslangic: ";cin >> dotora_baslangic;cout << endl;
                cout << "dotora_bitis: ";cin >> dotora_bitis;cout << endl;
                cout << "not_lise: ";cin >> not_lise;cout << endl;
                cout << "not_lisans: ";cin >> not_lisans;cout << endl;
                cout << "not_yuksek_lisans: ";cin >> not_yuksek_lisans;cout << endl;
                cout << "not_dotora: ";cin >> not_dotora;cout << endl;
                cout << "is_deneyim_1: ";cin >> is_deneyim_1;cout << endl;
                cout << "is_deneyim_2: ";cin >> is_deneyim_2;cout << endl;
                cout << "is_deneyim_3: ";cin >> is_deneyim_3;cout << endl;
                cout << "is_deneyim_4: ";cin >> is_deneyim_4;cout << endl;
                cout << "is_deneyim_5: ";cin >> is_deneyim_5;cout << endl;
                cout << "is_deneyim_6: ";cin >> is_deneyim_6;cout << endl;
                cout << "is_adres_1: ";cin >> is_adres_1;cout << endl;
                cout << "is_adres_2: ";cin >> is_adres_2;cout << endl;
                cout << "is_adres_3: ";cin >> is_adres_3;cout << endl;
                cout << "is_adres_4: ";cin >> is_adres_4;cout << endl;
                cout << "is_adres_5: ";cin >> is_adres_5;cout << endl;
                cout << "is_adres_6: ";cin >> is_adres_6;cout << endl;
                cout << "is_pozisyon_1: ";cin >> is_pozisyon_1;cout << endl;
                cout << "is_pozisyon_2: ";cin >> is_pozisyon_2;cout << endl;
                cout << "is_pozisyon_3: ";cin >> is_pozisyon_3;cout << endl;
                cout << "is_pozisyon_4: ";cin >> is_pozisyon_4;cout << endl;
                cout << "is_pozisyon_5: ";cin >> is_pozisyon_5;cout << endl;
                cout << "is_pozisyon_6: ";cin >> is_pozisyon_6;cout << endl;
                cout << "is_tecrube_1: ";cin >> is_tecrube_1;cout << endl;
                cout << "is_tecrube_2: ";cin >> is_tecrube_2;cout << endl;
                cout << "is_tecrube_3: ";cin >> is_tecrube_3;cout << endl;
                cout << "is_tecrube_4: ";cin >> is_tecrube_4;cout << endl;
                cout << "is_tecrube_5: ";cin >> is_tecrube_5;cout << endl;
                cout << "is_tecrube_6: ";cin >> is_tecrube_6;cout << endl;
                A.insert(ad, adres, telefon, eposta, dogum_tarihi,
                    dil_1, dil_2, dil_3, ehliyet_1, ehliyet_2,
                    okul_lise, okul_lisans, okul_yuksek_lisans,
                    okul_dotora, bolum_lise, bolum_lisans,
                    bolum_yuksek_lisans, bolum_dotora, lise_baslangic,
                    lise_bitis, lisans_baslangic, lisans_bitis,
                    yuksek_lisans_baslangic, yuksek_lisans_bitis,
                    dotora_baslangic, dotora_bitis, not_lise,
                    not_lisans, not_yuksek_lisans, not_dotora,
                    is_deneyim_1, is_deneyim_2, is_deneyim_3,
                    is_deneyim_4, is_deneyim_5, is_deneyim_6,
                    is_adres_1, is_adres_2, is_adres_3,
                    is_adres_4, is_adres_5, is_adres_6,
                    is_pozisyon_1, is_pozisyon_2, is_pozisyon_3,
                    is_pozisyon_4, is_pozisyon_5, is_pozisyon_6,
                    is_tecrube_1, is_tecrube_2, is_tecrube_3,
                    is_tecrube_4, is_tecrube_5, is_tecrube_6);
            }
            if (cevap_2 == 2) {
                
                cout << "isminizi giriniz" << endl;
                cin >> isim;
                cout << endl;
                A.print_only(isim);
            }
                
            if (cevap_2 == 3) {
                string silinecek_isim;
                cout << "isminizi giriniz" << endl;
                cin >> silinecek_isim;
                cout << endl;
                A.remove(silinecek_isim);
            }
                

        }


    }
if (cevap == 2) {

    while (cevap_3 != 12) {

        cout << "--------------------lütfen aşağıdaki seçeneklerden birini seçiniz:-------------------" << endl;
        cout << "İkili arama ağacındaki tüm kişilerin adlarını düzeyleri ile birlikte Listeleme için \t1'e" << endl;
        cout << "İşe başvuran tüm adayların bilgilerini listeleme için \t\t\t\t\t2'ye" << endl;
        cout << "Adından kişi arama, tüm bilgilerini listeleme için \t\t\t\t\t3'e" << endl;
        cout << "En az lisans mezunu olan kişilerin listelenmesi için \t\t\t\t\t4'e" << endl;
        cout << "İngilizce bilen kişilerin adlarının listelenmesi. için \t\t\t\t\t5'e" << endl;
        cout << "Birden fazla dil bilen kişilerin listelenmesi için \t\t\t\t\t6'ya" << endl;
        cout << "Girilecek olan minumum deneyim süresine göre başvuru listeleme için \t\t\t7'ye" << endl;
        cout << "Deneyimsiz kişilerin listelenmesi için \t\t\t\t\t\t\t8'e" << endl;
        cout << "Girilecek olan yaş değeri altındaki kişilerin listelenmesi için \t\t\t9'a" << endl;
        cout << "Belirli tip ehliyeti olan kişilerin listelenmesi için \t\t\t\t\t10'a" << endl;
        cout << "girilen ehliyet sahibi ve girilen yas(33)in altindaki herkesi listeleme için \t\t11'e" << endl;
        cout << "çıkış yapmak için\t\t\t\t\t\t\t\t\t12'ye\nbasınız" << endl;
        cin >> cevap_3;

        if (cevap_3 == 1) {
            yazma.open("herkesi düzeyler ve derinliklerle listeleme.txt");
            A.special_print();
            yazma.close();

        }
            
        if (cevap_3 == 2)
            A.print(INORDER);
        if (cevap_3 == 3) {
            
            cout << "kimi aramak istiyorsunuz" << endl;
            cin>>isim;
            cout << endl;
            yazma.open("adindan kişi arama ve bilgilerini listeleme.txt");
            A.print_only(isim);
            yazma.close();
        }

        if (cevap_3 == 4) {
            yazma.open("en az lisans.txt");
            A.print_en_az_lisans();
            yazma.close();

        }
           
        if (cevap_3 == 5) {
            yazma.open("ingilizce bilen.txt");
            A.print_ingilizce();
            yazma.close();

        }
            
        if (cevap_3 == 6) {
            yazma.open("birden fazla dil bilen.txt");
            A.print_cok_dil();
            yazma.close();

        }
            
        if (cevap_3 == 7) {
            int min_deneyim;
            cout << "minimum deneyim süresini giriniz." << endl;
            cin >> min_deneyim;
            cout << endl;
            yazma.open("girilen minumum(5) yıl deneyimli herkesi listeleme.txt");
            A.print_deneyim_min(min_deneyim);
            yazma.close();
        }
                                     
        if (cevap_3 == 8) {
            yazma.open("deneyimsiz herkesi listeleme.txt");
            A.print_deneyimsiz();
            yazma.close();

        }
            
        if (cevap_3 == 9) {
            int yas;
            cout << "yaşı giriniz." << endl;
            cin >> yas;
            cout << endl;
            yazma.open("girilen yas(33)in altindaki herkesi listeleme.txt");
            A.print_yas_alti(yas);
            yazma.close();
        }
            
        if (cevap_3 == 10) {
            string ehliyet;
            cout << "ehliyeti giriniz." << endl;
            cin>>ehliyet;
            cout << endl;
            yazma.open("girilen ehliyet(A2) sahibi herkesi listeleme.txt");
            A.print_ehliyetli(ehliyet);
            yazma.close();
        }
            
        if (cevap_3 == 11) {
            string ehliyet;
            cout << "ehliyeti giriniz." << endl;
            cin >> ehliyet;
            cout << endl;
            int yas;
            cout << "yaşı giriniz." << endl;
            cin >> yas;
            cout << endl;
            yazma.open("girilen ehliyet(A2) sahibi ve girilen yas(33)in altindaki herkesi listeleme.txt");
            A.print_ehliyetli_ve_yas_alti(ehliyet, yas);
            yazma.close();

        }


    }

    

}



    return 0;
}

