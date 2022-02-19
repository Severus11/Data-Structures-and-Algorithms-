
# This is an BFS implementation for a 2D array in python                                                                    ^    
# The input will be a 2D array [[1,2,3,4],[5,6,7,8],[9,10,11,12]]                                                           |
# The output will be a 1D array.                                                                                        <------->    
# The traversal will be in order : up right down left: expand from the centre element in a diamond direction                |
# The algorithm will be implemented recursively                                                                             v    
from collections import deque

q = deque()
q.append([0,0])
input_array = [[1, 2, 3],[4,5,6],[7,8,9]]
directions =[[-1, 0], [0, 1], [1, 0], [0, -1]]

def bfs(arr, seen, output_list,q):
    while q:
        curr = q[0]
        q.popleft()
        r = curr[0]
        c = curr[1]
        

        if r>=0 and c>=0 and r<len(arr) and c<len(arr[0]) and not seen[r][c]:
            seen[r][c] = True
            output_list.append(arr[r][c])
        
            for i in directions:
                Rdir = i[0]
                Cdir = i[1]
                q.append([r+Rdir, c+Cdir])

def main():
    
    seen = [[False for i in range(3)] for j in range(3)]
    op =[]
    bfs(input_array, seen,output_list=op,q=q)
    print(op)

if __name__=="__main__":
    main()
