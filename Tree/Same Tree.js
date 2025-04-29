/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 * 
 * SUBMISSION DATE JAN 9 2020
 */
/**
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {boolean}
 */
var isSameTree = function(p, q) {
    
    if(p === null && q === null){ return true;}
    else if((q == null && p != null)||(q != null && p == null)) {return false; }
    
    else if(p.val != q.val) {return false;}
    
     return isSameTree(p.right, q.right) &&
           isSameTree(p.left, q.left);
};