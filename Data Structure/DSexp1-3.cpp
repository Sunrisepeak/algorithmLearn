#include<iostream>
#include<cmath>
#include<ctime>
bool Isprime_method1(int n)     
{
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return false;
    return true;
}
bool Isprime_method2(int n)
{
    for(int i = 2; i <= sqrt(n); i++)   //opitimize by sqrt() function
        if(n % i == 0)
            return false;
    return true;
}
void ptime(clock_t begin, clock_t end)
{
    std::cout << "test case of time is " << (end - begin) * 1.0 /CLOCKS_PER_SEC
              << std::endl;
}
int prime_count(int n, bool f(int n))
{
    int ans = 0;
    for(int i = 1; i <= n; i++)
        if(f(i))
            ans++;
    return ans;
}
int main()
{
    int n;
    clock_t begin, end;
    std::cin >> n;
    begin = clock();
    std::cout << "1.The number of prime Number is " 
              << prime_count(n,Isprime_method1)
              << std::endl;
    end = clock();
    ptime(begin, end);
    begin = clock();
    std::cout << "2.The number of prime Number is " 
              << prime_count(n,Isprime_method2)
              << std::endl;
    end = clock();
    ptime(begin, end);
    return 0;
}
