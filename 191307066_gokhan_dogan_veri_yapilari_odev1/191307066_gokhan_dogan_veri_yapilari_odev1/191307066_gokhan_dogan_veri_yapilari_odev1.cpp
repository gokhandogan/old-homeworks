

#include <iostream>

using namespace std;

class stack
{
    char yigin_dizi[100];
    int tos;

public:
    stack();
    void push(char ch);
    char pop();
    bool bos_mi();
 
};

stack::stack()
{
    cout << "stack yapilandiriliyor." << endl;
    tos = 0;

}

void stack::push(char ch)
{
    yigin_dizi[tos] = ch;
    tos++;
            
}

char stack::pop()
{
  
    tos--;
    return yigin_dizi[tos];
    
}
bool stack::bos_mi()
{
    if (tos <= 0)
        return true;
    else
        return false;
}



int main()
{
    stack s1;
    char dizi[] = { '2','*','i','+','5','*','(','(','[','7','–','j','/','4',')','*',')',')','k',']' };
    for (int i = 0; i < 25 ; i++)
    {
        if (dizi[i] == '(' || dizi[i] == '{' || dizi[i] == '[')
            s1.push(dizi[i]);

        
        else if (dizi[i] == ')')
        {
            if (s1.bos_mi())
            {               
                cout << "yigin bos hatasi" << endl;
            }
            else if (s1.pop() != '(')
                cout << "-)- parantezi hatasi" << endl;
 
        }
        else if (dizi[i] == '}')
        {
            if (s1.bos_mi())
            {                
                cout<<"yigin bos hatasi"<<endl;
            }
            else if (s1.pop() != '{')
                cout << "-}- parantezi hatasi"<<endl;

        }
        else if (dizi[i] == ']')
        {
            if (s1.bos_mi())
            {                
                cout << "yigin bos hatasi" << endl;
            }               
            else if (s1.pop() != '[')
                cout << "-]- parantezi hatasi"<<endl;

        }


    }
    
    if (!s1.bos_mi())
    {
        cout << "yigin dolu hatasi" << endl;
    }
        


    return 0;
}

