
public class TreeTraversal{

     public static void main(String []args){
        Node a = new Node();
        Node b = new Node();
        Node c = new Node();
        Node d = new Node();
        Node e = new Node();
        Node f = new Node();
        
        Tree tree = new Tree();
        tree.insertNode(a, 7);
        tree.insertNode(b, 3);
        tree.insertNode(c, 9);
        tree.insertNode(d, 1);
        tree.insertNode(e, 4);
        tree.insertNode(f, 8);
        
        tree.inOrderTraversal(a);
     }
}


class Tree{
	Node root;

	public void insertNode(Node node, int value){
	    if(root == null){
	        root = node;
	        root.value = value;
	    }else{
		    root = insertNodes(root, value);
	    }
	}

	public Node insertNodes(Node node, int value){
		if(node == null){
			node = new Node();
			node.value = value;
		}else if(node.value > value){
			node.leftChild = insertNodes(node.leftChild, value);
		}else{
			node.rightChild = insertNodes(node.rightChild, value);
		}

		return node;
	}

	public void inOrderTraversal(Node node){
		if(node != null){
    			
    		if(node.leftChild !=null)
    			inOrderTraversal(node.leftChild);
    		System.out.print("      "+node.value);
    		if(node.rightChild != null)
    			inOrderTraversal(node.rightChild);
		}
	}
	
	
	public void preOrderTraversal(Node node){
		if(node != null){
    			System.out.print("      "+node.value);
    		if(node.leftChild !=null)
    			preOrderTraversal(node.leftChild);
    		
    		if(node.rightChild != null)
    			preOrderTraversal(node.rightChild);
		}
	}
}


class Node{
	Node leftChild;
	Node rightChild;
	int value;
}