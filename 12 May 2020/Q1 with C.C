using namespace std;

main()
{
 int arr[20];
 int n, i, ele, found=0;
 system.cls();

 printf("\nEnter the size of the array:");
 scanf("%d", &n);

 printf("\nEnter the elements in the array:");
 for (i=0; i<n; i++)
 {
   scanf("%d", &arr[n]);
 }

 printf("\nEnter the element to search:");
 scanf("%d", &ele);

 for( i=0; i<n; i++)
 {
   if( arr[n] == ele)
   {
    found++;
   }
 }
 if(found)
 {

  printf("Found");
 }
 else
 {
  printf("Not Found");
 }
 getch();
}


