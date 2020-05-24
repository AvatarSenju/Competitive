def solution(map):
    # Your code here
    h=len(map)
    w=len(map[0])
    dp=[[[1000,False] for j in range(w)] for i in range(h)]
    dp[0][0]=[1,False]
    # for i in range(h):
    #     for j in range(w):
    #         print dp[i][j],"\t",
    #     print
    # print
    for i in range(h):
        for j in range(w):
            if i==0 and j==0:
                continue
            
            # print i,j
            if map[i][j]==1:
                u=1000
                l=1000
                r=1000
                d=1000
                dp[i][j][1]=True

                if i>0 and dp[i-1][j][1]==False:
                    u=dp[i-1][j][0]
                    # print u,i,j
                else:
                    u=1000

                if j<w-1 and dp[i][j+1][1]==False: 
                
                    r=dp[i][j+1][0]
                else:
                    r=1000
                if i<h-1 and dp[i+1][j][1]==False:
                    d=dp[i+1][j][0]
                else:
                    d=1000
                if j>0 and dp[i][j-1][1]==False: 
                
                    l=dp[i][j-1][0]
                else:
                    l=1000
                
                # print u,d,r,l," ",i,j
                dp[i][j][0]=(min([u,l,r,d,dp[i][j][0]]))+1
                # print(dp[i][j][0])
            else:
                u=[1000,False]
                l=[1000,False]
                r=[1000,False]
                d=[1000,False]
                if i>0:
                    u=dp[i-1][j]
                if j>0: 
                    l=dp[i][j-1]
                if i<h-1:
                    d=dp[i+1][j]
                if j<w-1: 
                    r=dp[i][j+1]
                
                a=[u,d,r,l,dp[i][j]]
                # print a ,i,j
                a.sort()
                # print a, a[0],i,j
                # dp[i][j]=a[0]
                dp[i][j][0]=a[0][0]+1
                dp[i][j][1]=a[0][1]
                # print dp[i]



    for i in range(h):
        for j in range(w-1,-1,-1):
            if i==0 and j==0:
                continue
            
            # print i,j
            if map[i][j]==1:
                u=1000
                l=1000
                r=1000
                d=1000
                dp[i][j][1]=True

                if i>0 and dp[i-1][j][1]==False:
                    u=dp[i-1][j][0]
                    # print u,i,j
                else:
                    u=1000

                if j<w-1 and dp[i][j+1][1]==False: 
                
                    r=dp[i][j+1][0]
                else:
                    r=1000
                if i<h-1 and dp[i+1][j][1]==False:
                    d=dp[i+1][j][0]
                else:
                    d=1000
                if j>0 and dp[i][j-1][1]==False: 
                
                    l=dp[i][j-1][0]
                else:
                    l=1000
                
                # print u,d,r,l," ",i,j
                dp[i][j][0]=(min([u,l,r,d,dp[i][j][0]]))+1
                # print(dp[i][j][0])
            else:
                u=[1000,False]
                l=[1000,False]
                r=[1000,False]
                d=[1000,False]
                if i>0:
                    u=dp[i-1][j]
                if j>0: 
                    l=dp[i][j-1]
                if i<h-1:
                    d=dp[i+1][j]
                if j<w-1: 
                    r=dp[i][j+1]
                
                a=[u,d,r,l,dp[i][j]]
                # print a ,i,j
                a.sort()
                # print a, a[0],i,j
                # dp[i][j]=a[0]
                dp[i][j][0]=a[0][0]+1
                dp[i][j][1]=a[0][1]
                # print dp[i]

    for i in range(h):
        for j in range(w):
            print dp[i][j],"\t",
        print
                
    return dp[h-1][w-1][0]      
                    

# mp=[[0, 0, 0, 0, 0, 0], [1, 1, 1, 1, 1, 0], [0, 0, 0, 0, 0, 0], [0, 1, 1, 1, 1, 1], [0, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0]]
# mp=[[0,1,1],[1,0]]
# mp=[[0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]]

# mp=[[0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#               [1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0],
#               [1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#               [1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
#               [1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0],
#               [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#               [1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0],
#               [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#               [0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
#               [0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
#               [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#               [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0],
#               [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#               [0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1],
#               [0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1],
#               [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#               [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0],
#               [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
#               [0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0],
#               [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]]

mp=[[0, 0, 0, 0, 0, 0],[1, 1, 1, 1, 1, 0],[1, 1, 1, 1, 1, 1],[0, 0, 0, 0, 0, 0],[0, 1, 1, 1, 1, 1],[0, 0, 0, 0, 0, 0]] 
for i in range(len(mp)):
        for j in range(len(mp[0])):
            print mp[i][j],"\t",
        print
print "\n"
h=len(mp)
w=len(mp[0])
# dp=[[[1000,False] for j in range(w)] for i in range(h)]
# solution(mp,dp)
print solution(mp)







# def solution(maze):

#   if len(maze) < 2 or len(maze) > 20 or len(maze[0]) < 2 or len(maze[0]) > 20:
#     return 0  
#   map_start = bfs(maze, [0,0])
#   map_end  = bfs(maze, [len(maze)-1, len(maze[0])-1])
#   ones = getOnes(maze)
  

  
#   min = 1000 * 1000 * 1000
#   for one in ones:
#     adj1 = getAdj(one, map_start)
#     adj2 = getAdj(one, map_end)
#     if not adj1 or not adj2:
#       continue    
#     sum = adj1 + adj2 + 1
#     if sum < min:
#       min = sum
  
#   # x = map_start[nodeToString([len(maze)-1, len(maze[0])-1])] if nodeToString([len(maze)-1, len(maze[0])-1]) in map_start else 0
#   return min

# def getAdj(one, map):
#   l = []
#   node = stringtoNode(one)
#   x = node[0]
#   y = node[1]
#   a = nodeToString([x+1, y])
#   b = nodeToString([x-1, y])
#   c = nodeToString([x, y+1])
#   d = nodeToString([x, y-1])

#   if a in map:
#     l.append(map[a])
#   if b in map:
#     l.append(map[b])
#   if c in map:
#     l.append(map[c])
#   if d in map:
#     l.append(map[d])
#   if len(l) == 0:
#       return None
#   else:
#     return min(l)
  
  

# def getOnes(maze):
#   l = []
#   for x in range(0,len(maze)):
#     for y in range(0,len(maze[0])):
#     #   print x
#     #   print y
#       if maze[x][y] == 1:
#         l.append(nodeToString([x, y]))
#   return l

# def bfs(maze, first):
  
#   queue = []
#   dict = {}
#   queue.append(first)
#   dict[nodeToString(first)] = 1
  
#   while len(queue) > 0:
    
#     current = queue.pop(0)
#     # print current
    
#     # add valid nodes to queue
#     for neighbor in getNeighbors(current, maze):
#       if neighbor[0] < 0 or neighbor[0] > len(maze)-1 or neighbor[1] < 0 or neighbor[1] > len(maze[0])-1:
#         pass
#       else:
#         if maze[neighbor[0]][neighbor[1]] == 0 and nodeToString(neighbor) not in dict:
#           queue.append(neighbor)
#           dict[nodeToString(neighbor)] = dict[nodeToString(current)] + 1
#         else:
#           pass
#   return dict

# def stringtoNode(s):
#   a = s.split('-')
#   return[int(a[0]), int(a[1])]

# def nodeToString(node):
#     test = str(node[0]) + '-' + str(node[1])
#     return test

# def getNeighbors(current, maze):
#   x = current[0]
#   y = current[1]
#   neighbors = []
  
#   neighbors.append([x+1,y])
#   neighbors.append([x,y+1])
#   neighbors.append([x-1,y])
#   neighbors.append([x,y-1])
  
#   return neighbors
  