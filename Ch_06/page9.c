int main()
{
    int i, j;
	int *p;	/* pointer to `int' */
	i = 6;
	p = &i;	/* set `p' to address of `i' */
	j = *p;	/* set `j' to 6 (value of `i') */
	*p = 5;	/* set `i' to 5 */
	
	return 0;
}

