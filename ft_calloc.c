void    *ft_calloc(size_t nmemb, size_t size){
    size_t  i;
    void    *ptr;
    
    ptr = (void *)malloc(nmemb * size);
    if (!ptr)
        return NULL;
    i = 0;
    while (i < nmemb * size){
        ((char *)ptr)[i] = 0;
        i++;
    }
    return (ptr);
}
