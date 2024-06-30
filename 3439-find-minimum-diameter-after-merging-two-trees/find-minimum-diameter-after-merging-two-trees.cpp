class Solution {
public:
    int minimumDiameterAfterMerge(vector<vector<int>>& treeEdges1, vector<vector<int>>& treeEdges2) {
        int treeSize1 = treeEdges1.size() + 1;
        int treeSize2 = treeEdges2.size() + 1;

        vector<vector<int>> adjList1(treeSize1);
        vector<vector<int>> adjList2(treeSize2);

        int idx = 0;
        while (idx < treeEdges1.size()) {
            adjList1[treeEdges1[idx][0]].push_back(treeEdges1[idx][1]);
            adjList1[treeEdges1[idx][1]].push_back(treeEdges1[idx][0]);
            idx++;
        }

        idx = 0;
        while (idx < treeEdges2.size()) {
            adjList2[treeEdges2[idx][0]].push_back(treeEdges2[idx][1]);
            adjList2[treeEdges2[idx][1]].push_back(treeEdges2[idx][0]);
            idx++;
        }

        auto dfs = [](const vector<vector<int>>& adjList, int startNode, int& farthestNode) {
            int totalNodes = adjList.size();
            vector<int> distances(totalNodes, -1);
            function<void(int, int)> dfsVisit = [&](int currentNode, int currentDistance) {
                distances[currentNode] = currentDistance;
                if (currentDistance > distances[farthestNode]) {
                    farthestNode = currentNode;
                }
                for (int neighbor : adjList[currentNode]) {
                    if (distances[neighbor] == -1) {
                        dfsVisit(neighbor, currentDistance + 1);
                    }
                }
            };
            farthestNode = startNode;
            dfsVisit(startNode, 0);
            return distances[farthestNode];
        };

        int farthestNode1 = 0;
        dfs(adjList1, 0, farthestNode1);
        int diameter1 = dfs(adjList1, farthestNode1, farthestNode1);

        int farthestNode2 = 0;
        dfs(adjList2, 0, farthestNode2);
        int diameter2 = dfs(adjList2, farthestNode2, farthestNode2);

        int minDiameter = max(diameter1, diameter2);
        int halfDiameter1 = (diameter1 + 1) / 2;
        int halfDiameter2 = (diameter2 + 1) / 2;
        minDiameter = max(minDiameter, halfDiameter1 + halfDiameter2 + 1);

        return minDiameter;
    }
};
