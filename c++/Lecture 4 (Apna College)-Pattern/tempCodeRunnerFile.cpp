নিচের অংশ
    for (row = n - 1; row >= 1; row--)
    {
        for (col = 1; col <= n - row; col++)
            cout << " ";

        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }