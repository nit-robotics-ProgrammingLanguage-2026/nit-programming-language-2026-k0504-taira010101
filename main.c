#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    /* 0以上10未満、または12以上15未満を受け付ける。 */
    int is_accepted = (input >= 0 && input < 10) ||
                      (input >= 12 && input < 15);
    /* 受け付ける範囲ではOK、それ以外ではNGと表示する。 */
    if (is_accepted)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
