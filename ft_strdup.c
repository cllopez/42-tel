char    *ft_strdup(const char *s){
    char *str;
    
    if (s == NULL)
        return NULL;
    str = (char *)malloc(strlen(s) + 1);
    if(!str)
        return NULL;
    strcpy(str,s);
    return (str);
}
