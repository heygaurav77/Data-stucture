
// // Interleave the First Half of the Queue with Second Half
// Difficulty: Medium
// You are given a queue Q of N integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.

 

// Example 1:

// Input:
// N = 4
// Q = {2,4,3,1}
// Output:
// {2,3,4,1}
// Explanation:
// After the mentioned rearrangement of the first half
// and second half, our final queue will be {2,3,4,1}.
 

// Example 2:

// Input:
// N = 2
// Q = {3,5}
// Output:
// {3,5}
// Explanation:
// After the mentioned rearrangement of the first half
// and second half, our final queue will be {3,5}.


class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q1){
       vector<int> ans;
       queue<int> q2;
       
       int n = q1.size();
       int half = n/2;
       
       while(half--){
           int element = q1.front();
           q1.pop();
           
           q2.push(element);
       }
       
       //fisrt half -> q2
       // second half -> q1
       int size = q1.size();
       while(!q1.empty()) {
       ans.push_back(q2.front());
       q2.pop();
       ans.push_back(q1.front());
       q1.pop();
       }
       return ans;
       
    }
};