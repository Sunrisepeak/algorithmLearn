#include <iostream>
using namespace std;
double inVariance()
{
    double x;
    double s1 = 0;
    double s2 = 0;
    double s3 = 0;
    double avg = 0;
    int n = 0;
    while(cin >> x)
    {
        n++;
        s2 += x;
        s1 += x*x;
    }
    avg = s2/n;
    s2 = 2*avg*s2;
    s3 = n*avg*avg;
    return (s1 - s2 + s3)/n;
}
int main() {
	cout << inVariance();
	return 0;
}