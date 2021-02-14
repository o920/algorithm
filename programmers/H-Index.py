def solution(citations):
    citations.sort(reverse = True)
    answer = []
    for i, d in enumerate(citations, start=1) :
        answer.append(min(i,d))
    return max(answer)
