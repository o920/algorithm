import heapq
def solution(jobs) :
    answer, endtime, L = 0, 0, len(jobs)
    jobs.sort()
    endtime = jobs[0][0]
    heap = []
    while True :
        if not heap and not jobs : break
        for i in jobs :
            if not jobs : break
            if i[0] > endtime : break
            else : 
                heapq.heappush(heap,(i[1],i[0]))
                del jobs[jobs.index(i)]

        while True :
            if not heap and not jobs : break
            if jobs :
                if jobs[0][0] <= endtime : break
                if not heap : 
                    endtime = jobs[0][0]
                    break
            if heap :
                job = heapq.heappop(heap)
                answer += job[0] + (endtime - job[1])
                endtime += job[0]
                
        
    return int(answer/L)
