//Accepted
#include<stdio.h>
#include<iostream>
using namespace std;
#define SIZE 150


int main()
{
    int n, m, i, j;
    int MINE[SIZE][SIZE];
    char ch;

    int tot, testCase = 0;
    cin >> n >> m;
    while(1)
    {
        testCase++;
        if(n == 0 && m == 0)
            break;
        for(i = 0; i < SIZE; i++)
            for(j = 0; j < SIZE; j++)
                MINE[i][j] = 0;

        for(i = 0; i < n; i++)
            for(j=0; j < m; j++)
            {
                ch = getchar();
                if(ch == '*')
                    MINE[i][j] = 1;
                else if(ch == '.')
                    MINE[i][j] = 0;
                else
                    j--;

            }
        cout <<"Field #" << testCase << ":" << endl;

        for(i=0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(MINE[i][j] == 1)
                    cout <<'*';
                else
                {
                    tot = 0;
                    if(i-1 >=0 && j-1 >= 0)
                        tot += MINE[i-1][j-1];
                    if(i-1 >= 0 && j >= 0)
                        tot += MINE[i-1][j];
                    if(i-1 >= 0 && j+1 <= m)
                        tot += MINE[i-1][j+1];
                    if(i >= 0 && j-1 >= 0 )
                        tot += MINE[i][j-1];
                    if(i >=0 && j+1 <= m)
                        tot += MINE[i][j+1];
                    if(i+1 <=n && j-1 >=0)
                        tot += MINE[i+1][j-1];
                    if(i + 1 <=n && j >=0)
                        tot += MINE[i+1][j];
                    if(i + 1 <= n && j + 1 <= m)
                        tot +=MINE[i+1][j+1];
                    cout << tot;
                }
            }
            cout << endl;
        }
        cin >> n >> m;
        if(n!= 0 || m!= 0)
            cout << endl;

    }

}
