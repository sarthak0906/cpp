#include<iostream>
#include<string.h>

using namespace std;

class binary_tree{
	struct node{
		int value;
		struct node * left ;
		struct node * right;
	};
	
	struct node * root;
	
		struct node * newnode(int value){
			struct node * temp = new struct node;
			temp->value = value;
			temp->left = temp->right = NULL;
			return temp;
		}
		
		int nodedepth(struct node * node){
			if (node == NULL) return 0;
			else {
				int ldepth = nodedepth(node->left) + 1;
				int rdepth = nodedepth(node->right) + 1;
				if (ldepth > rdepth) return ldepth;
				else return rdepth;
			}
		}	
		
		int nodediameter(struct node * node){
			int crnt_diameter = 0;
			crnt_diameter = nodedepth(node->left) + nodedepth(node->right) + 1;
			if (crnt_diameter < nodediameter(node->left)) return nodediameter(node->left);
			else if (crnt_diameter < nodediameter(node->right)) return nodediameter(node->right);
			else return crnt_diameter;
		}
		
	public:
		
		void addroot(int value){
			root = newnode(value);
		}	
		
		struct node * addnode(int value,char path[]){
			struct node * temp ;
			struct node * p;
			temp = newnode(value);
			p = root;
			for (int i=0;i<strlen(path);++i){
				if (path[i] == 'L' &&p != NULL) p = p->left;
				else if (path[i] == 'R' &&p != NULL) p = p->right;
				else cout << "Invalid Input" << endl ;
			}
			p = temp;
		}
		
		int maxdepth(){
			return nodedepth(root);
		}
		
		int maxdiameter(){
			return nodediameter(root);
		}
		
};
