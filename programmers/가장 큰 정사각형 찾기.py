def solution(board):
    m = 0 
    if board[0][0] : m = 1
    for i in range(1,len(board)) :
        for j in range(1,len(board[i])) :
            if board[i][j] :
                board[i][j] = min(board[i-1][j-1], board[i-1][j], board[i][j-1]) + 1
            if m < board[i][j] : m = board[i][j]

    return m*m
