class LRUCache {
public:
    unordered_map <int,list<pair<int,int>>::iterator> CacheMap;
    list<pair<int, int>> cacheList;
    int size; 
    int map_capacity; 
    LRUCache(int capacity) {
        size=0;
        map_capacity= capacity;
    }
    
    int get(int key) {
        if(CacheMap.count(key)){
            cacheList.splice(cacheList.begin(),cacheList,CacheMap[key]);
            return CacheMap[key]->second;
        }
        return -1;
    }
    
    void put(int key, int value) {
        // if the pair already exists, move it to the front and update the value
        if(CacheMap.count(key)){
            cacheList.splice(cacheList.begin(),cacheList,CacheMap[key]);
            CacheMap[key]->second = value; //update the value of given key
            // CacheMap[key] = cacheList.begin(); 
        }
        // if list is not full, add key:val pair to the front
        else if (size<map_capacity){
            cacheList.push_front(pair<int,int> {key,value});
            CacheMap[key] = cacheList.begin();
            size++;
        }
        //if list is full, add new pair to the front, remove the pair from the end of list.
        else{
            CacheMap.erase(cacheList.back().first); 
            cacheList.pop_back();
            cacheList.push_front(pair<int,int> {key,value});
            CacheMap[key] = cacheList.begin();

        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
