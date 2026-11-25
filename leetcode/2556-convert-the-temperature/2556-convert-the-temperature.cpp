class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector <double> v;
        v.emplace_back(celsius+273.15);
        v.emplace_back(celsius*1.80+32);
        return v;
    }
};