//5532
#include <stdio.h>
int day(int req, int aval)
{
    int day = req / aval;
    if(req % aval != 0)
    {
        day++;
    }
    return day;
}
int main()
{
    int L; scanf("%d", &L);
    int Korean_req; scanf("%d", &Korean_req); 
    int Math_req; scanf("%d", &Math_req);
    int Korean_aval; scanf("%d", &Korean_aval);
    int Math_aval; scanf("%d", &Math_aval);
    

    day(Korean_req, Korean_aval) >= day(Math_req, Math_aval) 
    ? printf("%d\n", L - day(Korean_req, Korean_aval)) : printf("%d\n", L - day(Math_req, Math_aval));

}