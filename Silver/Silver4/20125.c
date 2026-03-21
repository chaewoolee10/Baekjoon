//20125
#include <stdio.h>
#include <string.h>
typedef struct
{
    int x;
    int y;
}coordi;

coordi find_head(char board[][1005], int n);
int len_left_arm(char board[][1005], coordi heart);
int len_right_arm(char board[][1005], coordi heart);

int len_back(char board[][1005], coordi heart, int n);

int len_left_leg(char board[][1005], coordi heart, int n);
int len_right_leg(char board[][1005], coordi heart, int n);

int main()
{
    int n; scanf("%d", &n);
    char board[1005][1005] = {};
    int body_len[5] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", board[i]);
    }
    
    coordi head, heart;
    head = find_head(board, n);
    heart.x = head.x;
    heart.y = head.y + 1;
    
    body_len[0] = len_left_arm(board, heart);
    body_len[1] = len_right_arm(board, heart);
    body_len[2] = len_back(board, heart, n);
    body_len[3] = len_left_leg(board, heart, n);
    body_len[4] = len_right_leg(board, heart, n);
    
    printf("%d %d\n", heart.y + 1, heart.x + 1);
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", body_len[i]);
    }
    
}
coordi find_head(char board[][1005], int n)
{
    coordi head;
    int x = 0;
    int y = 0;
    while (1)
    {
        if(board[y][x] == '*')
        {
            head.x = x;
            head.y = y;
            break;
        }
        if(x > n)
        {
            x = 0;
            y++;
        }
        else
        {
            x++;
        }
    }
    return head;
}
int len_left_arm(char board[][1005], coordi heart)
{
    int len = 0;
    while(1)
    {
        heart.x--;
        if(board[heart.y][heart.x] == '_' || heart.x < 0) return len;
        len++;
    }
}
int len_right_arm(char board[][1005], coordi heart)
{
    int len = 0;
    int boardlen = strlen(board[heart.y]);
    while(1)
    {
        heart.x++;
        if(board[heart.y][heart.x] == '_' || heart.x == boardlen) return len;
        len++;
    }
}
int len_back(char board[][1005], coordi heart, int n)
{
    int len = 0;
    while(1)
    {
        heart.y++;
        if(board[heart.y][heart.x] == '_' || heart.y >= n) return len;
        len++;
    }
}

int len_left_leg(char board[][1005], coordi heart, int n)
{
    heart.y += len_back(board, heart, n);
    heart.x -= 1;
    return len_back(board, heart, n);
    
}
int len_right_leg(char board[][1005], coordi heart, int n)
{
    heart.y += len_back(board, heart, n);
    heart.x += 1;
    return len_back(board, heart, n);
}