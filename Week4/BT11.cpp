string pigLatin(string word)
{
    string st="";
    int n=word.size();
    if( word[0] =='u' or word[0] =='o' or word[0] =='i' or word[0] =='e' or word[0] =='a' ) 
        word += "way";
    else
        {
            st = word[0];
            word.erase( word.begin() + 0);
            word += st;
            word += "ay";
        }
        return word;
}