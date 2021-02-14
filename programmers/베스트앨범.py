from collections import defaultdict

def solution(genres, plays):
    play_count_by_genre = defaultdict(int)
    songs_in_genre = defaultdict(list)
    
    for song_id, genre, play in zip(counter(), genres, plays) :
        play_count_by_genre[genre] += play
        songs_in_genre[genre].append((-play, song_id))
        
    genre_in_order = sorted(play_count_by_genre.keys(), key = lambda g:play_count_by_genre[g], reverse=True)
    
    answer = []
    for genre in genre_in_order :
        answer.extend([song_id for minus_play, song_id in sorted(songs_in_genre[genre])[:2]])

    return answer

def counter() :
    i = 0
    while True :
        yield i
        i+=1
