class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        queue<int> q1, q2;
        int size = q.size() / 2;

        for (int i = 0; i < size; i++) {
            q1.push(q.front());
            q.pop();
        }

        while (!q.empty()) {
            q2.push(q.front());
            q.pop();
        }


        queue<int> nq;
        for (int i = 0; i < size; i++) {
            nq.push(q1.front());
            q1.pop();

            nq.push(q2.front());
            q2.pop();
        }

        return nq;
    }
};
