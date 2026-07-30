class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set <int> visited;
        queue <int> q;
        q.push(0);
        visited.insert(0);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto neighbor: rooms[curr]){
               if(visited.find(neighbor) == visited.end()){ q.push(neighbor);
                visited.insert(neighbor);}
            }
        }
        return visited.size() == rooms.size();
    }
};