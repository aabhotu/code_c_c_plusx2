for (int i = 0; i <= n; i++)
    {
        if (sqrt((float)arr[i]) == (int)sqrt((float)arr[i]))
        {
            dem1++;
            printf("%d ", arr[i]);
        }
    }
    printf("%d ", dem1);