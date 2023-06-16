int	ft_list_size(t_list *begin_list)
{
    if(begin_list == NULL)
        return NULL;
    else
        return(1 + ft_list_size(begin_list -> next));
}