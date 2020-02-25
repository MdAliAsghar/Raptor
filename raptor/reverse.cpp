#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? n;
   ?? r;
   ?? rev;

   raptor_prompt_variable_zzyz ="enter the no";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n;
   rev =0;
   while (!(n==0))
   {
      r =n % 10;
      rev =rev*10+r;
      n =floor(n/10);
   }
   cout << rev << endl;
   return 0;
}
