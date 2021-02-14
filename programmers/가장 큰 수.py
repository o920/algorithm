def solution(numbers):
    answer = []
    for num in numbers :
        answer.append(str(num))
    answer.sort(reverse = True, key= lambda x :x*3)
    return str(int("".join(answer)))
