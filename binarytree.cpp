//       _                _   _           _     _                            _
//     __| | ___  __ _  __| | (_)_ __  ___(_) __| | ___   _ __ ___   ___   __| | ___
//   / _` |/ _ \/ _` |/ _` | | | '_ \/ __| |/ _` |/ _ \ | '_ ` _ \ / _ \ / _` |/ _ \
//  | (_| |  __/ (_| | (_| | | | | | \__ \ | (_| |  __/ | | | | | | (_) | (_| |  __/
//  \__,_|\___|\__,_|\__,_| |_|_| |_|___/_|\__,_|\___| |_| |_| |_|\___/ \__,_|\___|


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

#define MAXN 100005
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fast ios::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
#define clar(a) memset(a, 0, sizeof(a));
#define usll unordered_set<ll>
#define vll(n) vector<ll> n
#define all(v) v.begin(), v.end()
#define file_st ifstream in("input.txt"); cin.rdbuf(in.rdbuf());
#define file_end in.close();
#define dec(x) printf("%.10f\n", x)

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int data){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));

    node->data=data;
    node->left=NULL;
    node->right=NULL;

    return (node);
};

void traversePreOrder(struct Node *temp){
    if(temp!=NULL){
        cout<<" "<<temp->data;
        traversePreOrder(temp->left);
        traversePreOrder(temp->right);
    }
}

void traverseInOrder(struct Node *temp){
    if(temp!=NULL){
        traverseInOrder(temp->left);
        cout<<" "<<temp->data;
        traverseInOrder(temp->right);
    }
}

void traversePostOrder(struct Node *temp){
    if(temp!=NULL){
        traversePostOrder(temp->left);
        traversePostOrder(temp->right);
        cout<<" "<<temp->data;
    }
}

int main() {
    fast

    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    cout << "Preorder traversal: ";
    traversePreOrder(root); cout << "\n";
    cout<<"Postorder traversal: ";
    traversePostOrder(root); cout << "\n";
    cout << "Inorder traversal: ";
    traverseInOrder(root); cout << "\n";

    return 0;
}
