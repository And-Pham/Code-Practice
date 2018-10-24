class Solution {

/*
Outputs all the paths from the source node to the end node
*/
    
public:
    /*
    Depth first search helper function. 
    Inputs: Pointer to graph object, pointer to path list (result), 
                the current path vector (NOTE: doesn't pass a reference, so the current path isn't save in the later searh),
                the value of the current node, the value of the destination node
    */
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& result, vector<int> path, int src, int dst){

        // Add current node to the path
        path.push_back(src);
        
        // If the current node is the destination, add the current path to the path list
        if (src == dst){
            result.push_back(path);
            return;
        } else {

            // Else, keep perform the DFS for each edge from the src node
            for (auto node: graph[src]){
                dfs(graph, result, path, node, dst);
            }
        }
    }
    
public:
    /*
    Main function that calls the DFS function
    Input: The edge list representation of the graph
    Output: All the paths from the src to dst node
    */
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> paths;
        vector<int> path;
        
        dfs(graph, paths, path, 0, graph.size() - 1);
        
        return paths;
    }
};