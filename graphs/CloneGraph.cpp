/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/


//DFS 

class Solution {
public:

unordered_map<Node* , Node*> mp;

    Node* cloneGraph(Node* node) {

        //if there is null node return null

        if(node == nullptr){
            return nullptr;
        }

        //if its not in unordered map that means there is no copy 

        if(mp.find(node) == mp.end()){

        //make a copy

            mp[node] = new Node(node->val,//this adds the neighbors
             {});

            for(auto adj : node ->neighbors){
                mp[node] -> neighbors.push_back(cloneGraph(adj)); //add a copy
            } }

        return mp[node];
    }
};
