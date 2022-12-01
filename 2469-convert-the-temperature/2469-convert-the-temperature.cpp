class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans(2);
        double kelvin = celsius + 273.15, fahrenheit = celsius * 1.80 + 32.00;
        ans[0] = kelvin;
        ans[1] = fahrenheit;
        return ans;
    }
};