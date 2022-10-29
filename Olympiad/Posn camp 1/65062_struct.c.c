#include <stdio.h>
int main()
{
  int i,day[5],max=0;
  struct date {
    int day;
    int month;
    int year;
  };
  struct student {
    int std_id;
    char std_name[40];
    struct date std_birth;
    struct date std_checkin;
    int room;
  };

  typedef struct student STD;
  STD stdrecord[5] = { {10001, "Chris Hemsworth" ,11, 12, 2552, 3 ,5 ,2560, 4} ,
                       {10002, "Tom Cruise" ,3 ,4 ,2552 ,6 ,5 ,2555, 4},
                       {10003, "Taylor Swift" ,13 ,12, 2552, 1 ,5, 2560, 2},
                       {10004, "Hugh Grant", 9 ,9 ,2551, 1 ,5, 2560, 1},
                       {10005, "Kristen Stewart", 9 ,4, 2552 ,7 ,5 ,2560, 1} };

  for(i=0 ; i<5 ;i++)
  {
     day[i] = stdrecord[i].std_checkin.year*365 + stdrecord[i].std_checkin.month*30+stdrecord[i].std_checkin.day;
     if(day[i]>max)max=day[i];
  }
  for(i=0 ; i<5 ;i++)
  {
      if(max==day[i])
      {
          printf("Latest Student Enrolled : %s",stdrecord[i].std_name);
      }
  }
}
