class RandomizedSet {
public:
     set<int>s;

     template<typename S>
auto select_random(const S &s, size_t n) {
  auto it = std::begin(s);
  // 'advance' the iterator n times
  std::advance(it,n);
  return it;
}
    RandomizedSet() {
  
    }
    
    bool insert(int val) {
        if(s.find(val)==s.end()){
        s.insert(val);
        return true;
        }
        else{
            return false;
        }
        
    }
    
    bool remove(int val) {
        if(s.find(val)!=s.end()){
            s.erase(val);
            return true;
        }
        else{
            return false;
        }
    }
    
    int getRandom() {
    
   
        auto it = rand()%s.size();
        auto x= *select_random(s, it);
        return x;
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */