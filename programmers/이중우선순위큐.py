import heapq
def solution(operations):
    queue = []
    for operation in operations :
        operator, operand = operation.split()
        operand = int(operand)
        if operator == 'I' : heapq.heappush(queue, operand)
        elif queue :
            if operand > 0 : queue.remove(max(queue))
            else : heapq.heappop(queue)
    if queue : return [max(queue),queue[0]]
    else : return [0, 0]
