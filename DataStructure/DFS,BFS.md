# DFS

### 깊이 우선 탐색, 그래프에서 깊은 부분을 우선적으로 탐색하는 알고리즘
### 스택 자료구조 또는 재귀함수를 이용함
* 탐색 시작 노드를 스택에 삽입하고 방문 처리를 함
* 스택의 최상단 노드에 방문하지 않은 인접한 노드가 하나라도 있으면 그 노드를 스택에 넣고 방문 처리. <br> 방문하지 않은 인접 노드가 없으면 스택에서 최상단 노드를 꺼냄.
* 더 이상 두번째 과정을 수행할 수 없을 때까지 반복

```python
def dfs(graph, b, visited) :
  visited[v] = True
  print(v, end='')
  
  for i in graph[v] :
    if not visited[i] :
      dfs(graph, i, visited)
```      

<br><br>

# BFS

### 너비 우선 탐색, 가까운 노드부터 우선적으로 탐색하는 알고리즘
### 큐 자료구조를 이용함
* 탐색 시작 노드를 큐에 삽입하고 방문 처리를 함
* 큐에서 노드를 꺼낸 뒤 해당 노드의 인접 노드 중 방문하지 않은 노드를 모두 큐에 삽입하고 방문 처리
* 더 이상 두번째 과정을 수행할 수 없을 때까지 반복

```python
from collections import deque

def bfs(graph, start, visited) :
  queue = deque([start])
  visited[start] = True
  while queue :
    v = queue.popleft()
    print(v, end='')
    for i in graph[v] :
      if not visited[i] :
        queue.append(i)
        visited[i] = True
```

