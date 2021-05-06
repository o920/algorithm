def solution(nums):
    answer = int(len(nums) / 2)
    s = set(nums)
    if len(s) < answer : answer = len(s)
    return answer
