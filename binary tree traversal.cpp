#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int data) : data(data), left(nullptr), right(nullptr){}
};

class BinaryTree{
  private:
  Node* root;
  
  Node* insert(Node* node, int value){
    //if treee is empty
    if(node == nullptr){
      cout << "Inserting " << value << endl;
      return new Node(value);
    }
    
    //if vlaue is smaller then existing node
    
    if(value < node->data){
      node->left = insert(node->left, value);
    }
    //if the value is bigger than existing node
    else{
      node->right = insert(node->right, value);
    }
    return node;
    
  }
  
  void inorderTraversal(Node* node){
    if(node == nullptr) {
       
        return;
    }
    
    inorderTraversal(node->left);
    cout<<node->data<<" ";
    inorderTraversal(node->right);
    
  }
  
      void preorderTraversal(Node* node) {
        if (node == nullptr) return;

        cout << node->data << " ";       
        preorderTraversal(node->left);    
        preorderTraversal(node->right);   
    }

    void postorderTraversal(Node* node) {
        if (node == nullptr) return;

        postorderTraversal(node->left);  
        postorderTraversal(node->right);  
        cout << node->data << " ";        
    }
  
  public:
   BinaryTree() : root(nullptr) {}
   
   void insert(int value){
     root = insert(root, value);
      
   }
   void inorderTraversal(){
     inorderTraversal(root);
     cout<<endl;
   }
   
       void preorderTraversal() {
        preorderTraversal(root);
        cout << endl;
    }

    void postorderTraversal() {
        postorderTraversal(root);
        cout << endl;
    }
  
};

int main() 
{
    BinaryTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "In-order Traversal: ";
    tree.inorderTraversal();
    
    cout << "Pre-order Traversal: ";
    tree.preorderTraversal();

    cout << "Post-order Traversal: ";
    tree.postorderTraversal();

    return 0;
}