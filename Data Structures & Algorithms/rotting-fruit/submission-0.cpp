class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q;
        int fresh = 0;

        // Put all rotten oranges into the queue
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                }
                else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        int minutes = 0;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {
            int size = q.size();
            bool rotted = false;

            for (int k = 0; k < size; k++) {
                pair<int, int> curr = q.front();
                q.pop();

                for (int i = 0; i < 4; i++) {
                    int nr = curr.first + dr[i];
                    int nc = curr.second + dc[i];

                    if (nr >= 0 && nr < m &&
                        nc >= 0 && nc < n &&
                        grid[nr][nc] == 1) {

                        grid[nr][nc] = 2;
                        fresh--;
                        q.push({nr, nc});
                        rotted = true;
                    }
                }
            }

            if (rotted) {
                minutes++;
            }
        }

        if (fresh > 0)
            return -1;

        return minutes;
    }
};