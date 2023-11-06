class SeatManager {

public:
set<int>st;

    int total = 0;
    SeatManager(int n) {
        total = n;
        for(int i=1;i<=n;i++) st.insert(i);
    }
    
    int reserve() {
       auto it = *st.begin();
       st.erase(st.begin());
       return it;
    }
    
    void unreserve(int seatNumber) {
        st.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */