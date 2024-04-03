#include <stdio.h>

int main() {
    int cezaHizi = 100, hiz,surucuPuani;
    printf("Hiziniz: ");
    scanf("%d",&hiz);
    printf("Surucu Puani: ");
    scanf("%d",&surucuPuani);
    printf("\n");
    
    int ceza = (cezaHizi <= hiz) ? (hiz * 5) : 0;

    if(cezaHizi <= hiz)
        printf("Ceza yersiniz!\n");
    else if (surucuPuani <= 0) 
        printf("Surucu puaniniz bitti!\n");
    else
    {
        printf("Hiziniz normal!\n");
    }
    prinft("Ceza: %d\n",ceza);
    printf("Dikkatli olun!\n");

    return 0;

}