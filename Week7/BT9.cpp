void reverse(char *s) {
    char x;
    for (int i = 0; i < strlen(s)/2; i++)
    {
        x = s[i];
        s[i] = s[strlen(s)-i-1];
        s[strlen(s)-i-1] = x;
    }
}