import java.io.*;
public class BinarySearchTree{
    class Node{
        int key ;
        Node left,right;
        public Node(int item)
        {
            key = item;
            left = right = null;
        }
    }
    Node root;
    BinarySearchTree(){
        root = null;
    }
    BinarySearchTree(int value){
        root = new Node(value);
    }
    void insert(int key){
        root = insertRec(root,key);
    }
    Node insertRec(Node root,int key){
        if(root==null)
        root = new Node(key);
        return root;
    }
    else
    {
        
    }
}