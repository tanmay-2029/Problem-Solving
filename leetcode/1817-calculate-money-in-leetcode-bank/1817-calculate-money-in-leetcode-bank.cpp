class Solution {
public:
    int totalMoney(int n) {
        int div=n/7;
        int sum=0;
        sum += 28*div + 7*(div-1)*div/2;
        int rem = n%7;
        sum += rem*(rem+1)/2 + div*rem; 
        return sum;
    }
};