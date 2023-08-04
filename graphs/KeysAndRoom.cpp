//KEYS AND ROOM

class Solution {
public:

void dfs(vector<vector<int>>& rooms, unordered_set<int>&keys , unordered_set<int>&visited, 
int curr){

    visited.insert(curr);
    for(int k : rooms[curr]) keys.insert(k);
    for(int k : keys) if(visited.find(k) == visited.end()) dfs(rooms, keys, visited , k);
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int>keys;
        unordered_set<int>visited;
        dfs(rooms, keys, visited, 0);
        return visited.size() == rooms.size();
    }
};
