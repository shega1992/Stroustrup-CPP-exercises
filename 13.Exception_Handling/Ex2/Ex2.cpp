#include <iostream>
#include <string>
#include "exc.h"

struct Tnode
{
    std::string word;
    int count;
    Tnode * left;
    Tnode * right;
};

Tnode * initialize_tree();
void add_item(Tnode * );
void add_node(Tnode * , Tnode * );
Tnode * find(Tnode * , std::string);
void delete_all_nodes(Tnode * );
void print_tree(Tnode * );

int main()
{
    Tnode * words = initialize_tree();
    std::string str; 
    char answer;

    std::cout << "Do you want to add a new word?(y/n): ";
    while((std::cin >> answer).get() && answer != 'n')
    {
        add_item(words);
        std::cout << "Do you want to add a new word?(y/n): ";
    }

    std::cout << "Do you want to find a word?(y/n): ";
    while((std::cin >> answer).get() && answer != 'n')
    {
      std::cout << "Please enter word to search: ";
      getline(std::cin, str);
      try {
	find(words, str);
      }
      catch(Not_found & nf) {
	nf.mesg();
      }
       std::cout << "Do you want to find a word?(y/n): ";
    }
    
    std::cout << "Your words:\n";
    print_tree(words);
    delete_all_nodes(words);

    return 0;
}

Tnode * initialize_tree()
{
    Tnode * root = new Tnode;
    std::cout << "Please enter the first word: ";
    getline(std::cin,root->word);
    root->count = 1;
    root->left = root->right = nullptr;
    return root;
}

void add_item(Tnode * root)
{
    Tnode * child = new Tnode;
    std::cout << "Please enter your word: ";
    getline(std::cin,child->word);
    add_node(root, child);
}

void add_node(Tnode * parent, Tnode * child)
{
    if(child->word < parent->word)
    {
       if(!parent->left)
       {
           parent->left = child;
           child->count = 1;
           child->left = child->right = nullptr;
       }
       else
            add_node(parent->left,child);
    }
    else if(child->word > parent->word)
    {
        if(!parent->right)
        {
             parent->right = child;
             child->count = 1;
             child->left = child->right = nullptr;
        }
        else
            add_node(parent->right,child);
    }
    else
    {
        parent->count++; // repeated word
        delete child;
    }
}

Tnode * find(Tnode * node, std::string str)
{
  if(!node)
    throw Not_found("not_found");
  else if(str < node->word)
    find(node->left, str);
  else if(str > node->word)
    find(node->right, str);
  else
    return node;
}
  
void delete_all_nodes(Tnode * node)
{
    if(node)
    {
        delete_all_nodes(node->left);
        delete_all_nodes(node->right);
        delete node;
    }
}

void print_tree(Tnode * node)
{
    if(node)
    {
        print_tree(node->left);
        std::cout << node->word << '(' << node->count << ')' << std::endl;
        print_tree(node->right);
    }
}
