#include<iostream>
#include<stdlib.h>

struct Node* newNode(int data){
    struct Node* temp= new Node;
    temp->data = data;
    temp->right = temp->down = NULL;
    return temp;
}

Node* constructLinkedMatrix(int mat[MAX][MAX], int n){
    Node* m[n][n];
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            m[i][j]= newNode(mat[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==n-1 && j!=n-1){
                m[i][j]->down=NULL;
                m[i][j]->right=m[i][j+1];
            }
            else if(j==n-1 && i!=n-1){
                m[i][j]->right=NULL;
                m[i][j]->down=m[i+1][j];
            }
            else if(i!=n-1 && j!=n-1){
                m[i][j]->right = m[i][j+1];
                m[i][j]->down = m[i+1][j];
            }
        }
    }
    return m[0][0];
}