#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"

//Problem 1 of Programming Assignment 2 by Brian Hsieh. This program is the C program version of a binary search tree. It has an add, removeSmallest, removeLargest, and inorder function.

void add ( bst_node ** root, char * word ) {
    //Creating a temporary node and setting its data to the word that the user input. Then, set the left and right of the node to null because it has no children yet.
    bst_node *temp = (bst_node*)malloc(sizeof(bst_node));
    temp->data = word; 
    temp->left = NULL;
    temp->right = NULL;
    
    //Making sure the contents of temp is not null 
    if (temp == NULL) {
        return;
    }

    bst_node *current = *root;

    //Checking if the binary search tree is empty and if so, set the root to the temporary node
    if(!*root) {
        (*root) = temp;
        return;
    }

    //Initializing two variables left and right to see where the current node will be going after comparison 
    int left;
    int right;
    //Making a new node that will be the node that follows the current one
    bst_node *follow = NULL;
    

    while (current) { 
        int compare;

        compare = strcmp(word, current->data);
        follow = current;

        //Setting the left variable to 1
        if (compare < 0) { 
            current = current->left;
            right = 1; 
        }

        //Setting the right variable to 1
        else { 
            current = current->right;
            left = 1;
        }
    }

    //Checking the values of the left and right variables
    if (left == 1) { 
        follow->left = temp;
    }
    else if (right == 1) {
        follow->right = temp;
    }

}



 
void inorder ( bst_node * root ) {
    //Using recursion to print the inorder version of the binary tree. 

    //Checking if the binary search tree is empty. If so, just return. 
    if (!root) {
        return;
    }
    else {
        inorder(root->left);
        if (root) {
            printf("%s ", root->data);
        }
        inorder(root->right);
    }
}


 
char * removeSmallest (  bst_node ** root ){
    bst_node *parent = NULL;
    bst_node *ptr = *root;
    char *data;
    if (!*root) {
        return NULL;
    }
    else if (ptr->left == NULL) {
        data = ptr->data;
        (*root) = ptr->right;

        free(ptr);
        ptr = NULL;
        return data;
    }
    while (ptr->left != NULL) {
        parent = ptr;
        ptr = ptr->left;
    }

    //Freeing the allocated memory
    //Setting the character data that we initialized earlier to the data of the current node. 
    data = ptr->data;
    parent->left = ptr->right;
    free(ptr);
    ptr = NULL;

    //Returning the data of the node
    return data;
}

 
char * removeLargest (  bst_node ** root ){
    bst_node *parent = NULL;
    bst_node *ptr = *root;
    char *data;
    if (!*root) {
        return NULL;
    }
    else if (ptr->right == NULL) {
        data = ptr->data;
        (*root) = ptr->left;
        free(ptr);
        ptr = NULL;
        return data;
    }
    while (ptr->right) {
        parent = ptr;
        ptr = ptr->right;
    }
    //Freeing the allocated memory
    //Setting the character data that we initialized earlier to the data of the current node. 
    data = ptr->data;
    parent->right = ptr->left;
    free(ptr);
    ptr = NULL;
    
    //Returning the data of the node 
    return data;
}




