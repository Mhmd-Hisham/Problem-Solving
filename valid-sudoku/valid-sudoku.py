class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        n = len(board)
        m = len(board[0])

        def not_valid(values):
            values = ''.join(values).replace('.', '')
            return len(values)!=len(set(values))
            
        # validate rows
        for i in range(n):
            if not_valid(board[i]):
                return False

        # validate cols
        for col in zip(*board):
            if not_valid(col):
                return False
        
        # validate all 3x3 boxes 
        for i in range(0, n, 3):
            for j in range(0, m, 3):
                values = [board[x][y] for x in range(i, i+3) for y in range(j, j+3)]
                
                if not_valid(values):
                    return False
        
        return True
