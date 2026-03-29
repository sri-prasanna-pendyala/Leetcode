class EventManager {
public:
    priority_queue<pair<int,int>> pq;
    unordered_map<int,int> mp;
    EventManager(vector<vector<int>>& events) {
        for(int i=0;i<events.size();i++){
            mp[events[i][0]]=events[i][1];
            pq.push({events[i][1],-events[i][0]});
        }
    }
    
    void updatePriority(int eventId, int newPriority) {
        pq.push({newPriority, -eventId});
        mp[eventId]=newPriority;
    }
    
    int pollHighest() {
        while(pq.size()>0){
            auto high=pq.top();
            int num=-high.second;
            if(mp.find(num)!=mp.end()){
                if(high.first==mp[num]){
                    mp.erase(num);
                    pq.pop();
                    return num;
                }
            }
            pq.pop();
        }
        return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */