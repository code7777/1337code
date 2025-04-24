// Jan 19 , 2020

/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */

var maxDepth = function(root) {
    /* var count =0;
     while(root !=null){
         count++;
         root.left;
         root.right
     }
     return count;*/
    // DFS(root);
 
     if(root === undefined || root===null){
         return 0;
     }
     return Math.max(maxDepth(root.left),maxDepth(root.right)) + 1;
 
 };
 /*function dfs(tree, value) {
     var stack = []
     
     stack.push(tree[0])
     if(tree[0]){
         
     }
     while (stack.length !== 0) {
         for (let i = 0; i < stack.length; i++) {
             var node = stack.pop()
             
             if (node.value === value) {
                 return node
             }
             if (node.right) {
                 
                 stack.push(tree[node.right])
             }
             if (node.left) {
                 stack.push(tree[node.left])
             }
         }
     }
     return null
 }*/
 /*function DFS(node) {
    // Create a Stack and add our initial node in it
    //let s = new Stack(this.nodes.length);
      var stack = [];
     stack.push(node[0]);
    let explored = new Set();
    stack.push(node);
 
    // Mark the first node as explored
    explored.add(node);
 
    // We'll continue till our Stack gets empty
    while (!stack.isEmpty()) {
       let t = stack.pop();
 
       // Log every element that comes out of the Stack
       console.log(t);
 
       // 1. In the edges object, we search for nodes this node is directly connected to.
       // 2. We filter out the nodes that have already been explored.
       // 3. Then we mark each unexplored node as explored and push it to the Stack.
       this.edges[t]
       .filter(n => !explored.has(n))
       .forEach(n => {
          explored.add(n);
          s.push(n);
       });
    }
 }*/