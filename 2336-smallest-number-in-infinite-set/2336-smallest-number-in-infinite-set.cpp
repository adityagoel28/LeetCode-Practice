class SmallestInfiniteSet {
public:
    set<int> st;
    SmallestInfiniteSet() {
        st.clear();
        for(int i = 1; i <= 1000; i++){
            st.insert(i);
        }
    }
    
    int popSmallest() {
        int t = *st.begin();
        st.erase(st.begin());
        return t;
    }
    
    void addBack(int num) {
        st.insert(num);
    }
};

// The constraints say the numbers are between 1 and 1000 (inclusive) and there are at most 1000 operations. So we don't need to populate more than 1000.

// insert :- because of set property all element are in sorted order.
// popSmallest() :- in set first element is smallet element in all the element so we pop last first element.

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */