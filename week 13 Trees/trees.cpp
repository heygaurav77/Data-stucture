#include<iostream>
#include<queue>
using namespace std;

class Node{
  public:

  int data;
  Node* left;
  Node* right;

  Node(int val){
    this-> data = val;
     left = NULL;
     right = NULL;
  }

};
  Node* createTree() {
    //cout << "Enter the value for Node" <<endl;
    int value;
    cin >> value;

    if(value == -1){
        return NULL;
    }
     else{
        //valid true
        Node* root = new Node(value);
        // 1 case mee 
        //cout << "adding left child " << value << endl;
        root -> left = createTree();
        //cout << "adding right child " << value << endl;
        root -> right = createTree();
        return root;
     }


  }

void PreOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    //NLR
    //N
    cout << root-> data << endl;
    // L
    PreOrderTraversal(root -> left);
    //R
    PreOrderTraversal(root-> right);

}

void inOrderTraversal(Node* root){
     if(root == NULL){
        return;
    }
    //LNR
    inOrderTraversal(root -> left);

    cout << root-> data << " ";

    inOrderTraversal(root -> right);
}

void postOrderTraversal(Node* root){
     if(root == NULL){
        return;

     }

  //LRN
     postOrderTraversal(root -> left);

     postOrderTraversal(root -> right);

     cout << root-> data << " ";


};


void levelOrderTraversal(Node* root){
    queue<Node> q;

    q.push(root);

    while(!q.empty()){
       Node* front = q.front();
       q.pop();

       // print karlo
       cout << front->data << " ";

       // iske bache kha loo
       if(front->left != NULL){
        q.push(front->left);
       }

        if(front->right != NULL){
        q.push(front->right);
       }
    }

}


int main(){

// Node* root;
// root = createTree();

levelOrderTraversal(root);

// cout << "printing root " << root->data << endl;
// this is striung nodes


return 0;
}