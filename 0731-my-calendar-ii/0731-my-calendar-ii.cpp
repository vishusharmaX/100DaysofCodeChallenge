class MyCalendarTwo {
public:
    vector<pair<int, int>> bookings;   // Store all booked intervals
    vector<pair<int, int>> overlaps;   // Store intervals where double booking occurs
    
    MyCalendarTwo() {
    }
    
    bool book(int start, int end) {
        for (const auto& overlap : overlaps) {
            int overlap_start = overlap.first;
            int overlap_end = overlap.second;
            if (start < overlap_end && end > overlap_start) {
                return false;
            }
        }
        
        for (const auto& booking : bookings) {
            int booking_start = booking.first;
            int booking_end = booking.second;
            if (start < booking_end && end > booking_start) {
                int new_overlap_start = max(start, booking_start);
                int new_overlap_end = min(end, booking_end);
                overlaps.push_back({new_overlap_start, new_overlap_end});
            }
        }
        
        bookings.push_back({start, end});
        return true;
    }
};