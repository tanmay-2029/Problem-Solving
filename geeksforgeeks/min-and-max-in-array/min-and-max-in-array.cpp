class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector <int> v;
        sort(arr.begin(),arr.end());
        v.emplace_back(arr[0]);
        v.emplace_back(arr[arr.size()-1]);
        return v;
    }
};