#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

//�������
int GetDivision(int FirstNumber, int SecondNumber, int *Value)
{
    if (Value == NULL)
    {
        printf("Pointer ERROR!\n");
        return 3;
    }
    else
    {
        if (SecondNumber == 0)
        {
            printf("\nERROR!!! Division by zero is not possible, run the program again.\n");
            return 2;
        }
        else
        {
            *Value = FirstNumber / SecondNumber;
        }
    }
    return 0;
}

//��������
int GetSubtraction(int FirstNumber, int SecondNumber, int *Value)
{
    if (Value == NULL)
    {
        printf("Pointer ERROR!\n");
        return 3;
    }
    else
    {
        *Value = FirstNumber - SecondNumber;
    }
    return 0;
}

//���������
int GetMultiplication(int FirstNumber, int SecondNumber, int *Value)
{
    if (Value == NULL)
    {
        printf("Pointer ERROR!\n");
        return 3;
    }
    else
    {
        *Value = FirstNumber * SecondNumber;
    }
    return 0;
}

//�����
int GetAddition(int FirstNumber, int SecondNumber, int *Value)
{
    if (Value == NULL)
    {
        printf("Pointer ERROR!\n");
        return 3;
    }
    else
    {
        *Value = FirstNumber + SecondNumber;
    }
    return 0;
}

int main()
{
    int first;
    int second;
    int fun;
    int Result;
    int c;
    int Results;
    int Flag = 0;
    int FlagExit;
    int des;
    //���� ������� �����
    do
    {
        if (Flag == 0) //���� ��� ����������� ���� �� ��� �������� ������ ���������
        {
            Result = printf("Calculator App (by Dmitriy Minko)\n\nEnter first NUMBER: ");
            if (Result < 0)
            {
                printf("\nPrintf ERROR!\n");
                return 1;
            }
            Flag = 1;
        }
        else
        {
            Result = printf("\nInput data can only be NUMBERS!!!\nRetype first NUMBER: ");
            if (Result < 0)
            {
                printf("\nPrintf ERROR!\n");
                return 2;
            }
        }


        Results = scanf("%d", &first);
        if (Results != 1) while (((c = getchar()) != EOF) && (c != '\n'));

    }
    while (Results != 1);
    while (((c = getchar()) != EOF) && (c != '\n')); //�������� ��������, ������� ������� ����� �����

    //���� ������� �����
    Flag = 0; //��������� ����� ��� ������������� � ��������� ������ ����
    do
    {
        if (Flag == 0)  //���� ��� ����������� ���� �� ��� �������� ������ ���������
        {
            Result = printf("\nEnter second NUMBER: ");
            if (Result < 0)
            {
                printf("\nPrintf ERROR!\n");
                return 3;
            }
            Flag = 1;
        }
        else
        {
            Result = printf("\nInput data can only be NUMBERS!!!\nRetype second NUMBER: ");
            if (Result < 0)
            {
                printf("\nPrintf ERROR!\n");
                return 4;
            }
        }

        Results = scanf("%d", &second);
        if (Results != 1) while (((c = getchar()) != EOF) && (c != '\n'));

    }
    while (Results != 1);

    while (((c = getchar()) != EOF) && (c != '\n')); //�������� ��������, ������� ������� ����� �����

    //���������� � ���������
    Result = printf("\nFirst number = %d\n",first);
    if (Result < 0)
    {
        printf("\nPrintf ERROR!\n");
        return 5;
    }

    Result = printf("Second number = %d\n\n",second);
    if (Result < 0)
    {
        printf("\nPrintf ERROR!\n");
        return 6;
    }

    Result = printf("List of valid arithmetic operations:\n1) \"+\" - Addition\n2) \"-\" - Subtraction\n3) \"*\" - Multiplication\n4) \"/\" - Division\n\nEnter NUMBER of the operation you want to perform on numbers: ");
    if (Result < 0)
    {
        printf("\nPrintf ERROR!\n");
        return 7;
    }

    //���� ��������
    Flag = 0; //��������� ����� ��� ������������� � ��������� ������ ����
    do
    {
        FlagExit = 0;
        if ((Flag == 1) && (Results == 1))
        {
            Result = printf("\nYou can only enter numbers CORRESPONDING to arithmetic operations!!!\nRetype operation NUMBER: ");
            if (Result < 0)
            {
                printf("\nPrintf ERROR!\n");
                return 8;
            }
            while (((c = getchar()) != EOF) && (c != '\n')); //��� ��������� ������ ������ ���� ��������� � ������ ����� ������ � ������� ���������� ������� �����, � �����  ������ �������
        }
        Results = scanf("%d",&des);
        if (Results != 1)
        {
            while (((c = getchar()) != EOF) && (c != '\n'));

            Result = printf("\nInput data can only be NUMBERS!!!\nRetype operation NUMBER: ");
            if (Result < 0)
            {
                printf("\nPrintf ERROR!\n");
                return 9;
            }

        }

        if (des == 1)
        {
            Result = GetAddition(first,second,&fun);
            if (Result != 0)
            {
                printf("Addition ERROR!\n");
                return Result;
            }
            Result = printf("\n%d + %d = %d\n",first,second,fun);
            if (Result < 0)
            {
                printf("\nPrintf ERROR!\n");
                return 10;
            }
        }
        else if (des == 2)
        {
            Result = GetSubtraction(first,second,&fun);
            if (Result != 0)
            {
                printf("Subtraction ERROR!\n");
                return Result;
            }

            Result = printf("\n%d - %d = %d\n",first,second,fun);
            if (Result < 0)
            {
                printf("\nPrintf ERROR!\n");
                return 11;
            }

        }
        else if (des == 3)
        {
            Result = GetMultiplication(first,second,&fun);
            if (Result != 0)
            {
                printf("Multiplication ERROR!\n");
                return Result;
            }
            Result = printf("\n%d * %d = %d\n",first,second,fun);
            if (Result < 0)
            {
                printf("\nPrintf ERROR!\n");
                return 12;
            }
        }
        else if (des == 4)
        {
            Result = GetDivision(first,second,&fun);
            if (Result != 0)
            {
                printf("Division ERROR!\n");
                return Result;
            }

            Result = printf("\n%d / %d = %d\n",first,second,fun);
            if (Result < 0)
            {
                printf("\nPrintf ERROR!\n");
                return 13;
            }
        }
        else
        {
            FlagExit = 1;//Flag ��� �������� ���� �� �������������� ��������, ������������� ��������� �����
            Flag = 1;//Flag ��� �������� ��������� ���������
        }

    }
    while ((Results != 1)||(FlagExit != 0));

    return 0;
}
