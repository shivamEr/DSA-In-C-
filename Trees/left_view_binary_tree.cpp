

// LINK : https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1

// BFS TECHNIQUE

vector<int> leftView(Node *root)
{
    vector<int> v;
    if (!root)
        return v;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        bool flag = 0;
        int s = q.size();
        while (s--)
        {
            Node *f = q.front();
            q.pop();
            if (flag == 0)
            {
                v.push_back(f->data);
                flag = 1;
            }
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
    }
    return v;
}


// USING DFS TECHNIQUE : 

// void solve(Node *root,vector<int>&v, int d){
//     if(!root) return;
//     if(d==v.size()) v.push_back(root->data);
//     solve(root->left,v,d+1);
//     solve(root->right,v,d+1);
// }
// vector<int> leftView(Node *root)
// {
//    vector<int>v;
//    if(!root) return v;
//    solve(root,v,0);

//           return v;
//    }