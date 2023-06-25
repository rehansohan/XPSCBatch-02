
int longestSubarrayWithSumK(std::vector<int> a, long long k)
{
  int i=0,j=0,ans=0;
  long long int s=0;
  while(j<a.size())
  {
   s+=a[j];
   if(s>k){

   while(s>k){

    s-=a[i];
    i++;
   }

   }
   if(s==k)
   {
    ans=max(ans,j-i+1);
   }
   j++;
  }

 return ans;
}
