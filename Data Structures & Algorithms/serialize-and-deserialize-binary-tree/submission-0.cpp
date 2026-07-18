class Codec {
public:

    string s;

    string serialize(TreeNode* root) {
        if (root == NULL) {
            s += "NULL,";
            return s;
        }

        s += to_string(root->val) + ",";
        serialize(root->left);
        serialize(root->right);

        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* build(TreeNode* root, int& i, vector<string>& ans) {

        if (ans[i] == "NULL") {
            i++;
            return NULL;
        }

        TreeNode* root2 = new TreeNode(stoi(ans[i]));
        i++;

        root2->left = build(root2->left, i, ans);
        root2->right = build(root2->right, i, ans);

        return root2;
    }

    TreeNode* deserialize(string data) {

        vector<string> ans;
        string temp = "";

        for (auto it : data) {
            if (it == ',') {
                ans.push_back(temp);
                temp = "";
            } else {
                temp += it;
            }
        }

        int i = 0;
        TreeNode* root = NULL;

        return build(root, i, ans);
    }
};