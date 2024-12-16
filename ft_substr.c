char    *ft_substr(const char *source,unsigned int start, size_t len){
    size_t i;
    char *res;
    size_t srclen;
    
    if(!source)
        return NULL;
    
    res = (char *)malloc(len + 1);
    if (!res)
        return NULL;
    srclen = strlen(source);
    if(start >= srclen)
        return strdup("");
    i = 0;
    while(source[start + i] && i < len){
        res[i] = source[start + i];
        i++;
    }
    res[i] = '\0';
    return (res);
}
