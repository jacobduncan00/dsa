class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        # Input validation
        if not grid:
            return 0

        rows, cols = len(grid), len(grid[0])
        visited = set()
        islands = 0

        # Iterative so we need data structure
        def bfs(r, c):
            q = collections.deque()
            # We visited the cell
            visited.add(r, c)
            q.append((r, c))

            while q:
                row, col = q.popleft()
                directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]

                for dr, dc in directions:
                    r, c = row + dr, col + dc
                    if r in range(rows) and c in range(cols) and grid[r][c] == "1" and (r, c) not in visited:
                        q.append((r, c))
                        visited.append((r, c))

        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == "1" and grid[r][c] not in visited:
                    # Run BFS on cell
                    bfs(r, c)
                    islands += 1
        return islands
