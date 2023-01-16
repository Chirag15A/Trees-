#include<iostream>
using namespace std;

class binarytree{
    public:
    int data;
    binarytree *left;
    binarytree *right;
    binarytree(){
        data = 0;
        left = NULL;
        right = NULL;
    }
    binarytree(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
    binarytree *insertion(binarytree *root){
        cout<<"Enter the data: "<<endl;
        int data;
        cin>>data;
        root = new binarytree(data);
        if(data == -1) return NULL;
        cout<<"Enter data for inserting in left of "<<data<<": "<<endl;
        root->left = insertion(root->left);
        cout<<"Enter data for inserting in right of "<<data<<": "<<endl;
        root->right = insertion(root->right);
        return root;
    }
    void inorder(binarytree* root)
        {
            if (root==NULL) {
                return ;
            }
            inorder(root->left);
            cout << root->data <<"\t";
            inorder(root->right);
        }
    void preorder(binarytree *root){
        if(root == NULL){
            return;
        }
        cout<<root->data<<"\t";
        preorder(root->left);
        preorder(root->right);
    }
    void postorder(binarytree *root){
        if(root == NULL){
           return ;
        }
         postorder(root->left);
            postorder(root->right);
            cout<<root->data<<"\t";
    }

};
int main(){
    binarytree b;
    binarytree *root = NULL;
    root = b.insertion(root);
    cout<<"Inorder traveral of tree is: "<<endl;
    b.inorder(root);
    cout<<endl;
    cout<<"Preorder traveral of tree is: "<<endl;
    b.preorder(root);
    cout<<endl;
    cout<<"Postorder traveral of tree is: "<<endl;
    b.postorder(root);
    cout<<endl;
}