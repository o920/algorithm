import heapq
def solution(scovilles, K):
    heapq.heapify(scovilles)
    answer = 0
    while True :
        if scovilles[0] >= K : return answer
        if len(scovilles) < 2 : return -1
        a,b = heapq.heappop(scovilles), heapq.heappop(scovilles)
        heapq.heappush(scovilles, a+b*2)
        answer += 1
