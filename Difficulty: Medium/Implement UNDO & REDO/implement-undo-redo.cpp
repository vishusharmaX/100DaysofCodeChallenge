class Solution {
  public:
    string org , unstr;
    void append(char x) {
        // append x into document
        org.push_back(x);
    }

    void undo() {
        // undo last change
        if (org.empty()) return;

        char ch = org.back();
        org.pop_back();      
        unstr.push_back(ch);
    }

    void redo() {
         if (unstr.empty()) return;

        char ch = unstr.back(); 
        unstr.pop_back();      
        org.push_back(ch);      
    }

    string read() {
        // read the document
        return org;
    }
};