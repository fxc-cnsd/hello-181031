//#include<stdio.h>
//
//
//int main() {
//int x=0,y=4;
//printf("%d",-10<x & y<0);
//	return 0;
//}








////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//#define KEYLENGTH 15                   /* �ؼ����ַ�������󳤶� */
//typedef char ElementType[KEYLENGTH+1]; /* �ؼ����������ַ��� */
//typedef int Index;                     /* ɢ�е�ַ���� */
///******** �����ǵ�����Ķ��� ********/
//typedef struct LNode *PtrToLNode;
//struct LNode {
//	ElementType Data;
//	PtrToLNode Next;
//};
//typedef PtrToLNode Position;
//typedef PtrToLNode List;
///******** �����ǵ�����Ķ��� ********/
//
//typedef struct TblNode *HashTable; /* ɢ�б����� */
//struct TblNode {
//	/* ɢ�б��㶨�� */
//	int TableSize; /* �����󳤶� */
//	List Heads;    /* ָ������ͷ�������� */
//};
//HashTable CreateTable( int TableSize ) {
//	HashTable H;
//	int i;
//	H = (HashTable)malloc(sizeof(struct TblNode));     /* ��֤ɢ�б���󳤶������������������5.3 */
//	H->TableSize = NextPrime(TableSize);     /* ���·�������ͷ������� */
//	H->Heads = (List)malloc(H->TableSize*sizeof(struct LNode));     /* ��ʼ����ͷ��� */
//	for( i=0; i<H->TableSize; i++ ) {
//		H->Heads[i].Data[0] = '\0';
//		H->Heads[i].Next = NULL;
//	}
//	return H;
//}
//Position Find( HashTable H, ElementType Key ) {
//	Position P;
//	Index Pos;
//	Pos = Hash( Key, H->TableSize ); /* ��ʼɢ��λ�� */
//	P = H->Heads[Pos].Next; /* �Ӹ�����ĵ�1����㿪ʼ */
//	/* ��δ����β������Keyδ�ҵ�ʱ */
//	while( P && strcmp(P->Data, Key) )
//		P = P->Next;
//	return P; /* ��ʱP����ָ���ҵ��Ľ�㣬����ΪNULL */
//}
//bool Insert( HashTable H, ElementType Key ) {
//	Position P, NewCell;
//	Index Pos;
//	P = Find( H, Key );
//	if ( !P ) {
//		/* �ؼ���δ�ҵ������Բ��� */
//		NewCell = (Position)malloc(sizeof(struct LNode));
//		strcpy(NewCell->Data, Key);
//		Pos = Hash( Key, H->TableSize ); /* ��ʼɢ��λ�� */
//		/* ��NewCell����ΪH->Heads[Pos]����ĵ�1����� */
//		NewCell->Next = H->Heads[Pos].Next;
//		H->Heads[Pos].Next = NewCell;
//		return true;
//	}     else {
//		/* �ؼ����Ѵ��� */
//		printf("��ֵ�Ѵ���");
//		return false;
//	}
//}
//void DestroyTable( HashTable H ) {
//	int i;
//	Position P, Tmp;          /* �ͷ�ÿ������Ľ�� */
//	for( i=0; i<H->TableSize; i++ ) {
//		P = H->Heads[i].Next;
//		while( P ) {
//			Tmp = P->Next;
//			free( P );
//			P = Tmp;
//		}
//	}
//	free( H->Heads ); /* �ͷ�ͷ������� */
//	free( H );        /* �ͷ�ɢ�б��� */
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Position Find( HashTable H, ElementType Key ) {
//	Position CurrentPos, NewPos;
//	int CNum = 0; /* ��¼��ͻ���� */
//	NewPos = CurrentPos = Hash( Key, H->TableSize ); /* ��ʼɢ��λ�� */
//	/* ����λ�õĵ�Ԫ�ǿգ����Ҳ���Ҫ�ҵ�Ԫ��ʱ��������ͻ */
//	while( H->Cells[NewPos].Info!=Empty && H->Cells[NewPos].Data!=Key ) {
//		/* �ַ������͵Ĺؼ�����Ҫ strcmp ����!! */
//		/* ͳ��1�γ�ͻ�����ж���ż�� */
//		if( ++CNum%2 ) {
//			/* �����γ�ͻ */
//			NewPos = CurrentPos + (CNum+1)*(CNum+1)/4; /* ����Ϊ+[(CNum+1)/2]^2 */
//			if ( NewPos >= H->TableSize )
//				NewPos = NewPos % H->TableSize; /* ����Ϊ�Ϸ���ַ */
//		}         else {
//			/* ż���γ�ͻ */
//			NewPos = CurrentPos - CNum*CNum/4; /* ����Ϊ-(CNum/2)^2 */
//			while( NewPos < 0 )
//				NewPos += H->TableSize; /* ����Ϊ�Ϸ���ַ */
//		}
//	}
//	return NewPos; /* ��ʱNewPos������Key��λ�ã�������һ���յ�Ԫ��λ�ã���ʾ�Ҳ�����*/
//}
//bool Insert( HashTable H, ElementType Key ) {
//	Position Pos = Find( H, Key ); /* �ȼ��Key�Ƿ��Ѿ����� */
//	if( H->Cells[Pos].Info != Legitimate ) {
//		/* ��������Ԫû�б�ռ��˵��Key���Բ����ڴ� */
//		H->Cells[Pos].Info = Legitimate;
//		H->Cells[Pos].Data = Key;         /*�ַ������͵Ĺؼ�����Ҫ strcpy ����!! */
//		return true;
//	}     else {
//		printf("��ֵ�Ѵ���");
//		return false;
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//#define MAXTABLESIZE 100000/* �����ٵ����ɢ�б��� */
//typedef int ElementType;/* �ؼ������������� */
//typedef int Index;/* ɢ�е�ַ���� */
//typedef Index Position;     /* ��������λ����ɢ�е�ַ��ͬһ���� */
///* ɢ�е�Ԫ״̬���ͣ��ֱ��Ӧ���кϷ�Ԫ�ء��յ�Ԫ������ɾ��Ԫ�� */
//typedef enum { Legitimate, Empty, Deleted } EntryType;
//typedef struct HashEntry Cell; /* ɢ�б�Ԫ���� */
//struct HashEntry {
//	ElementType Data; /* ���Ԫ�� */
//	EntryType Info;   /* ��Ԫ״̬ */
//};
//typedef struct TblNode *HashTable; /* ɢ�б����� */
//struct TblNode {	/* ɢ�б��㶨�� */
//	int TableSize; 	/* �����󳤶� */
//	Cell *Cells;   	/* ���ɢ�е�Ԫ���ݵ����� */
//};
//int NextPrime( int N ) {
//	/* ���ش���N�Ҳ�����MAXTABLESIZE����С���� */
//	int i, p = (N%2)? N+2 : N+1; /*�Ӵ���N����һ��������ʼ */
//	while( p <= MAXTABLESIZE ) {
//		for( i=(int)sqrt(p); i>2; i-- )
//			if ( !(p%i) ) break; /* p�������� */
//		if ( i==2 ) break; /* for����������˵��p������ */
//		else  p += 2; /* ������̽��һ������ */
//	}
//	return p;
//}
//HashTable CreateTable( int TableSize ) {
//	HashTable H;
//	int i;
//	H = (HashTable)malloc(sizeof(struct TblNode));     /* ��֤ɢ�б���󳤶������� */
//	H->TableSize = NextPrime(TableSize);     /* ������Ԫ���� */
//	H->Cells = (Cell *)malloc(H->TableSize*sizeof(Cell));     /* ��ʼ����Ԫ״̬Ϊ���յ�Ԫ�� */
//	for( i=0; i<H->TableSize; i++ )
//		H->Cells[i].Info = Empty;
//	return H;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* �������� - ��λ���� */
///* ����Ԫ�������MaxDigit���ؼ��֣�����ȫ��ͬ����Radix */
//#define MaxDigit 4 #define Radix 10 /* ͰԪ�ؽ�� */
//typedef struct Node *PtrToNode;
//struct Node {
//	int key;
//	PtrToNode next;
//}; /* Ͱͷ��� */
//struct HeadNode {
//	PtrToNode head, tail;
//};
//typedef struct HeadNode Bucket[Radix];
//int GetDigit ( int X, int D ) { /* Ĭ�ϴ�λD=1, ��λD<=MaxDigit */
//	int d, i;
//	for (i=1; i<=D; i++) {
//		d = X%Radix;
//		X /= Radix;
//	}
//	return d;
//}
//void MSD( ElementType A[], int L, int R, int D ) {
//	/* ���ĵݹ麯��: ��A[L]...A[R]�ĵ�Dλ���������� */
//	int Di, i, j;
//	Bucket B;
//	PtrToNode tmp, p, List = NULL;
//	if (D==0) return; /* �ݹ���ֹ���� */
//	for (i=0; i<Radix; i++) /* ��ʼ��ÿ��ͰΪ������ */
//		B[i].head = B[i].tail = NULL;
//	for (i=L; i<=R; i++) {
//		/* ��ԭʼ������������ʼ����List */
//		tmp = (PtrToNode)malloc(sizeof(struct Node));
//		tmp->key = A[i];
//		tmp->next = List;
//		List = tmp;
//	}      /* �����Ƿ���Ĺ��� */
//	p = List;
//	while (p) {
//		Di = GetDigit(p->key, D); /* ��õ�ǰԪ�صĵ�ǰλ���� */
//		/* ��List��ժ�� */
//		tmp = p;
//		p = p->next;          /* ����B[Di]��Ͱ */
//		if (B[Di].head == NULL)
//			B[Di].tail = tmp;
//		tmp->next = B[Di].head;
//		B[Di].head = tmp;
//	}      /* �������ռ��Ĺ��� */
//	i = j = L; /* i, j��¼��ǰҪ�����A[]�����Ҷ��±� */
//	for (Di=0; Di<Radix; Di++) {
//		/* ����ÿ��Ͱ */
//		if (B[Di].head) {
//			/* ���ǿյ�Ͱ��Ͱ����A[], �ݹ����� */
//			p = B[Di].head;
//			while (p) {
//				tmp = p;
//				p = p->next;
//				A[j++] = tmp->key;
//				free(tmp);
//			}              /* �ݹ�Ը�Ͱ��������, λ����1 */
//			MSD(A, i, j-1, D-1);
//			i = j; /* Ϊ��һ��Ͱ��Ӧ��A[]��� */
//		}
//	}
//}
//void MSDRadixSort( ElementType A[], int N ) {
//	/* ͳһ�ӿ� */
//	MSD(A, 0, N-1, MaxDigit);
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* �������� - ��λ���� */
///* ����Ԫ�������MaxDigit���ؼ��֣�����ȫ��ͬ����Radix */
//#define MaxDigit 4 #define Radix 10 /* ͰԪ�ؽ�� */
//typedef struct Node *PtrToNode;
//struct Node {
//	int key;
//	PtrToNode next;
//}; /* Ͱͷ��� */
//struct HeadNode {
//	PtrToNode head, tail;
//};
//typedef struct HeadNode Bucket[Radix];
//int GetDigit ( int X, int D ) {
//	/* Ĭ�ϴ�λD=1, ��λD<=MaxDigit */
//	int d, i;
//	for (i=1; i<=D; i++) {
//		d = X % Radix;
//		X /= Radix;
//	}
//	return d;
//}
//void LSDRadixSort( ElementType A[], int N ) {
//	/* �������� - ��λ���� */
//	int D, Di, i;
//	Bucket B;
//	PtrToNode tmp, p, List = NULL;
//	for (i=0; i<Radix; i++) /* ��ʼ��ÿ��ͰΪ������ */
//		B[i].head = B[i].tail = NULL;
//	for (i=0; i<N; i++) {
//		/* ��ԭʼ������������ʼ����List */
//		tmp = (PtrToNode)malloc(sizeof(struct Node));
//		tmp->key = A[i];
//		tmp->next = List;
//		List = tmp;
//	}      /* ���濪ʼ���� */
//	for (D=1; D<=MaxDigit; D++) {
//		/* �����ݵ�ÿһλѭ������ */
//		/* �����Ƿ���Ĺ��� */
//		p = List;
//		while (p) {
//			Di = GetDigit(p->key, D); /* ��õ�ǰԪ�صĵ�ǰλ���� */
//			/* ��List��ժ�� */
//			tmp = p;
//			p = p->next;              /* ����B[Di]��Ͱβ */
//			tmp->next = NULL;
//			if (B[Di].head == NULL)
//				B[Di].head = B[Di].tail = tmp;
//			else {
//				B[Di].tail->next = tmp;
//				B[Di].tail = tmp;
//			}
//		}          /* �������ռ��Ĺ��� */
//		List = NULL;
//		for (Di=Radix-1; Di>=0; Di--) {
//			/* ��ÿ��Ͱ��Ԫ��˳���ռ���List */
//			if (B[Di].head) {
//				/* ���Ͱ��Ϊ�� */
//				/* ��Ͱ����List��ͷ */
//				B[Di].tail->next = List;
//				List = B[Di].head;
//				B[Di].head = B[Di].tail = NULL; /* ���Ͱ */
//			}
//		}
//	}      /* ��List����A[]���ͷſռ� */
//	for (i=0; i<N; i++) {
//		tmp = List;
//		List = List->next;
//		A[i] = tmp->key;
//		free(tmp);
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* �������� */
//ElementType Median3( ElementType A[], int Left, int Right ) {
//	int Center = (Left+Right) / 2;
//	if ( A[Left] > A[Center] )
//		Swap( &A[Left], &A[Center] );
//	if ( A[Left] > A[Right] )
//		Swap( &A[Left], &A[Right] );
//	if ( A[Center] > A[Right] )
//		Swap( &A[Center], &A[Right] );     /* ��ʱA[Left] <= A[Center] <= A[Right] */
//	Swap( &A[Center], &A[Right-1] ); /* ����׼Pivot�ص��ұ�*/
//	/* ֻ��Ҫ����A[Left+1] �� A[Right-2] */
//	return  A[Right-1];  /* ���ػ�׼Pivot */
//}
//void Qsort( ElementType A[], int Left, int Right ) {
//	/* ���ĵݹ麯�� */
//	int Pivot, Cutoff, Low, High;
//	if ( Cutoff <= Right-Left ) {
//		/* �������Ԫ�س�ֶ࣬������� */
//		Pivot = Median3( A, Left, Right ); /* ѡ��׼ */
//		Low = Left;
//		High = Right-1;
//		while (1) {
//			/*�������бȻ�׼С���Ƶ���׼��ߣ�����Ƶ��ұ�*/
//			while ( A[++Low] < Pivot ) ;
//			while ( A[--High] > Pivot ) ;
//			if ( Low < High ) Swap( &A[Low], &A[High] );
//			else break;
//		}
//		Swap( &A[Low], &A[Right-1] );   /* ����׼������ȷ��λ�� */
//		Qsort( A, Left, Low-1 );    /* �ݹ������ */
//		Qsort( A, Low+1, Right );   /* �ݹ����ұ� */
//	}      else InsertionSort( A+Left, Right-Left+1 ); /* Ԫ��̫�٣��ü����� */
//}
//void QuickSort( ElementType A[], int N ) {
//	/* ͳһ�ӿ� */
//	Qsort( A, 0, N-1 );
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* �������� - ֱ�ӵ��ÿ⺯�� */
//#include <stdlib.h>
///*---------------����������--------------------*/
//int compare(const void *a, const void *b) {
//	/* �Ƚ����������ǽ������� */
//	return (*(int*)a - *(int*)b);
//} /* ���ýӿ� */
//qsort(A, N, sizeof(int), compare);
///*---------------����������--------------------*/
///*--------------- һ������£��Խṹ��Node�е�ĳ��ֵkey���� ---------------*/
//struct Node {
//	int key1, key2;
//} A[MAXN];
//int compare2keys(const void *a, const void *b) {
//	/* �Ƚ����ּ�ֵ����key1���������У����key1��ȣ���key2�ǽ������� */
//	int k;
//	if ( ((const struct Node*)a)->key1 < ((const struct Node*)b)->key1 )
//		k = 1;
//	else if ( ((const struct Node*)a)->key1 > ((const struct Node*)b)->key1 )
//		k = -1;
//	else {
//		/* ���key1��� */
//		if ( ((const struct Node*)a)->key2 < ((const struct Node*)b)->key2 )
//			k = -1;
//		else
//			k = 1;
//	}
//	return k;
//} /* ���ýӿ� */
//qsort(A, N, sizeof(struct Node), compare2keys);
///*--------------- һ������£��Խṹ��Node�е�ĳ��ֵkey���� ---------------*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* �鲢���� - ѭ��ʵ�� */ /* ����Merge�����ڵݹ�汾�и��� */ /* length = ��ǰ�������еĳ���*/
//void Merge_pass( ElementType A[], ElementType TmpA[], int N, int length ) {
//	/* �����鲢������������ */
//	int i, j;
//	for ( i=0; i <= N-2*length; i += 2*length )
//		Merge( A, TmpA, i, i+length, i+2*length-1 );
//	if ( i+length < N ) /* �鲢���2������*/
//		Merge( A, TmpA, i, i+length, N-1);
//	else /* ���ֻʣ1������*/
//		for ( j = i; j < N; j++ )
//			TmpA[j] = A[j];
//}
//void Merge_Sort( ElementType A[], int N ) {
//	int length;
//	ElementType *TmpA;
//	length = 1; /* ��ʼ�������г���*/
//	TmpA = malloc( N * sizeof( ElementType ) );
//	if ( TmpA != NULL ) {
//		while( length < N ) {
//			Merge_pass( A, TmpA, N, length );
//			length *= 2;
//			Merge_pass( TmpA, A, N, length );
//			length *= 2;
//		}
//		free( TmpA );
//	}      else printf( "�ռ䲻��" );
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* �鲢���� - �ݹ�ʵ�� */ /* L = �����ʼλ��, R = �ұ���ʼλ��, RightEnd = �ұ��յ�λ��*/
//void Merge( ElementType A[], ElementType TmpA[], int L, int R, int RightEnd ) {
//	/* �������A[L]~A[R-1]��A[R]~A[RightEnd]�鲢��һ���������� */
//	int LeftEnd, NumElements, Tmp;
//	int i;
//	LeftEnd = R - 1; /* ����յ�λ�� */
//	Tmp = L;         /* �������е���ʼλ�� */
//	NumElements = RightEnd - L + 1;
//	while( L <= LeftEnd && R <= RightEnd ) {
//		if ( A[L] <= A[R] )
//			TmpA[Tmp++] = A[L++]; /* �����Ԫ�ظ��Ƶ�TmpA */
//		else
//			TmpA[Tmp++] = A[R++]; /* ���ұ�Ԫ�ظ��Ƶ�TmpA */
//	}
//	while( L <= LeftEnd )
//		TmpA[Tmp++] = A[L++]; /* ֱ�Ӹ������ʣ�µ� */
//	while( R <= RightEnd )
//		TmpA[Tmp++] = A[R++]; /* ֱ�Ӹ����ұ�ʣ�µ� */
//	for( i = 0; i < NumElements; i++, RightEnd -- )
//		A[RightEnd] = TmpA[RightEnd]; /* �������TmpA[]���ƻ�A[] */
//}
//void Msort( ElementType A[], ElementType TmpA[], int L, int RightEnd ) {
//	/* ���ĵݹ������� */
//	int Center;
//	if ( L < RightEnd ) {
//		Center = (L+RightEnd) / 2;
//		Msort( A, TmpA, L, Center );              /* �ݹ������ */
//		Msort( A, TmpA, Center+1, RightEnd );     /* �ݹ����ұ� */
//		Merge( A, TmpA, L, Center+1, RightEnd );  /* �ϲ������������� */
//	}
//}
//void MergeSort( ElementType A[], int N ) {
//	/* �鲢���� */
//	ElementType *TmpA;
//	TmpA = (ElementType *)malloc(N*sizeof(ElementType));
//	if ( TmpA != NULL ) {
//		Msort( A, TmpA, 0, N-1 );
//		free( TmpA );
//	}      else printf( "�ռ䲻��" );
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//void Swap( ElementType *a, ElementType *b ) {
//	ElementType t = *a;
//	*a = *b;
//	*b = t;
//}
//void PercDown( ElementType A[], int p, int N ) {
//	/* �ı����4.24��PercDown( MaxHeap H, int p )    */   /* ��N��Ԫ�ص���������A[p]Ϊ�����Ӷѵ���Ϊ���� */
//	int Parent, Child;
//	ElementType X;
//	X = A[p]; /* ȡ��������ŵ�ֵ */
//	for( Parent=p; (Parent*2+1)<N; Parent=Child ) {
//		Child = Parent * 2 + 1;
//		if( (Child!=N-1) && (A[Child]<A[Child+1]) )
//			Child++;  /* Childָ�������ӽ��Ľϴ��� */
//		if( X >= A[Child] ) break; /* �ҵ��˺���λ�� */
//		else  /* ����X */
//			A[Parent] = A[Child];
//	}
//	A[Parent] = X;
//}
//void HeapSort( ElementType A[], int N )  {
//	/* ������ */      int i;
//	for ( i=N/2-1; i>=0; i-- )/* �������� */
//		PercDown( A, i, N );
//	for ( i=N-1; i>0; i-- ) {
//		/* ɾ�����Ѷ� */
//		Swap( &A[0], &A[i] ); /* ������7.1 */
//		PercDown( A, 0, i );
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//void ShellSort( ElementType A[], int N ) {
//	/* ϣ������ - ��Sedgewick�������� */
//	int Si, D, P, i;
//	ElementType Tmp;      /* ����ֻ�г�һС�������� */
//	int Sedgewick[] = {929, 505, 209, 109, 41, 19, 5, 1, 0};
//	for ( Si=0; Sedgewick[Si]>=N; Si++ )           ; /* ��ʼ������Sedgewick[Si]���ܳ����������г��� */
//	for ( D=Sedgewick[Si]; D>0; D=Sedgewick[++Si] )
//		for ( P=D; P<N; P++ ) {
//			/* ��������*/
//			Tmp = A[P];
//			for ( i=P; i>=D && A[i-D]>Tmp; i-=D )
//				A[i] = A[i-D];
//			A[i] = Tmp;
//		}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//void InsertionSort( ElementType A[], int N ) {
//	/* �������� */      int P, i;
//	ElementType Tmp;
//	for ( P=1; P<N; P++ ) {
//		Tmp = A[P]; /* ȡ��δ���������еĵ�һ��Ԫ��*/
//		for ( i=P; i>0 && A[i-1]>Tmp; i-- )
//			A[i] = A[i-1]; /*������������������Ԫ�رȽϲ�����*/
//		A[i] = Tmp; /* �Ž����ʵ�λ�� */
//	}
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* �ڽӱ�洢 - ���������㷨 */

//bool TopSort( LGraph Graph, Vertex TopOrder[] ) {
//	/* ��Graph������������,  TopOrder[]˳��洢�����Ķ����±� */
//	int Indegree[MaxVertexNum], cnt;
//	Vertex V;
//	PtrToAdjVNode W;
//	Queue Q = CreateQueue( Graph->Nv );       /* ��ʼ��Indegree[] */
//	for (V=0; V<Graph->Nv; V++)
//		Indegree[V] = 0;              /* ����ͼ���õ�Indegree[] */
//	for (V=0; V<Graph->Nv; V++)
//		for (W=Graph->G[V].FirstEdge; W; W=W->Next)
//			Indegree[W->AdjV]++; /* �������<V, W->AdjV>�ۼ��յ����� */
//	/* ���������Ϊ0�Ķ������� */
//	for (V=0; V<Graph->Nv; V++)
//		if ( Indegree[V]==0 )
//			AddQ(Q, V);
//	/* ��������������� */
//	cnt = 0;
//	while( !IsEmpty(Q) ) {
//		V = DeleteQ(Q); /* ����һ�����Ϊ0�Ķ��� */
//		TopOrder[cnt++] = V; /* ��֮��Ϊ������е���һ��Ԫ�� */
//		/* ��V��ÿ���ڽӵ�W->AdjV */
//		for ( W=Graph->G[V].FirstEdge; W; W=W->Next )
//			if ( --Indegree[W->AdjV] == 0 )/* ��ɾ��Vʹ��W->AdjV���Ϊ0 */
//				AddQ(Q, W->AdjV); /* ��ö������� */
//	} /* while����*/
//	if ( cnt != Graph->Nv )
//		return false; /* ˵��ͼ���л�·, ���ز��ɹ���־ */
//	else
//		return true;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* �ڽӱ�洢 - Kruskal��С�������㷨 */
/*-------------------- ���㲢�鼯���� --------------------*/

//typedef Vertex ElementType; /* Ĭ��Ԫ�ؿ����÷Ǹ�������ʾ */
//typedef Vertex SetName;     /* Ĭ���ø������±���Ϊ�������� */
//typedef ElementType SetType[MaxVertexNum]; /* ���輯��Ԫ���±��0��ʼ */
//
//void InitializeVSet( SetType S, int N ) { /* ��ʼ�����鼯 */
//	ElementType X;
//	for ( X=0; X<N; X++ )
//	S[X] = -1;
//	}
//
//void Union( SetType S, SetName Root1, SetName Root2 ) { /* ����Ĭ��Root1��Root2�ǲ�ͬ���ϵĸ���� */     /* ��֤С���ϲ���󼯺� */
//	if ( S[Root2] < S[Root1] ) { /* �������2�Ƚϴ� */
//		S[Root2] += S[Root1];     /* ����1���뼯��2  */
//		S[Root1] = Root2;
//	}
//	else {                         /* �������1�Ƚϴ� */
//	 S[Root1] += S[Root2];     /* ����2���뼯��1  */
//	 S[Root2] = Root1;
//	}
//}
//
//SetName Find( SetType S, ElementType X ) { /* Ĭ�ϼ���Ԫ��ȫ����ʼ��Ϊ-1 */
//	 if ( S[X] < 0 ) /* �ҵ����ϵĸ� */
//	 	return X;
//	 else
//	 return S[X] = Find( S, S[X] ); /* ·��ѹ�� */
//	 }
//
//bool CheckCycle( SetType VSet, Vertex V1, Vertex V2 ) {
//	 /* �������V1��V2�ı��Ƿ������е���С�������Ӽ��й��ɻ�· */
//	Vertex Root1, Root2;
//	Root1 = Find( VSet, V1 ); /* �õ�V1��������ͨ������ */
//	Root2 = Find( VSet, V2 ); /* �õ�V2��������ͨ������ */
//	if( Root1==Root2 ) /* ��V1��V2�Ѿ���ͨ����ñ߲���Ҫ */
//	return false;
//	else { /* ����ñ߿��Ա��ռ���ͬʱ��V1��V2����ͬһ��ͨ�� */
//	Union( VSet, Root1, Root2 );
//	return true;
//	}
//}
//
///*-------------------- ���鼯������� --------------------*/
///*-------------------- �ߵ���С�Ѷ��� --------------------*/
//void PercDown( Edge ESet, int p, int N ) {
///* �ı����4.24��PercDown( MaxHeap H, int p )    */
///* ��N��Ԫ�صı���������ESet[p]Ϊ�����Ӷѵ���Ϊ����Weight����С�� */
//	int Parent, Child;
//	struct ENode X;
//	X = ESet[p]; /* ȡ��������ŵ�ֵ */
//	for( Parent=p; (Parent*2+1)<N; Parent=Child ) {
//		Child = Parent * 2 + 1;
//		if( (Child!=N-1) && (ESet[Child].Weight>ESet[Child+1].Weight) )
//			Child++;  /* Childָ�������ӽ��Ľ�С�� */
//		if( X.Weight <= ESet[Child].Weight )
//		break; /* �ҵ��˺���λ�� */
//		else  /* ����X */
//		ESet[Parent] = ESet[Child];
//		}
//	ESet[Parent] = X;
//}
//
//void InitializeESet( LGraph Graph, Edge ESet ) {
///* ��ͼ�ıߴ�������ESet�����ҳ�ʼ��Ϊ��С�� */
//	Vertex V;
//	PtrToAdjVNode W;
//	int ECount;     /* ��ͼ�ıߴ�������ESet */
//	ECount = 0;
//	for ( V=0; V<Graph->Nv; V++ )
//		for ( W=Graph->G[V].FirstEdge; W; W=W->Next )
//			if ( V < W->AdjV ) { /* �����ظ�¼������ͼ�ıߣ�ֻ��V1<V2�ı� */
//			ESet[ECount].V1 = V;
//			ESet[ECount].V2 = W->AdjV;
//			ESet[ECount++].Weight = W->Weight;
//			}     /* ��ʼ��Ϊ��С�� */
//	for ( ECount=Graph->Ne/2; ECount>=0; ECount-- )
//		PercDown( ESet, ECount, Graph->Ne );
//}
//
//int GetEdge( Edge ESet, int CurrentSize ) {
///* ������ǰ�ѵĴ�СCurrentSize������ǰ��С��λ�õ����������� */
///* ����С���뵱ǰ�ѵ����һ��λ�õı߽��� */
//	Swap( &ESet[0], &ESet[CurrentSize-1]);     /* ��ʣ�µı߼�����������С�� */
//	PercDown( ESet, 0, CurrentSize-1 );
//	return CurrentSize-1;
//	/* ������С������λ�� */
//}
///*-------------------- ��С�Ѷ������ --------------------*/
//
//int Kruskal( LGraph Graph, LGraph MST ) {
///* ����С����������Ϊ�ڽӱ�洢��ͼMST��������СȨ�غ� */
//	WeightType TotalWeight;
//	int ECount, NextEdge;
//	SetType VSet; /* �������� */
//	Edge ESet;    /* ������ */
//	InitializeVSet( VSet, Graph->Nv ); /* ��ʼ�����㲢�鼯 */
//	ESet = (Edge)malloc( sizeof(struct ENode)*Graph->Ne );
//	InitializeESet( Graph, ESet ); /* ��ʼ���ߵ���С�� */
//	/* �����������ж��㵫û�бߵ�ͼ��ע�����ڽӱ�汾 */
//	MST = CreateGraph(Graph->Nv);
//	TotalWeight = 0; /* ��ʼ��Ȩ�غ�     */
//	ECount = 0;      /* ��ʼ����¼�ı��� */
//	NextEdge = Graph->Ne; /* ԭʼ�߼��Ĺ�ģ */
//	while ( ECount < Graph->Nv-1 ) {  /* ���ռ��ı߲����Թ�����ʱ */
//		NextEdge = GetEdge( ESet, NextEdge ); /* �ӱ߼��еõ���С�ߵ�λ�� */
//		if (NextEdge < 0) /* �߼��ѿ� */
//			break;         /* ����ñߵļ��벻���ɻ�·�������˽�㲻����ͬһ��ͨ�� */
//		if ( CheckCycle( VSet, ESet[NextEdge].V1, ESet[NextEdge].V2 )==true ) {             /* ���ñ߲���MST */
//			InsertEdge( MST, ESet+NextEdge );
//			TotalWeight += ESet[NextEdge].Weight; /* �ۼ�Ȩ�� */
//			ECount++; /* �������б�����1 */
//			}
//	}
//	if ( ECount < Graph->Nv-1 )
//	TotalWeight = -1; /* ���ô����ǣ���ʾ������������ */
//	return TotalWeight;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/* �ڽӾ���洢 - Prim��С�������㷨 */

//Vertex FindMinDist( MGraph Graph, WeightType dist[] ) {
//	/* ����δ����¼������dist��С�� */
//	Vertex MinV, V;
//	WeightType MinDist = INFINITY;
//	for (V=0; V<Graph->Nv; V++) {
//		if ( dist[V]!=0 && dist[V]<MinDist) {
//			/* ��Vδ����¼����dist[V]��С */
//			MinDist = dist[V]; /* ������С���� */
//			MinV = V; /* ���¶�Ӧ���� */
//		}
//	}
//	if (MinDist < INFINITY) /* ���ҵ���Сdist */
//		return MinV; /* ���ض�Ӧ�Ķ����±� */
//	else return ERROR;  /* �������Ķ��㲻���ڣ�����-1��Ϊ��� */
//}
//int Prim( MGraph Graph, LGraph MST ) {
//	/* ����С����������Ϊ�ڽӱ�洢��ͼMST��������СȨ�غ� */
//	WeightType dist[MaxVertexNum], TotalWeight;
//	Vertex parent[MaxVertexNum], V, W;
//	int VCount;
//	Edge E;
//	/* ��ʼ����Ĭ�ϳ�ʼ���±���0 */
//	for (V=0; V<Graph->Nv; V++) {
//		/* ���������V��Wû��ֱ�ӵıߣ���Graph->G[V][W]����ΪINFINITY */
//		dist[V] = Graph->G[0][V];
//		parent[V] = 0; /* ���Ҷ������ж���ĸ���㶼�ǳ�ʼ��0 */
//	}
//	TotalWeight = 0; /* ��ʼ��Ȩ�غ�     */
//	VCount = 0;      /* ��ʼ����¼�Ķ����� */
//	/* �����������ж��㵫û�бߵ�ͼ��ע�����ڽӱ�汾 */
//	MST = CreateGraph(Graph->Nv);
//	E = (Edge)malloc( sizeof(struct ENode) ); /* �����յı߽�� */
//	/* ����ʼ��0��¼��MST */
//	dist[0] = 0;
//	VCount ++;
//	parent[0] = -1; /* ��ǰ������0 */
//	while (1) {
//		V = FindMinDist( Graph, dist );
//		/* V = δ����¼������dist��С�� */
//		if ( V==ERROR ) /* ��������V������ */
//			break;   /* �㷨���� */
//		/* ��V����Ӧ�ı�<parent[V], V>��¼��MST */
//		E->V1 = parent[V];
//		E->V2 = V;
//		E->Weight = dist[V];
//		InsertEdge( MST, E );
//		TotalWeight += dist[V];
//		dist[V] = 0;
//		VCount++;
//
//		for( W=0; W<Graph->Nv; W++ ) /* ��ͼ�е�ÿ������W */
//			if ( dist[W]!=0 && Graph->G[V][W]<INFINITY ) {
//				/* ��W��V���ڽӵ㲢��δ����¼ */
//				if ( Graph->G[V][W] < dist[W] ) {
//					/* ����¼Vʹ��dist[W]��С */
//					dist[W] = Graph->G[V][W]; /* ����dist[W] */
//					parent[W] = V; /* ������ */
//				}
//			}
//	} /* while����*/
//	if ( VCount < Graph->Nv ) /* MST���յĶ��㲻��|V|�� */
//		TotalWeight = ERROR;
//	return TotalWeight;   /* �㷨ִ����ϣ�������СȨ�غͻ������ */
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* �ڽӾ���洢 - ��Դ���·�㷨 */

//bool Floyd( MGraph Graph, WeightType D[][MaxVertexNum], Vertex path[][MaxVertexNum] ) {
//	Vertex i, j, k;     /* ��ʼ�� */
//	for ( i=0; i<Graph->Nv; i++ )
//		for( j=0; j<Graph->Nv; j++ ) {
//			D[i][j] = Graph->G[i][j];
//			path[i][j] = -1;
//		}
//	for( k=0; k<Graph->Nv; k++ )
//		for( i=0; i<Graph->Nv; i++ )
//			for( j=0; j<Graph->Nv; j++ )
//				if( D[i][k] + D[k][j] < D[i][j] ) {
//					D[i][j] = D[i][k] + D[k][j];
//					if ( i==j && D[i][j]<0 ) /* �����ָ�ֵȦ */
//						return false; /* ������ȷ��������ش����� */
//					path[i][j] = k;
//				}
//	return true; /* �㷨ִ����ϣ�������ȷ��� */
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* �ڽӾ���洢 - ��Ȩͼ�ĵ�Դ���·�㷨 */

//Vertex FindMinDist( MGraph Graph, int dist[], int collected[] ) {
//	/* ����δ����¼������dist��С�� */
//	Vertex MinV, V;
//	int MinDist = INFINITY;
//	for (V=0; V<Graph->Nv; V++) {
//		if ( collected[V]==false && dist[V]<MinDist) {
//			/* ��Vδ����¼����dist[V]��С */
//			MinDist = dist[V]; /* ������С���� */
//			MinV = V; /* ���¶�Ӧ���� */
//		}
//	}
//	if (MinDist < INFINITY) /* ���ҵ���Сdist */
//		return MinV; /* ���ض�Ӧ�Ķ����±� */
//	else return ERROR;  /* �������Ķ��㲻���ڣ����ش����� */
//}
//bool Dijkstra( MGraph Graph, int dist[], int path[], Vertex S ) {
//	int collected[MaxVertexNum];
//	Vertex V, W;     /* ��ʼ�����˴�Ĭ���ڽӾ����в����ڵı���INFINITY��ʾ */
//	for ( V=0; V<Graph->Nv; V++ ) {
//		dist[V] = Graph->G[S][V];
//		if ( dist[V]<INFINITY )
//			path[V] = S;
//		else
//			path[V] = -1;
//		collected[V] = false;
//	}     /* �Ƚ�������뼯�� */
//	dist[S] = 0;
//	collected[S] = true;
//	while (1) {
//		/* V = δ����¼������dist��С�� */
//		V = FindMinDist( Graph, dist, collected );
//		if ( V==ERROR ) /* ��������V������ */
//			break;      /* �㷨���� */
//		collected[V] = true;  /* ��¼V */
//		for( W=0; W<Graph->Nv; W++ ) /* ��ͼ�е�ÿ������W */
//			/* ��W��V���ڽӵ㲢��δ����¼ */
//			if ( collected[W]==false && Graph->G[V][W]<INFINITY ) {
//				if ( Graph->G[V][W]<0 ) /* ���и��� */
//					return false; /* ������ȷ��������ش����� */                 /* ����¼Vʹ��dist[W]��С */
//				if ( dist[V]+Graph->G[V][W] < dist[W] ) {
//					dist[W] = dist[V]+Graph->G[V][W]; /* ����dist[W] */
//					path[W] = V; /* ����S��W��·�� */
//				}
//			}
//	} /* while����*/
//	return true; /* �㷨ִ����ϣ�������ȷ��� */
//}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/* �ڽӱ�洢 - ��Ȩͼ�ĵ�Դ���·�㷨 */ /* dist[]��path[]ȫ����ʼ��Ϊ-1 */

//void Unweighted ( LGraph Graph, int dist[], int path[], Vertex S ) {
//	Queue Q;
//	Vertex V;
//	PtrToAdjVNode W;
//	Q = CreateQueue( Graph->Nv ); /* �����ն���, MaxSizeΪ�ⲿ����ĳ��� */
//	dist[S] = 0; /* ��ʼ��Դ�� */
//	AddQ (Q, S);
//	while( !IsEmpty(Q) ) {
//		V = DeleteQ(Q);
//		for ( W=Graph->G[V].FirstEdge; W; W=W->Next ) /* ��V��ÿ���ڽӵ�W->AdjV */
//			if ( dist[W->AdjV]==-1 ) {
//				/* ��W->AdjVδ�����ʹ� */
//				dist[W->AdjV] = dist[V]+1; /* W->AdjV��S�ľ������ */
//				path[W->AdjV] = V; /* ��V��¼��S��W->AdjV��·���� */
//				AddQ(Q, W->AdjV);
//			}
//	} /* while����*/
//}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* �ڽӾ���洢��ͼ - BFS */ /* IsEdge(Graph, V, W)���<V, W>�Ƿ�ͼGraph�е�һ���ߣ���W�Ƿ�V���ڽӵ㡣  */
/* �˺�������ͼ�Ĳ�ͬ����Ҫ����ͬ��ʵ�֣��ؼ�ȡ���ڶԲ����ڵıߵı�ʾ������*/
/* �������Ȩͼ, ��������ڵı߱���ʼ��ΪINFINITY, ����ʵ������:  */
//bool IsEdge( MGraph Graph, Vertex V, Vertex W ) {
//	return Graph->G[V][W]<INFINITY ? true : false;
//} /* Visited[]Ϊȫ�ֱ������Ѿ���ʼ��Ϊfalse */
//void BFS ( MGraph Graph, Vertex S, void (*Visit)(Vertex) ) {
//	/* ��SΪ��������ڽӾ���洢��ͼGraph����BFS���� */
//	Queue Q;
//	Vertex V, W;
//	Q = CreateQueue( MaxSize ); /* �����ն���, MaxSizeΪ�ⲿ����ĳ��� */
//	/* ���ʶ���S���˴��ɸ��ݾ��������Ҫ��д */
//	Visit( S );
//	Visited[S] = true; /* ���S�ѷ��� */
//	AddQ(Q, S); /* S����� */
//	while ( !IsEmpty(Q) ) {
//		V = DeleteQ(Q);  /* ����V */
//		for( W=0; W<Graph->Nv; W++ ) /* ��ͼ�е�ÿ������W */
//			/* ��W��V���ڽӵ㲢��δ���ʹ� */
//			if ( !Visited[W] && IsEdge(Graph, V, W) ) {
//				/* ���ʶ���W */
//				Visit( W );
//				Visited[W] = true; /* ���W�ѷ��� */
//				AddQ(Q, W); /* W����� */
//			}
//	} /* while����*/
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* �ڽӱ�洢��ͼ - DFS */
//void Visit( Vertex V ) {
//	printf("���ڷ��ʶ���%d\n", V);
//} /* Visited[]Ϊȫ�ֱ������Ѿ���ʼ��Ϊfalse */
//void DFS( LGraph Graph, Vertex V, void (*Visit)(Vertex) ) {
//	/* ��VΪ��������ڽӱ�洢��ͼGraph����DFS���� */
//	PtrToAdjVNode W;
//	Visit( V ); /* ���ʵ�V������ */
//	Visited[V] = true; /* ���V�ѷ��� */
//	for( W=Graph->G[V].FirstEdge; W; W=W->Next ) /* ��V��ÿ���ڽӵ�W->AdjV */
//		if ( !Visited[W->AdjV] )    /* ��W->AdjVδ������ */
//			DFS( Graph, W->AdjV, Visit );    /* ��ݹ����֮ */
//}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//																ͼ���ڽӱ��ʾ��

///* ͼ���ڽӱ��ʾ�� */
//#define MaxVertexNum 100
///* ��󶥵�����Ϊ100 */
//typedef int Vertex;         	/* �ö����±��ʾ����,Ϊ���� */
//typedef int WeightType;       	 /* �ߵ�Ȩֵ��Ϊ���� */
//typedef char DataType;       	 /* ����洢������������Ϊ�ַ��� */
///* �ߵĶ��� */
//typedef struct ENode *PtrToENode;
//struct ENode {
//	Vertex V1, V2;      /* �����<V1, V2> */
//	WeightType Weight;  /* Ȩ�� */
//};
//typedef PtrToENode Edge; /* �ڽӵ�Ķ��� */
//typedef struct AdjVNode *PtrToAdjVNode;
//struct AdjVNode {
//	Vertex AdjV;        /* �ڽӵ��±� */
//	WeightType Weight;  /* ��Ȩ�� */
//	PtrToAdjVNode Next;    /* ָ����һ���ڽӵ��ָ�� */
//}; /* �����ͷ���Ķ��� */
//typedef struct Vnode {
//	PtrToAdjVNode FirstEdge;/* �߱�ͷָ�� */
//	DataType Data;            /* �涥������� */     /* ע�⣺�ܶ�����£����������ݣ���ʱData���Բ��ó��� */
//} AdjList[MaxVertexNum];    /* AdjList���ڽӱ����� */
///* ͼ���Ķ��� */
//typedef struct GNode *PtrToGNode;
//struct GNode {
//	int Nv;     /* ������ */
//	int Ne;     /* ����   */
//	AdjList G;  /* �ڽӱ� */
//};
//typedef PtrToGNode LGraph; /* ���ڽӱ�ʽ�洢��ͼ���� */
//LGraph CreateGraph( int VertexNum ) {
//	/* ��ʼ��һ����VertexNum�����㵫û�бߵ�ͼ */
//	Vertex V;
//	LGraph Graph;
//	Graph = (LGraph)malloc( sizeof(struct GNode) ); /* ����ͼ */
//	Graph->Nv = VertexNum;
//	Graph->Ne = 0;     /* ��ʼ���ڽӱ�ͷָ�� */     /* ע�⣺����Ĭ�϶����Ŵ�0��ʼ����(Graph->Nv - 1) */
//	for (V=0; V<Graph->Nv; V++)
//		Graph->G[V].FirstEdge = NULL;
//	return Graph;
//}
//void InsertEdge( LGraph Graph, Edge E ) {
//	PtrToAdjVNode NewNode;          /* ����� <V1, V2> */     /* ΪV2�����µ��ڽӵ� */
//	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
//	NewNode->AdjV = E->V2;
//	NewNode->Weight = E->Weight;     /* ��V2����V1�ı�ͷ */
//	NewNode->Next = Graph->G[E->V1].FirstEdge;
//	Graph->G[E->V1].FirstEdge = NewNode;              /* ��������ͼ����Ҫ����� <V2, V1> */
///* ΪV1�����µ��ڽӵ� */
//	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
//	NewNode->AdjV = E->V1;
//	NewNode->Weight = E->Weight;     /* ��V1����V2�ı�ͷ */
//	NewNode->Next = Graph->G[E->V2].FirstEdge;
//	Graph->G[E->V2].FirstEdge = NewNode;
//}
//LGraph BuildGraph() {
//	LGraph Graph;
//	Edge E;
//	Vertex V;
//	int Nv, i;
//	scanf("%d", &Nv);   /* ���붥����� */
//	Graph = CreateGraph(Nv); /* ��ʼ����Nv�����㵫û�бߵ�ͼ */
//	scanf("%d", &(Graph->Ne));   /* ������� */
//	if ( Graph->Ne != 0 ) {
//		/* ����б� */
//		E = (Edge)malloc( sizeof(struct ENode) ); /* �����߽�� */
//		/* ����ߣ���ʽΪ"��� �յ� Ȩ��"�������ڽӾ��� */
//		for (i=0; i<Graph->Ne; i++) {
//			scanf("%d %d %d", &E->V1, &E->V2, &E->Weight);              /* ע�⣺���Ȩ�ز������ͣ�Weight�Ķ����ʽҪ�� */
//			InsertEdge( Graph, E );
//		}
//	}      /* ������������ݵĻ����������� */
//	for (V=0; V<Graph->Nv; V++)
//		scanf(" %c", &(Graph->G[V].Data));
//	return Graph;
//}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////																ͼ���ڽӾ����ʾ��
//
///* ͼ���ڽӾ����ʾ�� */
//#define MaxVertexNum 100    /* ��󶥵�����Ϊ100 */
//#define INFINITY 65535        /* ����Ϊ˫�ֽ��޷������������ֵ65535*/
//typedef int Vertex;         /* �ö����±��ʾ����,Ϊ���� */
//typedef int WeightType;        /* �ߵ�Ȩֵ��Ϊ���� */
//typedef char DataType;        /* ����洢������������Ϊ�ַ��� */
///* �ߵĶ��� */
//typedef struct ENode *PtrToENode;
//struct ENode {
//	Vertex V1, V2;      /* �����<V1, V2> */
//	WeightType Weight;  /* Ȩ�� */
//};
//typedef PtrToENode Edge;         /* ͼ���Ķ��� */
//typedef struct GNode *PtrToGNode;
//struct GNode {
//	int Nv;  	/* ������ */
//	int Ne;  	/* ����   */
//	WeightType G[MaxVertexNum][MaxVertexNum];	 /* �ڽӾ��� */
//	DataType Data[MaxVertexNum];     	 /* �涥������� */
//	/* ע�⣺�ܶ�����£����������ݣ���ʱData[]���Բ��ó��� */
//};
//typedef PtrToGNode MGraph; 		/* ���ڽӾ���洢��ͼ���� */
//
//MGraph CreateGraph( int VertexNum ) {
//	/* ��ʼ��һ����VertexNum�����㵫û�бߵ�ͼ */
//	Vertex V, W;
//	MGraph Graph;
//	Graph = (MGraph)malloc(sizeof(struct GNode)); 		/* ����ͼ */
//	Graph->Nv = VertexNum;
//	Graph->Ne = 0;     /* ��ʼ���ڽӾ��� */     /* ע�⣺����Ĭ�϶����Ŵ�0��ʼ����(Graph->Nv - 1) */
//	for (V=0; V<Graph->Nv; V++)
//		for (W=0; W<Graph->Nv; W++)
//			Graph->G[V][W] = INFINITY;
//	return Graph;
//}
//
//void InsertEdge( MGraph Graph, Edge E ) {
//	/* ����� <V1, V2> */
//	Graph->G[E->V1][E->V2] = E->Weight;
//	/* ��������ͼ����Ҫ�����<V2, V1> */
//	Graph->G[E->V2][E->V1] = E->Weight;
//}
//
//MGraph BuildGraph() {
//	MGraph Graph;
//	Edge E;
//	Vertex V;
//	int Nv, i;
//	scanf("%d", &Nv);   /* ���붥����� */
//	Graph = CreateGraph(Nv); /* ��ʼ����Nv�����㵫û�бߵ�ͼ */
//	scanf("%d", &(Graph->Ne));   /* ������� */
//	if ( Graph->Ne != 0 ) {
//		/* ����б� */
//		E = (Edge)malloc(sizeof(struct ENode)); /* �����߽�� */
//		/* ����ߣ���ʽΪ"��� �յ� Ȩ��"�������ڽӾ��� */
//		for (i=0; i<Graph->Ne; i++) {
//			scanf("%d %d %d", &E->V1, &E->V2, &E->Weight);
//			/* ע�⣺���Ȩ�ز������ͣ�Weight�Ķ����ʽҪ�� */
//			InsertEdge( Graph, E );
//		}
//	}      /* ������������ݵĻ����������� */
//	for (V=0; V<Graph->Nv; V++)
//		scanf(" %c", &(Graph->Data[V]));
//	return Graph;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//														���ϼ�����

//#define MAXN 1000
///* �������Ԫ�ظ��� */
//typedef int ElementType;           /* Ĭ��Ԫ�ؿ����÷Ǹ�������ʾ */
//typedef int SetName;               /* Ĭ���ø������±���Ϊ�������� */
//typedef ElementType SetType[MAXN]; /* ���輯��Ԫ���±��0��ʼ */
//void Union( SetType S, SetName Root1, SetName Root2 ) {
//	/* ����Ĭ��Root1��Root2�ǲ�ͬ���ϵĸ���� */
//	/* ��֤С���ϲ���󼯺� */
//	if ( S[Root2] < S[Root1] ) {
//		/* �������2�Ƚϴ� */
//		S[Root2] += S[Root1];     /* ����1���뼯��2  */
//		S[Root1] = Root2;
//	}     else {
//		/* �������1�Ƚϴ� */
//		S[Root1] += S[Root2];     /* ����2���뼯��1  */
//		S[Root2] = Root1;
//	}
//}
//SetName Find( SetType S, ElementType X ) {
//	/* Ĭ�ϼ���Ԫ��ȫ����ʼ��Ϊ-1 */
//	if ( S[X] < 0 ) /* �ҵ����ϵĸ� */
//		return X;
//	else
//		return S[X] = Find( S, S[X] ); /* ·��ѹ�� */
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//													�ѵĶ��������

//typedef struct HNode *Heap; /* �ѵ����Ͷ��� */
//struct HNode {
//	ElementType *Data; /* �洢Ԫ�ص����� */
//	int Size;          /* ���е�ǰԪ�ظ��� */
//	int Capacity;      /* �ѵ�������� */
//};
//typedef Heap MaxHeap; /* ���� */
//typedef Heap MinHeap; /* ��С�� */
//#define MAXDATA 1000  /* ��ֵӦ���ݾ����������Ϊ���ڶ������п���Ԫ�ص�ֵ */
//MaxHeap CreateHeap( int MaxSize ) { /* ��������ΪMaxSize�Ŀյ����� */
//	MaxHeap H = (MaxHeap)malloc(sizeof(struct HNode));
//	H->Data = (ElementType *)malloc((MaxSize+1)*sizeof(ElementType));
//	H->Size = 0;
//	H->Capacity = MaxSize;
//	H->Data[0] = MAXDATA; /* ����"�ڱ�"Ϊ���ڶ������п���Ԫ�ص�ֵ*/
//	return H;
//}
//bool IsFull( MaxHeap H ) {
//	return (H->Size == H->Capacity);
//}
//bool Insert( MaxHeap H, ElementType X ) {
//	/* ��Ԫ��X��������H������H->Data[0]�Ѿ�����Ϊ�ڱ� */
//	int i;
//	if ( IsFull(H) ) {
//		printf("��������");
//		return false;
//	}
//	i = ++H->Size; /* iָ��������е����һ��Ԫ�ص�λ�� */
//	for ( ; H->Data[i/2] < X; i/=2 )
//		H->Data[i] = H->Data[i/2]; /* ����X */
//	H->Data[i] = X; /* ��X���� */
//	return true;
//}
//#define ERROR -1 /* �����ʶӦ���ݾ����������Ϊ���в����ܳ��ֵ�Ԫ��ֵ */
//bool IsEmpty( MaxHeap H ) {
//	return (H->Size == 0);
//}
//ElementType DeleteMax( MaxHeap H ) {
//	/* ������H��ȡ����ֵΪ����Ԫ�أ���ɾ��һ����� */
//	int Parent, Child;
//	ElementType MaxItem, X;
//	if ( IsEmpty(H) ) {
//		printf("������Ϊ��");
//		return ERROR;
//	}
//	MaxItem = H->Data[1]; /* ȡ��������ŵ����ֵ */
//	/* �����������һ��Ԫ�شӸ���㿪ʼ���Ϲ����²��� */
//	X = H->Data[H->Size--]; /* ע�⵱ǰ�ѵĹ�ģҪ��С */
//	for( Parent=1; Parent*2<=H->Size; Parent=Child ) {
//		Child = Parent * 2;
//		if( (Child!=H->Size) && (H->Data[Child]<H->Data[Child+1]) )
//			Child++;  /* Childָ�������ӽ��Ľϴ��� */
//		if( X >= H->Data[Child] ) break; /* �ҵ��˺���λ�� */
//		else  /* ����X */
//			H->Data[Parent] = H->Data[Child];
//	}
//	H->Data[Parent] = X;
//	return MaxItem;
//}  /*----------- �������� -----------*/
//void PercDown( MaxHeap H, int p ) {
//	/* ���ˣ���H����H->Data[p]Ϊ�����Ӷѵ���Ϊ���� */
//	int Parent, Child;
//	ElementType X;
//	X = H->Data[p]; /* ȡ��������ŵ�ֵ */
//	for( Parent=p; Parent*2<=H->Size; Parent=Child ) {
//		Child = Parent * 2;
//		if( (Child!=H->Size) && (H->Data[Child]<H->Data[Child+1]) )
//			Child++;  /* Childָ�������ӽ��Ľϴ��� */
//		if( X >= H->Data[Child] ) break; /* �ҵ��˺���λ�� */
//		else  /* ����X */
//			H->Data[Parent] = H->Data[Child];
//	}
//	H->Data[Parent] = X;
//}
//void BuildHeap( MaxHeap H ) {
//	/* ����H->Data[]�е�Ԫ�أ�ʹ�������ѵ�������  */
//	/* �����������H->Size��Ԫ���Ѿ�����H->Data[]�� */
//	int i;     /* �����һ�����ĸ��ڵ㿪ʼ���������1 */
//	for( i = H->Size/2; i>0; i-- )
//		PercDown( H, i );
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//											ƽ�����������ת�����

//typedef struct AVLNode *Position;
//typedef Position AVLTree; /* AVL������ */
//struct AVLNode {
//	ElementType Data; /* ������� */
//	AVLTree Left;     /* ָ�������� */
//	AVLTree Right;    /* ָ�������� */
//	int Height;       /* ���� */
//};
//int Max ( int a, int b ) {
//	return a > b ? a : b;
//}
//AVLTree SingleLeftRotation ( AVLTree A ) {
//	/* ע�⣺A������һ�����ӽ��B */
//	/* ��A��B������������A��B�ĸ߶ȣ������µĸ����B */
//	AVLTree B = A->Left;
//	A->Left = B->Right;
//	B->Right = A;
//	A->Height = Max( GetHeight(A->Left), GetHeight(A->Right) ) + 1;
//	B->Height = Max( GetHeight(B->Left), A->Height ) + 1;
//	return B;
//}
//AVLTree DoubleLeftRightRotation ( AVLTree A ) {
//	/* ע�⣺A������һ�����ӽ��B����B������һ�����ӽ��C */
//	/* ��A��B��C�����ε����������µĸ����C */
//	/* ��B��C���ҵ�����C������ */
//	A->Left = SingleRightRotation(A->Left);
//	/* ��A��C��������C������ */
//	return SingleLeftRotation(A);
//} /*************************************/ /* �ԳƵ��ҵ�������-��˫�����Լ�ʵ�� */ /*************************************/
//AVLTree Insert( AVLTree T, ElementType X ) {
//	/* ��X����AVL��T�У����ҷ��ص������AVL�� */
//	if ( !T ) {
//		/* ��������������½�����һ�������� */
//		T = (AVLTree)malloc(sizeof(struct AVLNode));
//		T->Data = X;
//		T->Height = 0;
//		T->Left = T->Right = NULL;
//	} /* if (�������) ���� */
//	else if ( X < T->Data ) {
//		/* ����T�������� */
//		T->Left = Insert( T->Left, X);
//		/* �����Ҫ���� */
//		if ( GetHeight(T->Left)-GetHeight(T->Right) == 2 )
//			if ( X < T->Left->Data )
//				T = SingleLeftRotation(T);      /* ���� */
//			else
//				T = DoubleLeftRightRotation(T); /* ��-��˫�� */
//	} /* else if (����������) ���� */
//	else if ( X > T->Data ) {
//		/* ����T�������� */
//		T->Right = Insert( T->Right, X );
//		/* �����Ҫ���� */
//		if ( GetHeight(T->Left)-GetHeight(T->Right) == -2 )
//			if ( X > T->Right->Data )
//				T = SingleRightRotation(T);     /* �ҵ��� */
//			else
//				T = DoubleRightLeftRotation(T); /* ��-��˫�� */
//	} /* else if (����������) ���� */
//	/* else X == T->Data��������� */
//	/* �����˸������� */
//	T->Height = Max( GetHeight(T->Left), GetHeight(T->Right) ) + 1;
//	return T;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//									�����������Ĳ�����ɾ��

//BinTree Insert( BinTree BST, ElementType X ) {
//	if( !BST ) {
//		/* ��ԭ��Ϊ�գ����ɲ�����һ�����Ķ��������� */
//		BST = (BinTree)malloc(sizeof(struct TNode));
//		BST->Data = X;
//		BST->Left = BST->Right = NULL;
//	}     else {
//		/* ��ʼ��Ҫ����Ԫ�ص�λ�� */
//		if( X < BST->Data )
//			BST->Left = Insert( BST->Left, X );   /*�ݹ����������*/
//		else  if( X > BST->Data )
//			BST->Right = Insert( BST->Right, X ); /*�ݹ����������*/
//		/* else X�Ѿ����ڣ�ʲô������ */
//	}
//	return BST;
//}
//BinTree Delete( BinTree BST, ElementType X )  {
//	Position Tmp;
//	if( !BST )
//		printf("Ҫɾ����Ԫ��δ�ҵ�");
//	else {
//		if( X < BST->Data )
//			BST->Left = Delete( BST->Left, X );   /* ���������ݹ�ɾ�� */
//		else if( X > BST->Data )
//			BST->Right = Delete( BST->Right, X ); /* ���������ݹ�ɾ�� */
//		else {
//			/* BST����Ҫɾ���Ľ�� */
//			/* �����ɾ����������������ӽ�� */
//			if( BST->Left && BST->Right ) {
//				/* ��������������С��Ԫ�����ɾ����� */
//				Tmp = FindMin( BST->Right );
//				BST->Data = Tmp->Data;                 /* ����������ɾ����СԪ�� */
//				BST->Right = Delete( BST->Right, BST->Data );
//			}             else {
//				/* ��ɾ�������һ�������ӽ�� */
//				Tmp = BST;
//				if( !BST->Left )       /* ֻ���Һ��ӻ����ӽ�� */
//					BST = BST->Right;
//				else                   /* ֻ������ */
//					BST = BST->Left;
//				free( Tmp );
//			}
//		}
//	}
//	return BST;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//����ͬ�� 3/31

//#include<stdio.h>
//#define MaxTree 10
//#define Null -1     //��Null����Ϊ-1��������0����Ϊ�����±�Ϊ0�ĵط��Ա����нڵ�
//typedef char ElementType;
//typedef int Tree;
//struct TreeNode {   //����������ڵ�
//	ElementType Data;
//	Tree Left;
//	Tree Right;
//} T1[MaxTree],T2[MaxTree];
//int N,check[MaxTree];   //check��������Ѱ�����ĸ��ڵ�
//
//Tree BuildTree(struct TreeNode T[]) {
//	int Root=Null,i;    //�տ�ʼ���ڵ���Ϊ�գ���Ϊ������ʱ��ɷ���Null
//	char cl,cr;
//	scanf("%d",&N);
//	if(N) {             //�����Ϊ�����Ļ�
//		for(i=0; i<N; i++) check[i]=0;  //��check������Ϊ0
//		for(i=0; i<N; i++) {
//			scanf("\n%c %c %c",&T[i].Data,&cl,&cr); 	//�ѻ��з�����ǰ��Ե�ǰ��scanf��Ļس��������һ��scanf�����лس���һ������
//			if(cl!='-') {
//				T[i].Left=cl-'0';
//				check[T[i].Left]=1;
//			} else
//				T[i].Left=Null;
//
//			if(cr!='-') {
//				T[i].Right=cr-'0';
//				check[T[i].Right]=1;
//			} else
//				T[i].Right=Null;
//
//		}
//		for(i=0; i<N; i++)
//			if(!check[i])   break;
//		Root=i;
//	}
//	return Root;
//}
//int Isomorphic(Tree R1,Tree R2) {
//	if((R1==Null)&&(R2==Null))      //���Ϊ��������ͬ����
//		return 1;
//	if(((R1==Null)&&(R2!=Null))||((R1!=Null)&&(R2==Null)))	//���һ��Ϊ��һ����Ϊ������ͬ����
//		return 0;
//	if((T1[R1].Data)!=(T2[R2].Data))	//������ݲ�ͬ����ͬ����
//		return 0;
//	//�������Ӷ�Ϊ���ж��Ҷ����Ƿ�ͬ������Ҫ�������������棨1���Ҷ����Ƿ�Ϊ�գ�2���Ƿ�һ�����Ҷ���һ��û�У�3���Ҷ��������Ƿ���ͬ
//	if((T1[R1].Left==Null)&&(T2[R2].Left==Null))
//		return Isomorphic(T1[R1].Right,T2[R2].Right);
//	/* �������������Ӷ���Ϊ�ղ������ݻ���һ���ģ�������ӽ��еݹ�*/
//	if ( ((T1[R1].Left!=Null)&&(T2[R2].Left!=Null))&&((T1[T1[R1].Left].Data)==(T2[T2[R2].Left].Data)) )
//		return ( Isomorphic( T1[R1].Left, T2[R2].Left )&&Isomorphic( T1[R1].Right, T2[R2].Right ) );
//	//�������������ӣ�һ����һ�����ջ��߶����գ��������ݲ�һ������ô�жϵ�һ���������ң������Ƿ���ڶ��������ң��󣩶���ͬ��
//	else
//		return ( Isomorphic( T1[R1].Left, T2[R2].Right)&&Isomorphic( T1[R1].Right, T2[R2].Left ) );
//
//}
//
//
//int main() {
//	freopen("C:\\Users\\fxc\\Documents\\geren\\devc\\ceshi.txt","r",stdin);
//	Tree R1,R2;     //���Ƚ�����������R1��R2Ϊ���ĸ��ڵ�
//	R1=BuildTree(T1);
//	R2=BuildTree(T2);
//	if(Isomorphic(R1,R2))   //Isomorphic�����ж��Ƿ�ͬ��
//		printf("Yes\n");
//	else printf("No\n");
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//											�����������ֱ���
//�������
//void InorderTraversal( BinTree BT ) {
//	if( BT ) {
//		InorderTraversal( BT->Left );         /* �˴������BT���ķ��ʾ��Ǵ�ӡ���� */
//		printf("%d ", BT->Data); 		/* ��������Ϊ���� */
//		InorderTraversal( BT->Right );
//	}
//}
////�������
//void PreorderTraversal( BinTree BT ) {
//	if( BT ) {
//		printf("%d ", BT->Data );
//		PreorderTraversal( BT->Left );
//		PreorderTraversal( BT->Right );
//	}
//}
////�������
//void PostorderTraversal( BinTree BT ) {
//	if( BT ) {
//		PostorderTraversal( BT->Left );
//		PostorderTraversal( BT->Right );
//		printf("%d ", BT->Data);
//	}
//}
////�������
//void LevelorderTraversal ( BinTree BT ) {
//	Queue Q;
//	BinTree T;
//	if ( !BT ) return; /* ���ǿ�����ֱ�ӷ��� */
//	Q = CreatQueue(); /* �����ն���Q */
//	AddQ( Q, BT );
//	while ( !IsEmpty(Q) ) {
//		T = DeleteQ( Q );
//		printf("%d ", T->Data); /* ����ȡ�����еĽ�� */
//		if ( T->Left )
//			AddQ( Q, T->Left );
//		if ( T->Right )
//			AddQ( Q, T->Right );
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//												������������ṹ

//typedef struct TNode *Position;
//typedef Position BinTree; /* ���������� */
//struct TNode {
//	/* ����㶨�� */
//	ElementType Data; /* ������� */
//	BinTree Left;     /* ָ�������� */
//	BinTree Right;    /* ָ�������� */
//};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//										���еĶ������������ʽ�洢

//typedef struct Node *PtrToNode;
//struct Node {
//	/* �����еĽ�� */
//	ElementType Data;
//	PtrToNode Next;
//};
//typedef PtrToNode Position;
//struct QNode {
//	Position Front, Rear;  /* ���е�ͷ��βָ�� */
//	int MaxSize;           /* ����������� */
//};
//typedef struct QNode *Queue;
//bool IsEmpty( Queue Q ) {
//	return ( Q->Front == NULL);
//}
//ElementType DeleteQ( Queue Q ) {
//	Position FrontCell;
//	ElementType FrontElem;
//	if  ( IsEmpty(Q) ) {
//		printf("���п�");
//		return ERROR;
//	}     else {
//		FrontCell = Q->Front;
//		if ( Q->Front == Q->Rear ) /* ������ֻ��һ��Ԫ�� */
//			Q->Front = Q->Rear = NULL; /* ɾ���������Ϊ�� */
//		else
//			Q->Front = Q->Front->Next;
//		FrontElem = FrontCell->Data;
//		free( FrontCell );  /* �ͷű�ɾ�����ռ�  */
//		return  FrontElem;
//	}
//}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//										���еĶ����������˳��洢

//typedef int Position;
//struct QNode {
//	ElementType *Data;     /* �洢Ԫ�ص����� */
//	Position Front, Rear;  /* ���е�ͷ��βָ�� */
//	int MaxSize;           /* ����������� */
//};
//typedef struct QNode *Queue;
//Queue CreateQueue( int MaxSize ) {
//	Queue Q = (Queue)malloc(sizeof(struct QNode));
//	Q->Data = (ElementType *)malloc(MaxSize * sizeof(ElementType));
//	Q->Front = Q->Rear = 0;
//	Q->MaxSize = MaxSize;
//	return Q;
//}
//bool IsFull( Queue Q ) {
//	return ((Q->Rear+1)%Q->MaxSize == Q->Front);
//}
//bool AddQ( Queue Q, ElementType X ) {
//	if ( IsFull(Q) ) {
//		printf("������");
//		return false;
//	}     else {
//		Q->Rear = (Q->Rear+1)%Q->MaxSize;
//		Q->Data[Q->Rear] = X;
//		return true;
//	}
//}
//bool IsEmpty( Queue Q ) {
//	return (Q->Front == Q->Rear);
//}
//ElementType DeleteQ( Queue Q ) {
//	if ( IsEmpty(Q) ) {
//		printf("���п�");
//		return ERROR;
//	}     else  {
//		Q->Front =(Q->Front+1)%Q->MaxSize;
//		return  Q->Data[Q->Front];
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//											��ջ�Ķ������������ʽ�洢

//typedef struct SNode *PtrToSNode;
//struct SNode {
//	ElementType Data;
//	PtrToSNode Next;
//};
//typedef PtrToSNode Stack;
//Stack CreateStack( )  {
//	/* ����һ����ջ��ͷ��㣬���ظý��ָ�� */
//	Stack S;
//	S = (Stack)malloc(sizeof(struct SNode));
//	S->Next = NULL;
//	return S;
//}
//bool IsEmpty ( Stack S ) {
//	/* �ж϶�ջS�Ƿ�Ϊ�գ����Ƿ���true�����򷵻�false */
//	return ( S->Next == NULL );
//}
//bool Push( Stack S, ElementType X ) {
//	/* ��Ԫ��Xѹ���ջS */
//	PtrToSNode TmpCell;
//	TmpCell = (PtrToSNode)malloc(sizeof(struct SNode));
//	TmpCell->Data = X;
//	TmpCell->Next = S->Next;
//	S->Next = TmpCell;
//	return true;
//}
//ElementType Pop( Stack S )   {
//	/* ɾ�������ض�ջS��ջ��Ԫ�� */
//	PtrToSNode FirstCell;
//	ElementType TopElem;
//	if( IsEmpty(S) ) {
//		printf("��ջ��");
//		return ERROR;
//	}     else {
//		FirstCell = S->Next;
//		TopElem = FirstCell->Data;
//		S->Next = FirstCell->Next;
//		free(FirstCell);
//		return TopElem;
//	}
//}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//											��ջ�Ķ����������˳��洢

//typedef int Position;
//struct SNode {
//	ElementType *Data; /* �洢Ԫ�ص����� */
//	Position Top;      /* ջ��ָ�� */
//	int MaxSize;       /* ��ջ������� */
//};
//typedef struct SNode *Stack;
//Stack CreateStack( int MaxSize ) {
//	Stack S = (Stack)malloc(sizeof(struct SNode));
//	S->Data = (ElementType *)malloc(MaxSize * sizeof(ElementType));
//	S->Top = -1;
//	S->MaxSize = MaxSize;
//	return S;
//}
//bool IsFull( Stack S ) {
//	return (S->Top == S->MaxSize-1);
//}
////��ջ
//bool Push( Stack S, ElementType X ) {
//	if ( IsFull(S) ) {
//		printf("��ջ��");
//		return false;
//	}     else {
//		S->Data[++(S->Top)] = X;
//		return true;
//	}
//}
//bool IsEmpty( Stack S ) {
//	return (S->Top == -1);
//}
////��ջ
//ElementType Pop( Stack S ) {
//	if ( IsEmpty(S) ) {
//		printf("��ջ��");
//		return ERROR; 	/* ERROR��ElementType������ֵ����־���� */
//	} else
//		return ( S->Data[(S->Top)--] );
//}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////								���Ա�Ķ������������ʽ��

//typedef struct LNode *PtrToLNode;
//struct LNode {
//	ElementType Data;
//	PtrToLNode Next;
//};
//typedef PtrToLNode Position;
//typedef PtrToLNode List;
//
////���
//int Length( List PtrL ) {
//	List p = PtrL;
//	int j = 0;
//	while ( p ) {
//		p = p->Next;
//		j++;
//	}
//	return j;
//}
//
///* ���� */
//#define ERROR NULL
//Position Find( List L, ElementType X ) {
//	Position p = L; /* pָ��L�ĵ�1����� */
//	while ( p && p->Data!=X )
//		p = p->Next;
//	/* ������������ return p; �滻 */
//	if ( p )
//		return p;
//	else
//		return ERROR;
//}
//
///* ��ͷ���Ĳ��� */
///*ע��:�ڲ���λ�ò���P����γ���Ƶ������ͬ���γ���Ƶ��i������λ�򣨴�1��ʼ��������P��������ָ�룬��P֮ǰ�����½�� */
//bool Insert( List L, ElementType X, Position P ) {
//	/* ����Ĭ��L��ͷ��� */
//	Position tmp, pre;     /* ����P��ǰһ����� */
//	for ( pre=L; pre&&pre->Next!=P; pre=pre->Next ) ;
//	if ( pre==NULL ) {
//		/* P��ָ�Ľ�㲻��L�� */
//		printf("����λ�ò�������\n");
//		return false;
//	}     else {
//		/* �ҵ���P��ǰһ�����pre */         /* ��Pǰ�����½�� */
//		tmp = (Position)malloc(sizeof(struct LNode)); /* ���롢��װ��� */
//		tmp->Data = X;
//		tmp->Next = P;
//		pre->Next = tmp;
//		return true;
//	}
//}
//
///* ��ͷ����ɾ�� */ /*ע��:��ɾ��λ�ò���P����γ���Ƶ������ͬ���γ���Ƶ��i������λ�򣨴�1��ʼ��������P����ɾ�����ָ�� */
//bool Delete( List L, Position P ) {
//	/* ����Ĭ��L��ͷ��� */
//	Position tmp, pre;     /* ����P��ǰһ����� */
//	for ( pre=L; pre&&pre->Next!=P; pre=pre->Next ) ;
//	if ( pre==NULL || P==NULL) {
//		/* P��ָ�Ľ�㲻��L�� */
//		printf("ɾ��λ�ò�������\n");
//		return false;
//	}     else {
//		/* �ҵ���P��ǰһ�����pre */
//		/* ��Pλ�õĽ��ɾ�� */
//		pre->Next = P->Next;
//		free(P);
//		return true;
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////                     ���Ա�Ķ����������˳���

//typedef int Position;
//typedef struct LNode *List;
//struct LNode {
//	ElementType Data[MAXSIZE];
//	Position Last;
//};
//
///* ��ʼ�� */
//List MakeEmpty() {
//	List L;
//	L = (List)malloc(sizeof(struct LNode));
//	L->Last = -1;
//	return L;
//}
//
///* ���� */
//#define ERROR -1
//Position Find( List L, ElementType X ) {
//	Position i = 0;
//	while( i <= L->Last && L->Data[i]!= X )
//		i++;
//	if ( i > L->Last )
//		return ERROR; /* ���û�ҵ������ش�����Ϣ */
//	else  return i;  /* �ҵ��󷵻ص��Ǵ洢λ�� */
//}
//
///* ���� */ /*ע��:�ڲ���λ�ò���P����γ���Ƶ������ͬ���γ���Ƶ��i������λ�򣨴�1��ʼ��������P�Ǵ洢�±�λ�ã���0��ʼ�������߲�1*/
//bool Insert( List L, ElementType X, Position P )  {
//	/* ��L��ָ��λ��Pǰ����һ����Ԫ��X */
//	Position i;
//	if ( L->Last == MAXSIZE-1) {
//		/* ��ռ����������ܲ��� */
//		printf("����");
//		return false;
//	}
//	if ( P<0 || P>L->Last+1 ) {
//		/* ������λ�õĺϷ��� */
//		printf("λ�ò��Ϸ�");
//		return false;
//	}
//	for( i=L->Last; i>=P; i-- )
//		L->Data[i+1] = L->Data[i]; /* ��λ��P���Ժ��Ԫ��˳������ƶ� */
//	L->Data[P] = X;  /* ��Ԫ�ز��� */
//	L->Last++;
//	/* Last��ָ�����Ԫ�� */
//	return true;
//}
//
///* ɾ�� */ /*ע��:��ɾ��λ�ò���P����γ���Ƶ������ͬ���γ���Ƶ��i������λ�򣨴�1��ʼ��������P�Ǵ洢�±�λ�ã���0��ʼ�������߲�1*/
//bool Delete( List L, Position P ) {
//	/* ��L��ɾ��ָ��λ��P��Ԫ�� */
//	Position i;
//	if( P<0 || P>L->Last ) {
//		/* ���ձ�ɾ��λ�õĺϷ��� */
//		printf("λ��%d������Ԫ��", P );
//		return false;
//	}
//	for( i=P+1; i<=L->Last; i++ )
//		L->Data[i-1] = L->Data[i]; /* ��λ��P+1���Ժ��Ԫ��˳����ǰ�ƶ� */
//	L->Last--; /* Last��ָ�����Ԫ�� */
//	return true;
//}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//�ֶ���֮����������к�
//#include<stdio.h>
//int Max3( int A, int B, int C )
//{
//	 //����3�������е����ֵ
// 	return A > B ? A > C ? A : C : B > C ? B : C;
// }
//
// int DivideAndConquer( int List[], int left, int right )
// {
// 	//���η���List[left]��List[right]��������к�
//  	int MaxLeftSum, MaxRightSum; 		// �������������Ľ�
// 	int MaxLeftBorderSum, MaxRightBorderSum; 		//��ſ�ֽ��ߵĽ��
//   	int LeftBorderSum, RightBorderSum;
//    int center, i;
//		if( left == right )
//	   		{
//	   		//�ݹ����ֹ����������ֻ��1������
//	   		 if( List[left] > 0 )
//				return List[left];
//			 else return 0;
//			}
//
//		// ������"��"�Ĺ���
//	center = ( left + right ) / 2;		 // �ҵ��зֵ�
//	 //�ݹ�����������е�����
//	MaxLeftSum = DivideAndConquer( List, left, center );
//	MaxRightSum = DivideAndConquer( List, center+1, right );
//
//	 //�������ֽ��ߵ�������к�
//	  MaxLeftBorderSum = 0;
//	   LeftBorderSum = 0;
//	for( i=center; i>=left; i-- )
//	{
//		//����������ɨ��
//		LeftBorderSum += List[i];
//		if( LeftBorderSum > MaxLeftBorderSum )
//	      MaxLeftBorderSum = LeftBorderSum;
//	} // ���ɨ�����
//
//	MaxRightBorderSum = 0;
//	RightBorderSum = 0;
//	for( i=center+1; i<=right; i++ )
//	{
//		//����������ɨ��
//		RightBorderSum += List[i];
//		if( RightBorderSum > MaxRightBorderSum )
//		MaxRightBorderSum = RightBorderSum;
//	} //�ұ�ɨ�����
//
//	 //���淵��"��"�Ľ��
//	return Max3( MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum );
//}
//
//int MaxSubseqSum3( int List[], int N )
//{
//	//������ǰ2���㷨��ͬ�ĺ����ӿ�
//	return DivideAndConquer( List, 0, N );
//}
//
//int main()
//{
//	int A[8]={4,-3,5,-2,-1,2,6,-2};
//	printf("������к�=%d",MaxSubseqSum3(A,7));
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//���ߴ�����������к�
//#include<stdio.h>
//int MaxSubseqSum4( int A[], int N )
//{
// 		int ThisSum, MaxSum;
//		int i;
//		ThisSum = MaxSum = 0;
//		 for( i = 0; i < N; i++ )
// 			{
//			 ThisSum += A[i]; 					//�����ۼ�
// 			if( ThisSum > MaxSum )
//			 	MaxSum = ThisSum;			//���ָ��������µ�ǰ���
// 			else if( ThisSum < 0 ) 					//�����ǰ���к�Ϊ�����򲻿���ʹ����Ĳ��ֺ���������֮
// 				ThisSum = 0;
//			}
//return MaxSum;
//}
//
//int main()
//{
//	int A[8]={4,-3,5,-2,-1,2,6,-2};
//	printf("������к�=%d",MaxSubseqSum4(A,7));
// }



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//�Ա���ͨ���ؾ����㷨����100�����ʽ100000��
//#include <stdio.h>
//#include <time.h>
//#include <math.h>
//clock_t start,stop;			//clock_t��clock()�������صı�������
//double duration;			//��¼���⺯������ʱ�䣬����Ϊ��λ
//
//double fun_normal(double x)  	//һ��ʵ��
//{
//    int i , n=101;
//    double y=1.0;
//    for(i = 1 ; i < n ; i++){
//        y = y + pow( x , i )/i;
//    }
//    return y;
//}
//
//double fun_9shao(double x)  	//�ؾ���
//{
//    int i;
//    double y , p = 0.01;
//    for(i = 100 ; i > 1 ; i--){
//        p = x*p + 1.0/(i-1);
//    }
//    y = p * x + 1;
//    return y;
//}
//
//void outcome(double result, clock_t start, clock_t stop, const char* fun_name) 		//�������
//{
//    duration = ((double)(stop-start))/CLK_TCK;			//����CLK_TCK(��CLOCKS_PER_SEC)������ʱ��ÿ�����ߵ�ʱ�Ӵ����
//    printf("The output of %s(1.1) is: %.5f\n", fun_name, result);
//    printf("100000 cycles duration of the %s  : %.5fs\n\n", fun_name, duration);
//}
//
//int main()  					//������
//{
//    int i,n=100000;
//    start = clock();
//    for(i = 0; i < n; i++) 		 //�ظ�����100000��
//    {
//        fun_normal(1.1);
//    }
//    stop = clock();
//    outcome(fun_normal(1.1), start, stop, "function_normal");
//    start = clock();
//    for(i = 0; i < n; i++)  	//�ظ�����100000��
//    {
//        fun_9shao(1.1);
//    }
//    stop = clock();
//    outcome(fun_9shao(1.1), start, stop, "function_9shao");
//    return 0;
//
//}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//�ݹ��ӡ����
//#include <stdio.h>
//void printn(int n)
//{
//	if(n)
//	{
//		printn(n-1);
//		printf("%d\n",n);
//	}
// }
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printn(n);
//	return 0;
//}
//
