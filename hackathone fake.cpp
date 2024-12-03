#include<stdio.h>
int main(){
	int arr[100];
	int n,choice;
	do{
		printf("\n  MENU");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("1. nhap so phan tu can nhap va gia tri cho cac phan tu\n");
		printf("2. in ra gia tri cac phan tu dang quan ly\n");	
		printf("3. in ra gia tri lon nhat cua mang\n");
		printf("4. in ra cac phan tu la so nguyen to trong mang\n");
		printf("5. them 1 phan tu vao trong mang \n");
		printf("6. xoa mot phan tu trong mang \n");
		printf("7. sap xep mang theo thu tu tang dan\n");
		printf("8. timf kiem phan tu va in ra vi tri phan tu do\n");
		printf("9 thoat\n");
		printf("lua chon cua ban:");
		scanf("%d",&choice);
		switch (choice){
			case 1: {
	            printf("nhap so phan tu");
	            scanf("%d",&n);
	            for(int i=0;i<n;i++){
		            printf("nhap phan tu thu %d:",i+1);
		            scanf("%d",&arr[i]);
	                }
				break;
			}
			case 2: {
				printf("\ncac phan tu trong mang la: ");
	            for(int i=0;i<n;i++){
		        printf("%d ",arr[i]);
	            }
				break;
			}
			case 3: {
				int max=arr[0];
	            for(int i=0;i<n;i++){
		            if(arr[i]>max){
			            max = arr[i];
		            }
	            }
	            printf("\ngia tri phan tu lon nhat cua mang la:%d",max);
				break;
			}
			case 4: {
				printf("\n so nguyen to trong mang la:");
	            for(int i=0;i<n;i++){
		            int songuyento = 1;
		            if(arr[i]<2){
			            songuyento=0;
		            }
		            else{
			            for(int j=2;j*j<=arr[i];j++){
				            if(arr[i]%j==0){
					        songuyento=0;
					        break;
				            }
			            }
		            }
		            if(songuyento==1){
			            printf("%d ",arr[i]);
		                }
	            }
				break;
			}
			case 5: {
				int position;
                do{
    	            printf("\nnhap vitri can them phan tu:");
	                scanf("%d",&position);
	                if(position<=0||position>n+1){
	    	            printf("khong hop le vui long nhap lai");
	          	    }
	            }while(position<=0||position>n+1);
              	for(int i=n;i>position-1;i--){
		            arr[i]=arr[i-1];
	            }
	            printf("\nnhap gia tri phan tu can them:");
	            scanf("%d",&arr[position-1]);
	            n++;
				break;
			}
			case 6: {
				int position;
                do{
	                printf("\nnhap vi tri phan tu can xoa");
	                scanf("%d",&position);
	                if(position<=0||position>n){
	    	            printf("khong hop le vui long nhap lai");
	                }
                }while(position<=0 || position>n);
                for(int i=position-1;i<n;i++){
    	            arr[i]=arr[i+1];
	            }
	            n--;
				break;
			}
			case 7: {
				for(int i=0;i<n-1;i++){
		            for(int j=0;j<n-1-i;j++){
			            if(arr[j]>arr[j+1]){
				        int temp=arr[j];
				            arr[j]=arr[j+1];
				            arr[j+1]=temp;
			            }
		            }
	            }
	            printf("\ncac phan tu sap xep theo thu tu tang dan: ");
	            for(int i=0;i<n;i++){
		            printf("%d ",arr[i]);
	            }
				break;
			}
			case 8:{
				int search, tontai;
	            printf("\nnhap phan tu can tim kiem: ");
	            scanf("%d",&search);
	            tontai=0;
	            printf("\nPhan tu can tim o vi tri thu: ");
	            for(int i=0;i<n;i++){
		            if(arr[i]==search){
			        printf("%d ",i+1);
			        tontai=1;	
		            }
	            }
	            if(tontai==0){
		            printf("phan tu khong ton tai");
	            }
				break;
			}
			case 9: {
                return 0;
				break;
			}
			default:
                printf("Lua chon khong hop le\n");
			
		}
	
	}while(choice!=9);
return 0;
}
