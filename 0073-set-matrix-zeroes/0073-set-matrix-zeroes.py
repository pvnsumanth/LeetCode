class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        ROWS = len(matrix)
        COLS = len(matrix[0])
        for r in range(ROWS):
            for c in range(COLS):
                if matrix[r][c] == 0:
                    for i in range(COLS):
                        matrix[r][i] = "*" if matrix[r][i] else 0
                    for i in range(ROWS):
                        matrix[i][c] = "*" if matrix[i][c] else 0


        for r in range(ROWS):
            for c in range(COLS):
                if matrix[r][c] == "*":
                    matrix[r][c] = 0
        