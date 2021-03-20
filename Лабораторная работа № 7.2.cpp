#include <iostream>
#include <type_traits>

using namespace std;

template <typename T>
 T min(const T& arg){
       return arg;
}

template<typename T, typename T2, typename... Args>

typename common_type<T, T2, Args...>::type min(const T& f, const T2& s, const Args&... args)
{
   return min(f < s ? f : s, args...);
}

int main()
{
   cout << min(10.1, 3.1, 7, 9.1, 6.1, 2, 9.1, 8, 3, 8, 10) << endl;
   cout << min(2, 5.0, 10.1, 0.1, 8, 12) << endl;
}
