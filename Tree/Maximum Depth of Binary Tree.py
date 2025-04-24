#May 11, 2021

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
'''
                3
               / \
              9   20
                 /  \
                15   7
'''
class Solution:
    def maxDepth(self, root: TreeNode, depth = 0 )-> int:           
        """
        :type root: TreeNode
        :rtype: int
        """
        #
        if root == None:
            return 0
        if root.left == None and root.right == None:
            return 1
        else:
            l = self.maxDepth(root.left)
            r = self.maxDepth(root.right)
            if l > r:
                return 1 + l
            if r >= l:
                return r + 1
        