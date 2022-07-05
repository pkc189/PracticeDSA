 class Solution {
   public:
     int sumRootToLeaf(TreeNode * root) {

       int sum = 0;
       string binary = "";

       traverse(root, binary, sum);

       return sum;

     }

   void traverse(TreeNode * root, string & binary, int & sum) {
     if (root == NULL) {

       return;
     }

     binary += to_string(root -> val);

     if (root -> left == NULL && root -> right == NULL) {

       sum += stoi(binary, 0, 2);

     }

     traverse(root -> left, binary, sum);

     traverse(root -> right, binary, sum);
 
     binary.pop_back();

   }

 };