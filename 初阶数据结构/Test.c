#define _CRT_SECURE_NO_WARNINGS
   
//1.��ֵ������
//https ://leetcode.cn/problems/univalued-binary-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 //����1
bool flag = true;
void PreOrderCompare(struct TreeNode* root, int val)
{
    if (root == NULL)
        return;
    if (root->val != val)
        flag = false;

    PreOrderCompare(root->left, val);
    PreOrderCompare(root->right, val);
}

bool isUnivalTree(struct TreeNode* root)
{
    if (root == NULL)
        return true;
    flag = true;
    PreOrderCompare(root, root->val);
    return flag;
}

//����2
bool isUnivalTree(struct TreeNode* root)
{
    if (root == NULL)
        return true;
    if (root->left && root->left->val != root->val)
        return false;

    if (root->right && root->right->val != root->val)
        return false;

    return isUnivalTree(root->left)
        && isUnivalTree(root->right);
}

//2.��ͬ����
//https://leetcode.cn/problems/same-tree/description/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;
    if (p->val != q->val)
        return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}


//3.�Գƶ�����
//https://leetcode.cn/problems/symmetric-tree/description/
bool isSymmetric(struct TreeNode* root1, struct TreeNode* root2)
{
    if (root1 == NULL || root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    if (root1->val != root2->val)
        return false;

    return isSymmetric(root1->left, root2->right) && (root1->right, root2->left);
}
bool isSymmetric(struct TreeNode* root) 
{
    if (root == NULL)
        return true;

    return isSymmetric(root->left, root->right);
}

//4.������ǰ�����
//https://leetcode.cn/problems/binary-tree-preorder-traversal/description/

//5.�������������
//https://leetcode.cn/problems/binary-tree-inorder-traversal/description/

//6.�������������
//https://leetcode.cn/problems/binary-tree-postorder-traversal/description/

//7.��һ����������
//https://leetcode.cn/problems/subtree-of-another-tree/description/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;
    if (p->val != q->val)
        return false;
    return isSameTree(p->left, q->left)
        && isSameTree(p->right, q->right);
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot)
{
    if (root == NULL)
        return false;

    if (isSameTree(root, subRoot))
        return true;

    return isSubtree(root->left, subRoot)
        || isSubtree(root->right, subRoot);
}

//8.����������
https ://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef?tpId=60&&tqId=29483&rp=1&ru=/activity/oj&qru=/ta/tsing-kaoyan/question-ranking