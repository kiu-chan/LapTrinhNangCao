string toLower (string s)
{
    int n=s.size();
   for(int i = 0; i <= n; i++)
   {
      if(s[i] >= 65 && s[i] <= 90)
         s[i]=s[i]+32;
   }
   return s;
}