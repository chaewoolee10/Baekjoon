//4344
#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);  // 테스트 케이스 수
    
    double arr[1000];
    for(int i = 0; i < 1000; i++) // 배열 초기화
    {
      arr[i] = 0;
    }
    
    for(int i = 0; i < n; i++)
    {
      double student_num; scanf("%lf", &student_num); // 학생수
      double avg = 0; // 학생 성적 평균
      double stu_cnt = 0; //평균을 넘은 학생 수 카운트

      for(int j = 0; j < student_num; j++)
      {
        scanf("%lf", &arr[j]);  // 학생 성적 입력받기
        avg += arr[j];  // 평균에 학생 성적 더하기
      }
      avg /= student_num; // 평균 = 학생 성적 합 / 학생 수
      
      for(int j = 0; j < student_num; j++)
      {
        if(arr[j] > avg)
        {
          stu_cnt++;
        }
      }
      printf("%.3lf%%\n", stu_cnt/student_num*100);
      
    }
}