#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool compare(pair<string,int> a, pair<string, int> b){
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> count;
    vector<pair<string,int>> v;
    
    for(int i =0;i<genres.size();i++) count[genres[i]] += plays[i];
    map<string, int>::iterator iter = count.begin();
    for(iter=count.begin();iter!=count.end();++iter) 
        v.push_back(make_pair(iter->first, iter->second));
    sort(v.begin(),v.end(), compare);
    for(int i =0;i<v.size();i++){
        int f=0, s=0,fn=0,sn=0;
        for(int j =0;j<genres.size();j++){
            if(genres[j]==v[i].first){
                if(plays[j]>f){
                    s=f;
                    sn=fn;
                    f=plays[j];
                    fn=j;
                }else if(plays[j] > s){
                    s= plays[j];
                    sn=j;
                }
            }
        }
        answer.push_back(fn);
        if(s>0) answer.push_back(sn);
    }
    return answer;
}
