class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size();
        int n2 = friends.size();
        unordered_map <int,int> um;
        for (int i=0;i<n2;i++) um[friends[i]]=1;
        vector <int> v;
        for (int i=0;i<n;i++) if(um[order[i]]==1) v.emplace_back(order[i]);
        return v;
    }
};