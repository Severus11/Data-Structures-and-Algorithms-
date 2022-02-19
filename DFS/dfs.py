# This is an DFS implementation for a 2D array in python 
# The input will be a 2D array [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
# The output will be a 1D array.
# The traversal will be in order : up right down left in one direction as soon as element is seen
# The algorithm will be implemented recursively 


input_array = [[1, 2, 3],[4,5,6],[7,8,9]]
directions =[[-1, 0], [0, 1], [1, 0], [0, -1]]

def dfs(arr, seen, r,c, output_list):
  
    if(0<=r<len(arr) and 0<=c<len(arr[0])):
        if seen[r][c] == False:
            seen[r][c] = True
            print(seen)
            output_list.append(arr[r][c])
            for i in directions:
                dfs(arr,seen,r+i[0], c+i[1], output_list)

    

def main():
    output_list =[]

    seen = [[False for i in range(3)] for j in range(3)]
    print("first",seen)
    dfs(input_array,seen,0,0, output_list)
    print(output_list)
    print(seen)

if __name__ =="__main__":
    main()

