def solution(begin, target, words) :
    answer = 0
    queue = [begin]
    while True :
        temp = []
        for word1 in queue :
            if word1 == target : return answer
            for i in range(len(words)-1, -1, -1) :
                word2 = words[i]
                cnt = 0
                for a, b in zip(word1, word2) :
                    if a != b : cnt += 1
                if cnt  == 1 : temp.append(words.pop(i))
        if not temp : return 0
        queue = temp
        answer += 1
