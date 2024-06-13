int main() {
int age;
printf("Enter age: ");
scanf("%d", &age);

   switch (age) {
      case 0 ... 12:
       printf(" generation alpha \n");
       break;
      case 44 ... 59:
       printf("generation x \n");
       break;
      case 34 ... 43:
       printf("generation Y \n");
       break;
      default:
       printf("Invalid generation \n");

   }



return 0;

}
