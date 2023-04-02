#include<stdio.h>
typedef struct node{
	char data;
	node*kiri;
	node*kanan;
};

node*akar=NULL;
addNode(node**akar,char isi){
	if((*akar)==NULL){
		node*baru;
		baru=new node;
		baru->data = isi;
		baru->kiri = NULL;
		baru->kanan = NULL;
		(*akar)=baru;
	}
}

preorder(node*akar){
	if(akar!=NULL){
		printf("%c",akar->data);
		preorder(akar->kiri);
		preorder(akar->kanan);
	}
}

inorder(node*akar){
	if(akar !=NULL){
	inorder(akar->kiri);
	printf("%c",akar->data);
	inorder(akar->kanan);
	}
	
}

postorder(node*akar){
	if(akar !=NULL){
		postorder(akar->kiri);
		postorder(akar->kanan);
		printf("%c", akar->data);
	}
}

main(){
	char abjad;
	printf("\n\n\tPOSISI DATA AWAL:\n\n");
	printf(" C A L V I N");
	addNode(&akar,abjad='C');
	addNode(&akar->kiri,abjad='A');
	addNode(&akar->kanan,abjad='L');
	addNode(&akar->kiri->kiri,abjad='V');
	addNode(&akar->kiri->kiri->kiri,abjad='I');
	addNode(&akar->kiri->kiri->kanan,abjad='N');

	printf("\nTampilan Preorder		: ");
	preorder(akar);
	printf("\nTampilan Inorder 		: ");
	inorder(akar);
	printf("\nTampilan Postorder		: ");
	postorder(akar);	
}



















































