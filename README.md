"# Hamiltonian-Graph" 
This C++ program determines whether a Hamiltonian Cycle exists in a given graph using a backtracking approach. A Hamiltonian Cycle is a closed loop that visits each vertex of a graph exactly once and returns to the starting vertex.

The program performs the following:
1) Input Graphs: Two adjacency matrices are provided as test graphs.
2) Backtracking Algorithm:
- It recursively checks if vertices can be added to the cycle while satisfying adjacency and non-duplication constraints.
- If all vertices are visited and a cycle is formed, the solution is valid.
3) Output:
- If a Hamiltonian Cycle exists, the program prints the cycle path.
- If no cycle exists, it outputs a message indicating the absence of a solution.
Key Features:
1) Graph Representation: The graph is represented using an adjacency matrix.
2) Backtracking Implementation: Ensures all possible vertex permutations are considered.
3) Cycle Verification: Ensures the cycle starts and ends at the same vertex.
4) Test Cases: Demonstrates functionality with two example graphs.
