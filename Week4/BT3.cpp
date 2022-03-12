void right(std::string s, int n)
{
    for (int i = 0;i < n*2-1; i++)
        {
            if(i < n)
                {
                std::cout << s << std::endl;
                if (i != n-1)
                    {
                    s.erase(s.size()-1, 1);
                    s = "  " + s;
                    }
                }
            else
                {
                    s.erase(0,2);
                    s = s + '*';
                    std::cout << s << std::endl;
                }
        }
}
void lefttrue(std::string s, int n)
{
    for (int i = 0; i < n-1; i++)
        s = ' ' + s;
    for (int i = 0; i < 2*n-1; i++)
    {
        if (i < n)
        {
            std::cout << s << std::endl;
            if (i != n-1)
            {
                s.erase(s.size()-1, 1);
                s.erase(0, 1);
            }
        }
        else
        {
            s = ' ' + s + '*';
            std::cout << s << std::endl;
        }
    }
}
void printArrow(int n, bool left)
{
    std::string s;
    for (int i = 0;i < n; i++)
        s = s + '*';
    std::string x = s;
    if (!left)
        right(s, n);
    else
        lefttrue(s, n);

}