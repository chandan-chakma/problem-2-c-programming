


/*practice1:. একটা প্র োগ্রাম লি খ যে টা একটা আয়তক্ষে ত্রে র দৈ র্ঘ্য আর প্রস্থ ইনপুট নি বে আর তারপর টার
     ক্ষে ত্রফল আর পরি সীমা বে র করে দি বে ।
Example:
Enter height of rectangle: 10
Enter width of rectangle: 30
Area is 300
Perimeter is 80
*/

#include<stdio.h>
int main(){

    int width;
    int height;
    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    printf("Enter height of rectangle: ");
    scanf("%d", &height);

    int area = width * height;

    int perimeter = 2 * (width + height);

    printf("Area = %d\n",area);
    printf("Perimeter = %d", perimeter);

    return 0;
}
