/* Print N
            *     *
            * *   *
            *   * *
            *     *    */

    #include<stdio.h>
    #include<conio.h>

    int main()
    {
        int R=0,C=0,Num=0;

        printf("Enter A Number :");
        scanf("%d",&Num);

        for(R =1; R<=Num; R++)
        {
            for(C =0; C<=Num; C++)
            {
                if( C== 1 || R == C || C == Num)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
                printf("\n");
            }

            getch();
            return 0;
        }
