#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool differByOneChar(string s1, string s2) {
    int diffCount = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            diffCount++;
            if (diffCount > 1) {
                return false;
            }
        }
    }
    return diffCount == 1;
}

void dfs(unordered_map<int, vector<int>>& graph, int node, unordered_set<int>& visited) {
    visited.insert(node);
    for (int neighbor : graph[node]) {
        if (visited.find(neighbor) == visited.end()) {
            dfs(graph, neighbor, visited);
        }
    }
}

bool canRearrangeStrings(vector<string>& strings) {
    // Create graph
    unordered_map<int, vector<int>> graph;
    for (int i = 0; i < strings.size(); i++) {
        for (int j = i+1; j < strings.size(); j++) {
            if (differByOneChar(strings[i], strings[j])) {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }

    // Check if graph is connected
    unordered_set<int> visited;
    dfs(graph, 0, visited);
    return visited.size() == strings.size();
}

int main() {
    int a,b;
    cin>>a>>b;
    vector<string> strings;
    for(int i=0; i<a; i++)
    {
        string s;
        cin>>s;
        strings.emplace_back(s);
    }
    if (canRearrangeStrings(strings)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}