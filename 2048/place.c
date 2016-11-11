void place(void)
{
    int counter,i,j;

    for(counter = 1;counter <= 1 + random(3,0);counter ++)
    {
        i = random(M, 13);
        j = random(M,i);

        if(cube[i][j] == 0)
        {
            cube[i][j] = 1;
        }
        else
        {
            counter --;
        }
    }

    return;
}
