class Solution {
public:
    double myPow(double x, int n) {    
      int middle = n /2;

      double result = pow(x, middle) * pow(x, middle);

        if(n % 2 > 0)
            result = result * pow(x, 1);
        if (n % 2 < 0)
            result = result * pow(x, -1);

    return result;
    }
};