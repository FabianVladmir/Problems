#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


template <class T>
class Node{
private:
    T value;
    int heigh;
public:
    Node *left;
    Node *right;
    
    Node(const T tmp, Node<T>* left_, Node<T>* right_ , unsigned int h = 0){
        value = tmp;
        left = left_;
        right = right_;
        heigh = h;
    }
    void setdata(const T value) {this -> value = value;} 
    T getdata() const {return value;}
    
    void setheigh(int heigh) {this -> heigh = heigh;}    
    int getheigh() const {return heigh;} 
};


template <class T>
class Tree{
private:
    Node<T> *root;
public:

    Tree(){this->root = NULL;}
    
    
    bool insert_help(Node <T>*& node, T data) 
    {
        if(!node)
        { 
            node = new Node<T>(data,NULL,NULL);
            cout << "Data insert: " << data <<endl;
        }
        else if (data == node -> getdata())
        { 
            cout << "Data currently: " << data <<endl;
            return false;
        }

        else if (data < node -> getdata()) {insert_help(node -> left, data);} //Menor izquierda
        else if (data > node -> getdata()) {insert_help(node -> right, data);} //Mayor Derecha
        
        return true;
    }


    void insert(T data)
    {
      insert_help(root,data);
    }
    
    Node<T>* find_help(Node <T>* node, T data)
    { 
        if(!node){return NULL;}
        if(data == node -> getdata()) 
          {return node;}
        if(data < node -> getdata()) 
          {return find_help(node -> left,data);}
        if(data > node -> getdata()) 
          {return find_help(node -> right,data);}
        
        return NULL;
    }


    void find(T data)
    {
        if(!find_help(root,data)) {cout << data << ": Not found " <<endl;}
        else {cout << data << "Value find" <<endl;}
    }    

   
    void remove_help(Node<T>*& node,const T data,int aux)
    { 
        if (!node) 
          return;
        else if (data < node -> getdata()) 
        {
          remove_help(node->left, data, aux);
        }
        else if (data > node -> getdata()) 
        {remove_help(node -> right, data, aux);}

        else if (node -> left && node -> right)
        {
            if(aux == 1)
            { 
                node -> setdata(sucesorRcursive(node -> right) -> getdata());
                remove_help(node -> right, node -> getdata(), aux);
            }
            else if(aux == 2)
            { 
                node -> setdata(predecessor(node -> left) -> getdata());
                remove_help(node -> left, node -> getdata(), aux);
            }
        }
        else
        {
            Node<T>* nodeDeleter = node;
            node = (node->left) ? node->left : node->right;
            delete nodeDeleter;
        }
    }
    void remove(T data, const int rem)
      {
        remove_help(root,data,rem);
      }    
    
    Node<T>* sucesorRcursive(Node<T>* node) const
    {
        if (!node)
            return NULL;
        if (!(node->left))
            return node;
        return sucesorRcursive(node->left);
    }

  
    Node<T>* predecessor(Node<T>* node) const
    {
        if (!node)
            return NULL;
        if (!(node->right))
            return node;
        return sucesorRcursive(node->right);
    }

    std::vector<T> preOrden(std::vector<T>& a, Node<T> *tmp) const
    {
        if(tmp)
        {
            a.push_back(tmp -> getdata());
            std::cout << tmp -> getdata() << " ";
            preOrden(a,tmp -> left);
            preOrden(a,tmp -> right);
        }
        return a;
    }

    std::vector<T> inOrden(std::vector<T>& a, Node<T> *tmp) const
    {
        if(tmp ){
            inOrden(a,tmp -> left);
            a.push_back(tmp -> getdata());
            std::cout << tmp -> getdata() << " ";
            inOrden(a,tmp -> right);
        }
        return a;
    }

    std::vector<T> postOrden(std::vector<T>& a, Node<T> *tmp) const
    {
        if(tmp)
        {
          postOrden(a,tmp -> left);
          postOrden(a,tmp -> right);
          a.push_back(tmp -> getdata());
          std::cout << tmp -> getdata() << " ";
        }
        return a;
    }

    void show(){
        std::cout << "inorden:";
        std::vector<T> a;
        inOrden(a,root);
        std::cout << std::endl;
        std::cout << "preorden:";
        std::vector<T> b;
        preOrden(b,root);
        std::cout << std::endl;
        std::cout << "postorden:";
        std::vector<T> c;
        postOrden(c,root);
        std::cout << std::endl;
    }
};


int main()
{
    ifstream filereader("input.txt");
    if(filereader.is_open())
    {
        string label;
        filereader >> label;

        if(label == "int")
        {
            Tree<int> bst_int;
            int data;
            
            while(filereader >> data){bst_int.insert(data);}
            
            int rem,temp;
            
            do{
                cout << " 1 insert \n 2 Find \n 3 Remove\n 4 Show\n5 Leave\nChoose one opcion:";
                cin >> temp ;
                switch(temp )
                {
                    case 1: 
                      cout << "Date inserted: ";
                      cin >> data;bst_int.insert(data);
                      break;
                    case 2: 
                      cout << "Date find: ";
                      cin >> data;bst_int.find(data);
                      break;
                    case 3: 
                      cout << "Date remove: ";
                      cin >> data;
                      cout << "1 sucesor 2 predecesor -> ";
                      cin>>rem;
                      bst_int.remove(data,rem);
                      break;
                    case 4: 
                      cout << "travel " << endl;
                      bst_int.show();
                      break;
                }  
            }
            while(temp !=5);
            exit(1);
        }

        else if(label == "char")
        {
            Tree<char> bst_char;
            char data;

            while(filereader >> data){bst_char.insert(data);}

            int rem,temp ;
            do{
                cout << " 1 insert \n 2 Find \n 3 Remove\n 4 Show\n5 Leave\nChoose one opcion:";
                cin >> temp ;
                switch(temp )
                {
                    case 1: 
                      cout << "Date inserted: ";
                      cin >> data;bst_char.insert(data);
                      break;
                    case 2: 
                      cout << "Date find: ";
                      cin >> data;bst_char.find(data);
                      break;
                    case 3: 
                      cout << "Date remove: ";
                      cin >> data;
                      cout << "1 sucesor 2 predecesor -> ";
                      cin>>rem;
                      bst_char.remove(data,rem);
                      break;
                    case 4: 
                      cout << "travel " << endl;
                      bst_char.show();
                      break;
                }  
            }
            while(temp !=5);
            exit(1);
        }
        else if(label == "string")
        {
            Tree<std::string> bst_str;
            std::string data;

            while(filereader >> data){bst_str.insert(data);}

            int rem,temp ;

            do{
                cout << " 1 insert \n 2 Find \n 3 Remove\n 4 Show\n5 Leave\nChoose one opcion:";
                cin >> temp ;
                switch(temp )
                {
                    case 1: 
                      cout << "Date inserted: ";
                      cin >> data;bst_str.insert(data);
                      break;
                    case 2: 
                      cout << "Date find: ";
                      cin >> data;bst_str.find(data);
                      break;
                    case 3: 
                      cout << "Date remove: ";
                      cin >> data;
                      cout << "1 sucesor 2 predecesor -> ";
                      cin>>rem;
                      bst_str.remove(data,rem);
                      break;
                    case 4: 
                      cout << "travel " << endl;
                      bst_str.show();
                      break;
                }  
            }
            while(temp !=5);
            exit(1);
        }
    }
    filereader.close();
    return 0;
}
