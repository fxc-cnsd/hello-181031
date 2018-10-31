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

//#define KEYLENGTH 15                   /* 关键词字符串的最大长度 */
//typedef char ElementType[KEYLENGTH+1]; /* 关键词类型用字符串 */
//typedef int Index;                     /* 散列地址类型 */
///******** 以下是单链表的定义 ********/
//typedef struct LNode *PtrToLNode;
//struct LNode {
//	ElementType Data;
//	PtrToLNode Next;
//};
//typedef PtrToLNode Position;
//typedef PtrToLNode List;
///******** 以上是单链表的定义 ********/
//
//typedef struct TblNode *HashTable; /* 散列表类型 */
//struct TblNode {
//	/* 散列表结点定义 */
//	int TableSize; /* 表的最大长度 */
//	List Heads;    /* 指向链表头结点的数组 */
//};
//HashTable CreateTable( int TableSize ) {
//	HashTable H;
//	int i;
//	H = (HashTable)malloc(sizeof(struct TblNode));     /* 保证散列表最大长度是素数，具体见代码5.3 */
//	H->TableSize = NextPrime(TableSize);     /* 以下分配链表头结点数组 */
//	H->Heads = (List)malloc(H->TableSize*sizeof(struct LNode));     /* 初始化表头结点 */
//	for( i=0; i<H->TableSize; i++ ) {
//		H->Heads[i].Data[0] = '\0';
//		H->Heads[i].Next = NULL;
//	}
//	return H;
//}
//Position Find( HashTable H, ElementType Key ) {
//	Position P;
//	Index Pos;
//	Pos = Hash( Key, H->TableSize ); /* 初始散列位置 */
//	P = H->Heads[Pos].Next; /* 从该链表的第1个结点开始 */
//	/* 当未到表尾，并且Key未找到时 */
//	while( P && strcmp(P->Data, Key) )
//		P = P->Next;
//	return P; /* 此时P或者指向找到的结点，或者为NULL */
//}
//bool Insert( HashTable H, ElementType Key ) {
//	Position P, NewCell;
//	Index Pos;
//	P = Find( H, Key );
//	if ( !P ) {
//		/* 关键词未找到，可以插入 */
//		NewCell = (Position)malloc(sizeof(struct LNode));
//		strcpy(NewCell->Data, Key);
//		Pos = Hash( Key, H->TableSize ); /* 初始散列位置 */
//		/* 将NewCell插入为H->Heads[Pos]链表的第1个结点 */
//		NewCell->Next = H->Heads[Pos].Next;
//		H->Heads[Pos].Next = NewCell;
//		return true;
//	}     else {
//		/* 关键词已存在 */
//		printf("键值已存在");
//		return false;
//	}
//}
//void DestroyTable( HashTable H ) {
//	int i;
//	Position P, Tmp;          /* 释放每个链表的结点 */
//	for( i=0; i<H->TableSize; i++ ) {
//		P = H->Heads[i].Next;
//		while( P ) {
//			Tmp = P->Next;
//			free( P );
//			P = Tmp;
//		}
//	}
//	free( H->Heads ); /* 释放头结点数组 */
//	free( H );        /* 释放散列表结点 */
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Position Find( HashTable H, ElementType Key ) {
//	Position CurrentPos, NewPos;
//	int CNum = 0; /* 记录冲突次数 */
//	NewPos = CurrentPos = Hash( Key, H->TableSize ); /* 初始散列位置 */
//	/* 当该位置的单元非空，并且不是要找的元素时，发生冲突 */
//	while( H->Cells[NewPos].Info!=Empty && H->Cells[NewPos].Data!=Key ) {
//		/* 字符串类型的关键词需要 strcmp 函数!! */
//		/* 统计1次冲突，并判断奇偶次 */
//		if( ++CNum%2 ) {
//			/* 奇数次冲突 */
//			NewPos = CurrentPos + (CNum+1)*(CNum+1)/4; /* 增量为+[(CNum+1)/2]^2 */
//			if ( NewPos >= H->TableSize )
//				NewPos = NewPos % H->TableSize; /* 调整为合法地址 */
//		}         else {
//			/* 偶数次冲突 */
//			NewPos = CurrentPos - CNum*CNum/4; /* 增量为-(CNum/2)^2 */
//			while( NewPos < 0 )
//				NewPos += H->TableSize; /* 调整为合法地址 */
//		}
//	}
//	return NewPos; /* 此时NewPos或者是Key的位置，或者是一个空单元的位置（表示找不到）*/
//}
//bool Insert( HashTable H, ElementType Key ) {
//	Position Pos = Find( H, Key ); /* 先检查Key是否已经存在 */
//	if( H->Cells[Pos].Info != Legitimate ) {
//		/* 如果这个单元没有被占，说明Key可以插入在此 */
//		H->Cells[Pos].Info = Legitimate;
//		H->Cells[Pos].Data = Key;         /*字符串类型的关键词需要 strcpy 函数!! */
//		return true;
//	}     else {
//		printf("键值已存在");
//		return false;
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//#define MAXTABLESIZE 100000/* 允许开辟的最大散列表长度 */
//typedef int ElementType;/* 关键词类型用整型 */
//typedef int Index;/* 散列地址类型 */
//typedef Index Position;     /* 数据所在位置与散列地址是同一类型 */
///* 散列单元状态类型，分别对应：有合法元素、空单元、有已删除元素 */
//typedef enum { Legitimate, Empty, Deleted } EntryType;
//typedef struct HashEntry Cell; /* 散列表单元类型 */
//struct HashEntry {
//	ElementType Data; /* 存放元素 */
//	EntryType Info;   /* 单元状态 */
//};
//typedef struct TblNode *HashTable; /* 散列表类型 */
//struct TblNode {	/* 散列表结点定义 */
//	int TableSize; 	/* 表的最大长度 */
//	Cell *Cells;   	/* 存放散列单元数据的数组 */
//};
//int NextPrime( int N ) {
//	/* 返回大于N且不超过MAXTABLESIZE的最小素数 */
//	int i, p = (N%2)? N+2 : N+1; /*从大于N的下一个奇数开始 */
//	while( p <= MAXTABLESIZE ) {
//		for( i=(int)sqrt(p); i>2; i-- )
//			if ( !(p%i) ) break; /* p不是素数 */
//		if ( i==2 ) break; /* for正常结束，说明p是素数 */
//		else  p += 2; /* 否则试探下一个奇数 */
//	}
//	return p;
//}
//HashTable CreateTable( int TableSize ) {
//	HashTable H;
//	int i;
//	H = (HashTable)malloc(sizeof(struct TblNode));     /* 保证散列表最大长度是素数 */
//	H->TableSize = NextPrime(TableSize);     /* 声明单元数组 */
//	H->Cells = (Cell *)malloc(H->TableSize*sizeof(Cell));     /* 初始化单元状态为“空单元” */
//	for( i=0; i<H->TableSize; i++ )
//		H->Cells[i].Info = Empty;
//	return H;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* 基数排序 - 主位优先 */
///* 假设元素最多有MaxDigit个关键字，基数全是同样的Radix */
//#define MaxDigit 4 #define Radix 10 /* 桶元素结点 */
//typedef struct Node *PtrToNode;
//struct Node {
//	int key;
//	PtrToNode next;
//}; /* 桶头结点 */
//struct HeadNode {
//	PtrToNode head, tail;
//};
//typedef struct HeadNode Bucket[Radix];
//int GetDigit ( int X, int D ) { /* 默认次位D=1, 主位D<=MaxDigit */
//	int d, i;
//	for (i=1; i<=D; i++) {
//		d = X%Radix;
//		X /= Radix;
//	}
//	return d;
//}
//void MSD( ElementType A[], int L, int R, int D ) {
//	/* 核心递归函数: 对A[L]...A[R]的第D位数进行排序 */
//	int Di, i, j;
//	Bucket B;
//	PtrToNode tmp, p, List = NULL;
//	if (D==0) return; /* 递归终止条件 */
//	for (i=0; i<Radix; i++) /* 初始化每个桶为空链表 */
//		B[i].head = B[i].tail = NULL;
//	for (i=L; i<=R; i++) {
//		/* 将原始序列逆序存入初始链表List */
//		tmp = (PtrToNode)malloc(sizeof(struct Node));
//		tmp->key = A[i];
//		tmp->next = List;
//		List = tmp;
//	}      /* 下面是分配的过程 */
//	p = List;
//	while (p) {
//		Di = GetDigit(p->key, D); /* 获得当前元素的当前位数字 */
//		/* 从List中摘除 */
//		tmp = p;
//		p = p->next;          /* 插入B[Di]号桶 */
//		if (B[Di].head == NULL)
//			B[Di].tail = tmp;
//		tmp->next = B[Di].head;
//		B[Di].head = tmp;
//	}      /* 下面是收集的过程 */
//	i = j = L; /* i, j记录当前要处理的A[]的左右端下标 */
//	for (Di=0; Di<Radix; Di++) {
//		/* 对于每个桶 */
//		if (B[Di].head) {
//			/* 将非空的桶整桶倒入A[], 递归排序 */
//			p = B[Di].head;
//			while (p) {
//				tmp = p;
//				p = p->next;
//				A[j++] = tmp->key;
//				free(tmp);
//			}              /* 递归对该桶数据排序, 位数减1 */
//			MSD(A, i, j-1, D-1);
//			i = j; /* 为下一个桶对应的A[]左端 */
//		}
//	}
//}
//void MSDRadixSort( ElementType A[], int N ) {
//	/* 统一接口 */
//	MSD(A, 0, N-1, MaxDigit);
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* 基数排序 - 次位优先 */
///* 假设元素最多有MaxDigit个关键字，基数全是同样的Radix */
//#define MaxDigit 4 #define Radix 10 /* 桶元素结点 */
//typedef struct Node *PtrToNode;
//struct Node {
//	int key;
//	PtrToNode next;
//}; /* 桶头结点 */
//struct HeadNode {
//	PtrToNode head, tail;
//};
//typedef struct HeadNode Bucket[Radix];
//int GetDigit ( int X, int D ) {
//	/* 默认次位D=1, 主位D<=MaxDigit */
//	int d, i;
//	for (i=1; i<=D; i++) {
//		d = X % Radix;
//		X /= Radix;
//	}
//	return d;
//}
//void LSDRadixSort( ElementType A[], int N ) {
//	/* 基数排序 - 次位优先 */
//	int D, Di, i;
//	Bucket B;
//	PtrToNode tmp, p, List = NULL;
//	for (i=0; i<Radix; i++) /* 初始化每个桶为空链表 */
//		B[i].head = B[i].tail = NULL;
//	for (i=0; i<N; i++) {
//		/* 将原始序列逆序存入初始链表List */
//		tmp = (PtrToNode)malloc(sizeof(struct Node));
//		tmp->key = A[i];
//		tmp->next = List;
//		List = tmp;
//	}      /* 下面开始排序 */
//	for (D=1; D<=MaxDigit; D++) {
//		/* 对数据的每一位循环处理 */
//		/* 下面是分配的过程 */
//		p = List;
//		while (p) {
//			Di = GetDigit(p->key, D); /* 获得当前元素的当前位数字 */
//			/* 从List中摘除 */
//			tmp = p;
//			p = p->next;              /* 插入B[Di]号桶尾 */
//			tmp->next = NULL;
//			if (B[Di].head == NULL)
//				B[Di].head = B[Di].tail = tmp;
//			else {
//				B[Di].tail->next = tmp;
//				B[Di].tail = tmp;
//			}
//		}          /* 下面是收集的过程 */
//		List = NULL;
//		for (Di=Radix-1; Di>=0; Di--) {
//			/* 将每个桶的元素顺序收集入List */
//			if (B[Di].head) {
//				/* 如果桶不为空 */
//				/* 整桶插入List表头 */
//				B[Di].tail->next = List;
//				List = B[Di].head;
//				B[Di].head = B[Di].tail = NULL; /* 清空桶 */
//			}
//		}
//	}      /* 将List倒入A[]并释放空间 */
//	for (i=0; i<N; i++) {
//		tmp = List;
//		List = List->next;
//		A[i] = tmp->key;
//		free(tmp);
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* 快速排序 */
//ElementType Median3( ElementType A[], int Left, int Right ) {
//	int Center = (Left+Right) / 2;
//	if ( A[Left] > A[Center] )
//		Swap( &A[Left], &A[Center] );
//	if ( A[Left] > A[Right] )
//		Swap( &A[Left], &A[Right] );
//	if ( A[Center] > A[Right] )
//		Swap( &A[Center], &A[Right] );     /* 此时A[Left] <= A[Center] <= A[Right] */
//	Swap( &A[Center], &A[Right-1] ); /* 将基准Pivot藏到右边*/
//	/* 只需要考虑A[Left+1] … A[Right-2] */
//	return  A[Right-1];  /* 返回基准Pivot */
//}
//void Qsort( ElementType A[], int Left, int Right ) {
//	/* 核心递归函数 */
//	int Pivot, Cutoff, Low, High;
//	if ( Cutoff <= Right-Left ) {
//		/* 如果序列元素充分多，进入快排 */
//		Pivot = Median3( A, Left, Right ); /* 选基准 */
//		Low = Left;
//		High = Right-1;
//		while (1) {
//			/*将序列中比基准小的移到基准左边，大的移到右边*/
//			while ( A[++Low] < Pivot ) ;
//			while ( A[--High] > Pivot ) ;
//			if ( Low < High ) Swap( &A[Low], &A[High] );
//			else break;
//		}
//		Swap( &A[Low], &A[Right-1] );   /* 将基准换到正确的位置 */
//		Qsort( A, Left, Low-1 );    /* 递归解决左边 */
//		Qsort( A, Low+1, Right );   /* 递归解决右边 */
//	}      else InsertionSort( A+Left, Right-Left+1 ); /* 元素太少，用简单排序 */
//}
//void QuickSort( ElementType A[], int N ) {
//	/* 统一接口 */
//	Qsort( A, 0, N-1 );
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* 快速排序 - 直接调用库函数 */
//#include <stdlib.h>
///*---------------简单整数排序--------------------*/
//int compare(const void *a, const void *b) {
//	/* 比较两整数。非降序排列 */
//	return (*(int*)a - *(int*)b);
//} /* 调用接口 */
//qsort(A, N, sizeof(int), compare);
///*---------------简单整数排序--------------------*/
///*--------------- 一般情况下，对结构体Node中的某键值key排序 ---------------*/
//struct Node {
//	int key1, key2;
//} A[MAXN];
//int compare2keys(const void *a, const void *b) {
//	/* 比较两种键值：按key1非升序排列；如果key1相等，则按key2非降序排列 */
//	int k;
//	if ( ((const struct Node*)a)->key1 < ((const struct Node*)b)->key1 )
//		k = 1;
//	else if ( ((const struct Node*)a)->key1 > ((const struct Node*)b)->key1 )
//		k = -1;
//	else {
//		/* 如果key1相等 */
//		if ( ((const struct Node*)a)->key2 < ((const struct Node*)b)->key2 )
//			k = -1;
//		else
//			k = 1;
//	}
//	return k;
//} /* 调用接口 */
//qsort(A, N, sizeof(struct Node), compare2keys);
///*--------------- 一般情况下，对结构体Node中的某键值key排序 ---------------*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* 归并排序 - 循环实现 */ /* 这里Merge函数在递归版本中给出 */ /* length = 当前有序子列的长度*/
//void Merge_pass( ElementType A[], ElementType TmpA[], int N, int length ) {
//	/* 两两归并相邻有序子列 */
//	int i, j;
//	for ( i=0; i <= N-2*length; i += 2*length )
//		Merge( A, TmpA, i, i+length, i+2*length-1 );
//	if ( i+length < N ) /* 归并最后2个子列*/
//		Merge( A, TmpA, i, i+length, N-1);
//	else /* 最后只剩1个子列*/
//		for ( j = i; j < N; j++ )
//			TmpA[j] = A[j];
//}
//void Merge_Sort( ElementType A[], int N ) {
//	int length;
//	ElementType *TmpA;
//	length = 1; /* 初始化子序列长度*/
//	TmpA = malloc( N * sizeof( ElementType ) );
//	if ( TmpA != NULL ) {
//		while( length < N ) {
//			Merge_pass( A, TmpA, N, length );
//			length *= 2;
//			Merge_pass( TmpA, A, N, length );
//			length *= 2;
//		}
//		free( TmpA );
//	}      else printf( "空间不足" );
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///* 归并排序 - 递归实现 */ /* L = 左边起始位置, R = 右边起始位置, RightEnd = 右边终点位置*/
//void Merge( ElementType A[], ElementType TmpA[], int L, int R, int RightEnd ) {
//	/* 将有序的A[L]~A[R-1]和A[R]~A[RightEnd]归并成一个有序序列 */
//	int LeftEnd, NumElements, Tmp;
//	int i;
//	LeftEnd = R - 1; /* 左边终点位置 */
//	Tmp = L;         /* 有序序列的起始位置 */
//	NumElements = RightEnd - L + 1;
//	while( L <= LeftEnd && R <= RightEnd ) {
//		if ( A[L] <= A[R] )
//			TmpA[Tmp++] = A[L++]; /* 将左边元素复制到TmpA */
//		else
//			TmpA[Tmp++] = A[R++]; /* 将右边元素复制到TmpA */
//	}
//	while( L <= LeftEnd )
//		TmpA[Tmp++] = A[L++]; /* 直接复制左边剩下的 */
//	while( R <= RightEnd )
//		TmpA[Tmp++] = A[R++]; /* 直接复制右边剩下的 */
//	for( i = 0; i < NumElements; i++, RightEnd -- )
//		A[RightEnd] = TmpA[RightEnd]; /* 将有序的TmpA[]复制回A[] */
//}
//void Msort( ElementType A[], ElementType TmpA[], int L, int RightEnd ) {
//	/* 核心递归排序函数 */
//	int Center;
//	if ( L < RightEnd ) {
//		Center = (L+RightEnd) / 2;
//		Msort( A, TmpA, L, Center );              /* 递归解决左边 */
//		Msort( A, TmpA, Center+1, RightEnd );     /* 递归解决右边 */
//		Merge( A, TmpA, L, Center+1, RightEnd );  /* 合并两段有序序列 */
//	}
//}
//void MergeSort( ElementType A[], int N ) {
//	/* 归并排序 */
//	ElementType *TmpA;
//	TmpA = (ElementType *)malloc(N*sizeof(ElementType));
//	if ( TmpA != NULL ) {
//		Msort( A, TmpA, 0, N-1 );
//		free( TmpA );
//	}      else printf( "空间不足" );
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//void Swap( ElementType *a, ElementType *b ) {
//	ElementType t = *a;
//	*a = *b;
//	*b = t;
//}
//void PercDown( ElementType A[], int p, int N ) {
//	/* 改编代码4.24的PercDown( MaxHeap H, int p )    */   /* 将N个元素的数组中以A[p]为根的子堆调整为最大堆 */
//	int Parent, Child;
//	ElementType X;
//	X = A[p]; /* 取出根结点存放的值 */
//	for( Parent=p; (Parent*2+1)<N; Parent=Child ) {
//		Child = Parent * 2 + 1;
//		if( (Child!=N-1) && (A[Child]<A[Child+1]) )
//			Child++;  /* Child指向左右子结点的较大者 */
//		if( X >= A[Child] ) break; /* 找到了合适位置 */
//		else  /* 下滤X */
//			A[Parent] = A[Child];
//	}
//	A[Parent] = X;
//}
//void HeapSort( ElementType A[], int N )  {
//	/* 堆排序 */      int i;
//	for ( i=N/2-1; i>=0; i-- )/* 建立最大堆 */
//		PercDown( A, i, N );
//	for ( i=N-1; i>0; i-- ) {
//		/* 删除最大堆顶 */
//		Swap( &A[0], &A[i] ); /* 见代码7.1 */
//		PercDown( A, 0, i );
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//void ShellSort( ElementType A[], int N ) {
//	/* 希尔排序 - 用Sedgewick增量序列 */
//	int Si, D, P, i;
//	ElementType Tmp;      /* 这里只列出一小部分增量 */
//	int Sedgewick[] = {929, 505, 209, 109, 41, 19, 5, 1, 0};
//	for ( Si=0; Sedgewick[Si]>=N; Si++ )           ; /* 初始的增量Sedgewick[Si]不能超过待排序列长度 */
//	for ( D=Sedgewick[Si]; D>0; D=Sedgewick[++Si] )
//		for ( P=D; P<N; P++ ) {
//			/* 插入排序*/
//			Tmp = A[P];
//			for ( i=P; i>=D && A[i-D]>Tmp; i-=D )
//				A[i] = A[i-D];
//			A[i] = Tmp;
//		}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//void InsertionSort( ElementType A[], int N ) {
//	/* 插入排序 */      int P, i;
//	ElementType Tmp;
//	for ( P=1; P<N; P++ ) {
//		Tmp = A[P]; /* 取出未排序序列中的第一个元素*/
//		for ( i=P; i>0 && A[i-1]>Tmp; i-- )
//			A[i] = A[i-1]; /*依次与已排序序列中元素比较并右移*/
//		A[i] = Tmp; /* 放进合适的位置 */
//	}
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 邻接表存储 - 拓扑排序算法 */

//bool TopSort( LGraph Graph, Vertex TopOrder[] ) {
//	/* 对Graph进行拓扑排序,  TopOrder[]顺序存储排序后的顶点下标 */
//	int Indegree[MaxVertexNum], cnt;
//	Vertex V;
//	PtrToAdjVNode W;
//	Queue Q = CreateQueue( Graph->Nv );       /* 初始化Indegree[] */
//	for (V=0; V<Graph->Nv; V++)
//		Indegree[V] = 0;              /* 遍历图，得到Indegree[] */
//	for (V=0; V<Graph->Nv; V++)
//		for (W=Graph->G[V].FirstEdge; W; W=W->Next)
//			Indegree[W->AdjV]++; /* 对有向边<V, W->AdjV>累计终点的入度 */
//	/* 将所有入度为0的顶点入列 */
//	for (V=0; V<Graph->Nv; V++)
//		if ( Indegree[V]==0 )
//			AddQ(Q, V);
//	/* 下面进入拓扑排序 */
//	cnt = 0;
//	while( !IsEmpty(Q) ) {
//		V = DeleteQ(Q); /* 弹出一个入度为0的顶点 */
//		TopOrder[cnt++] = V; /* 将之存为结果序列的下一个元素 */
//		/* 对V的每个邻接点W->AdjV */
//		for ( W=Graph->G[V].FirstEdge; W; W=W->Next )
//			if ( --Indegree[W->AdjV] == 0 )/* 若删除V使得W->AdjV入度为0 */
//				AddQ(Q, W->AdjV); /* 则该顶点入列 */
//	} /* while结束*/
//	if ( cnt != Graph->Nv )
//		return false; /* 说明图中有回路, 返回不成功标志 */
//	else
//		return true;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 邻接表存储 - Kruskal最小生成树算法 */
/*-------------------- 顶点并查集定义 --------------------*/

//typedef Vertex ElementType; /* 默认元素可以用非负整数表示 */
//typedef Vertex SetName;     /* 默认用根结点的下标作为集合名称 */
//typedef ElementType SetType[MaxVertexNum]; /* 假设集合元素下标从0开始 */
//
//void InitializeVSet( SetType S, int N ) { /* 初始化并查集 */
//	ElementType X;
//	for ( X=0; X<N; X++ )
//	S[X] = -1;
//	}
//
//void Union( SetType S, SetName Root1, SetName Root2 ) { /* 这里默认Root1和Root2是不同集合的根结点 */     /* 保证小集合并入大集合 */
//	if ( S[Root2] < S[Root1] ) { /* 如果集合2比较大 */
//		S[Root2] += S[Root1];     /* 集合1并入集合2  */
//		S[Root1] = Root2;
//	}
//	else {                         /* 如果集合1比较大 */
//	 S[Root1] += S[Root2];     /* 集合2并入集合1  */
//	 S[Root2] = Root1;
//	}
//}
//
//SetName Find( SetType S, ElementType X ) { /* 默认集合元素全部初始化为-1 */
//	 if ( S[X] < 0 ) /* 找到集合的根 */
//	 	return X;
//	 else
//	 return S[X] = Find( S, S[X] ); /* 路径压缩 */
//	 }
//
//bool CheckCycle( SetType VSet, Vertex V1, Vertex V2 ) {
//	 /* 检查连接V1和V2的边是否在现有的最小生成树子集中构成回路 */
//	Vertex Root1, Root2;
//	Root1 = Find( VSet, V1 ); /* 得到V1所属的连通集名称 */
//	Root2 = Find( VSet, V2 ); /* 得到V2所属的连通集名称 */
//	if( Root1==Root2 ) /* 若V1和V2已经连通，则该边不能要 */
//	return false;
//	else { /* 否则该边可以被收集，同时将V1和V2并入同一连通集 */
//	Union( VSet, Root1, Root2 );
//	return true;
//	}
//}
//
///*-------------------- 并查集定义结束 --------------------*/
///*-------------------- 边的最小堆定义 --------------------*/
//void PercDown( Edge ESet, int p, int N ) {
///* 改编代码4.24的PercDown( MaxHeap H, int p )    */
///* 将N个元素的边数组中以ESet[p]为根的子堆调整为关于Weight的最小堆 */
//	int Parent, Child;
//	struct ENode X;
//	X = ESet[p]; /* 取出根结点存放的值 */
//	for( Parent=p; (Parent*2+1)<N; Parent=Child ) {
//		Child = Parent * 2 + 1;
//		if( (Child!=N-1) && (ESet[Child].Weight>ESet[Child+1].Weight) )
//			Child++;  /* Child指向左右子结点的较小者 */
//		if( X.Weight <= ESet[Child].Weight )
//		break; /* 找到了合适位置 */
//		else  /* 下滤X */
//		ESet[Parent] = ESet[Child];
//		}
//	ESet[Parent] = X;
//}
//
//void InitializeESet( LGraph Graph, Edge ESet ) {
///* 将图的边存入数组ESet，并且初始化为最小堆 */
//	Vertex V;
//	PtrToAdjVNode W;
//	int ECount;     /* 将图的边存入数组ESet */
//	ECount = 0;
//	for ( V=0; V<Graph->Nv; V++ )
//		for ( W=Graph->G[V].FirstEdge; W; W=W->Next )
//			if ( V < W->AdjV ) { /* 避免重复录入无向图的边，只收V1<V2的边 */
//			ESet[ECount].V1 = V;
//			ESet[ECount].V2 = W->AdjV;
//			ESet[ECount++].Weight = W->Weight;
//			}     /* 初始化为最小堆 */
//	for ( ECount=Graph->Ne/2; ECount>=0; ECount-- )
//		PercDown( ESet, ECount, Graph->Ne );
//}
//
//int GetEdge( Edge ESet, int CurrentSize ) {
///* 给定当前堆的大小CurrentSize，将当前最小边位置弹出并调整堆 */
///* 将最小边与当前堆的最后一个位置的边交换 */
//	Swap( &ESet[0], &ESet[CurrentSize-1]);     /* 将剩下的边继续调整成最小堆 */
//	PercDown( ESet, 0, CurrentSize-1 );
//	return CurrentSize-1;
//	/* 返回最小边所在位置 */
//}
///*-------------------- 最小堆定义结束 --------------------*/
//
//int Kruskal( LGraph Graph, LGraph MST ) {
///* 将最小生成树保存为邻接表存储的图MST，返回最小权重和 */
//	WeightType TotalWeight;
//	int ECount, NextEdge;
//	SetType VSet; /* 顶点数组 */
//	Edge ESet;    /* 边数组 */
//	InitializeVSet( VSet, Graph->Nv ); /* 初始化顶点并查集 */
//	ESet = (Edge)malloc( sizeof(struct ENode)*Graph->Ne );
//	InitializeESet( Graph, ESet ); /* 初始化边的最小堆 */
//	/* 创建包含所有顶点但没有边的图。注意用邻接表版本 */
//	MST = CreateGraph(Graph->Nv);
//	TotalWeight = 0; /* 初始化权重和     */
//	ECount = 0;      /* 初始化收录的边数 */
//	NextEdge = Graph->Ne; /* 原始边集的规模 */
//	while ( ECount < Graph->Nv-1 ) {  /* 当收集的边不足以构成树时 */
//		NextEdge = GetEdge( ESet, NextEdge ); /* 从边集中得到最小边的位置 */
//		if (NextEdge < 0) /* 边集已空 */
//			break;         /* 如果该边的加入不构成回路，即两端结点不属于同一连通集 */
//		if ( CheckCycle( VSet, ESet[NextEdge].V1, ESet[NextEdge].V2 )==true ) {             /* 将该边插入MST */
//			InsertEdge( MST, ESet+NextEdge );
//			TotalWeight += ESet[NextEdge].Weight; /* 累计权重 */
//			ECount++; /* 生成树中边数加1 */
//			}
//	}
//	if ( ECount < Graph->Nv-1 )
//	TotalWeight = -1; /* 设置错误标记，表示生成树不存在 */
//	return TotalWeight;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/* 邻接矩阵存储 - Prim最小生成树算法 */

//Vertex FindMinDist( MGraph Graph, WeightType dist[] ) {
//	/* 返回未被收录顶点中dist最小者 */
//	Vertex MinV, V;
//	WeightType MinDist = INFINITY;
//	for (V=0; V<Graph->Nv; V++) {
//		if ( dist[V]!=0 && dist[V]<MinDist) {
//			/* 若V未被收录，且dist[V]更小 */
//			MinDist = dist[V]; /* 更新最小距离 */
//			MinV = V; /* 更新对应顶点 */
//		}
//	}
//	if (MinDist < INFINITY) /* 若找到最小dist */
//		return MinV; /* 返回对应的顶点下标 */
//	else return ERROR;  /* 若这样的顶点不存在，返回-1作为标记 */
//}
//int Prim( MGraph Graph, LGraph MST ) {
//	/* 将最小生成树保存为邻接表存储的图MST，返回最小权重和 */
//	WeightType dist[MaxVertexNum], TotalWeight;
//	Vertex parent[MaxVertexNum], V, W;
//	int VCount;
//	Edge E;
//	/* 初始化。默认初始点下标是0 */
//	for (V=0; V<Graph->Nv; V++) {
//		/* 这里假设若V到W没有直接的边，则Graph->G[V][W]定义为INFINITY */
//		dist[V] = Graph->G[0][V];
//		parent[V] = 0; /* 暂且定义所有顶点的父结点都是初始点0 */
//	}
//	TotalWeight = 0; /* 初始化权重和     */
//	VCount = 0;      /* 初始化收录的顶点数 */
//	/* 创建包含所有顶点但没有边的图。注意用邻接表版本 */
//	MST = CreateGraph(Graph->Nv);
//	E = (Edge)malloc( sizeof(struct ENode) ); /* 建立空的边结点 */
//	/* 将初始点0收录进MST */
//	dist[0] = 0;
//	VCount ++;
//	parent[0] = -1; /* 当前树根是0 */
//	while (1) {
//		V = FindMinDist( Graph, dist );
//		/* V = 未被收录顶点中dist最小者 */
//		if ( V==ERROR ) /* 若这样的V不存在 */
//			break;   /* 算法结束 */
//		/* 将V及相应的边<parent[V], V>收录进MST */
//		E->V1 = parent[V];
//		E->V2 = V;
//		E->Weight = dist[V];
//		InsertEdge( MST, E );
//		TotalWeight += dist[V];
//		dist[V] = 0;
//		VCount++;
//
//		for( W=0; W<Graph->Nv; W++ ) /* 对图中的每个顶点W */
//			if ( dist[W]!=0 && Graph->G[V][W]<INFINITY ) {
//				/* 若W是V的邻接点并且未被收录 */
//				if ( Graph->G[V][W] < dist[W] ) {
//					/* 若收录V使得dist[W]变小 */
//					dist[W] = Graph->G[V][W]; /* 更新dist[W] */
//					parent[W] = V; /* 更新树 */
//				}
//			}
//	} /* while结束*/
//	if ( VCount < Graph->Nv ) /* MST中收的顶点不到|V|个 */
//		TotalWeight = ERROR;
//	return TotalWeight;   /* 算法执行完毕，返回最小权重和或错误标记 */
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 邻接矩阵存储 - 多源最短路算法 */

//bool Floyd( MGraph Graph, WeightType D[][MaxVertexNum], Vertex path[][MaxVertexNum] ) {
//	Vertex i, j, k;     /* 初始化 */
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
//					if ( i==j && D[i][j]<0 ) /* 若发现负值圈 */
//						return false; /* 不能正确解决，返回错误标记 */
//					path[i][j] = k;
//				}
//	return true; /* 算法执行完毕，返回正确标记 */
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 邻接矩阵存储 - 有权图的单源最短路算法 */

//Vertex FindMinDist( MGraph Graph, int dist[], int collected[] ) {
//	/* 返回未被收录顶点中dist最小者 */
//	Vertex MinV, V;
//	int MinDist = INFINITY;
//	for (V=0; V<Graph->Nv; V++) {
//		if ( collected[V]==false && dist[V]<MinDist) {
//			/* 若V未被收录，且dist[V]更小 */
//			MinDist = dist[V]; /* 更新最小距离 */
//			MinV = V; /* 更新对应顶点 */
//		}
//	}
//	if (MinDist < INFINITY) /* 若找到最小dist */
//		return MinV; /* 返回对应的顶点下标 */
//	else return ERROR;  /* 若这样的顶点不存在，返回错误标记 */
//}
//bool Dijkstra( MGraph Graph, int dist[], int path[], Vertex S ) {
//	int collected[MaxVertexNum];
//	Vertex V, W;     /* 初始化：此处默认邻接矩阵中不存在的边用INFINITY表示 */
//	for ( V=0; V<Graph->Nv; V++ ) {
//		dist[V] = Graph->G[S][V];
//		if ( dist[V]<INFINITY )
//			path[V] = S;
//		else
//			path[V] = -1;
//		collected[V] = false;
//	}     /* 先将起点收入集合 */
//	dist[S] = 0;
//	collected[S] = true;
//	while (1) {
//		/* V = 未被收录顶点中dist最小者 */
//		V = FindMinDist( Graph, dist, collected );
//		if ( V==ERROR ) /* 若这样的V不存在 */
//			break;      /* 算法结束 */
//		collected[V] = true;  /* 收录V */
//		for( W=0; W<Graph->Nv; W++ ) /* 对图中的每个顶点W */
//			/* 若W是V的邻接点并且未被收录 */
//			if ( collected[W]==false && Graph->G[V][W]<INFINITY ) {
//				if ( Graph->G[V][W]<0 ) /* 若有负边 */
//					return false; /* 不能正确解决，返回错误标记 */                 /* 若收录V使得dist[W]变小 */
//				if ( dist[V]+Graph->G[V][W] < dist[W] ) {
//					dist[W] = dist[V]+Graph->G[V][W]; /* 更新dist[W] */
//					path[W] = V; /* 更新S到W的路径 */
//				}
//			}
//	} /* while结束*/
//	return true; /* 算法执行完毕，返回正确标记 */
//}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/* 邻接表存储 - 无权图的单源最短路算法 */ /* dist[]和path[]全部初始化为-1 */

//void Unweighted ( LGraph Graph, int dist[], int path[], Vertex S ) {
//	Queue Q;
//	Vertex V;
//	PtrToAdjVNode W;
//	Q = CreateQueue( Graph->Nv ); /* 创建空队列, MaxSize为外部定义的常数 */
//	dist[S] = 0; /* 初始化源点 */
//	AddQ (Q, S);
//	while( !IsEmpty(Q) ) {
//		V = DeleteQ(Q);
//		for ( W=Graph->G[V].FirstEdge; W; W=W->Next ) /* 对V的每个邻接点W->AdjV */
//			if ( dist[W->AdjV]==-1 ) {
//				/* 若W->AdjV未被访问过 */
//				dist[W->AdjV] = dist[V]+1; /* W->AdjV到S的距离更新 */
//				path[W->AdjV] = V; /* 将V记录在S到W->AdjV的路径上 */
//				AddQ(Q, W->AdjV);
//			}
//	} /* while结束*/
//}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 邻接矩阵存储的图 - BFS */ /* IsEdge(Graph, V, W)检查<V, W>是否图Graph中的一条边，即W是否V的邻接点。  */
/* 此函数根据图的不同类型要做不同的实现，关键取决于对不存在的边的表示方法。*/
/* 例如对有权图, 如果不存在的边被初始化为INFINITY, 则函数实现如下:  */
//bool IsEdge( MGraph Graph, Vertex V, Vertex W ) {
//	return Graph->G[V][W]<INFINITY ? true : false;
//} /* Visited[]为全局变量，已经初始化为false */
//void BFS ( MGraph Graph, Vertex S, void (*Visit)(Vertex) ) {
//	/* 以S为出发点对邻接矩阵存储的图Graph进行BFS搜索 */
//	Queue Q;
//	Vertex V, W;
//	Q = CreateQueue( MaxSize ); /* 创建空队列, MaxSize为外部定义的常数 */
//	/* 访问顶点S：此处可根据具体访问需要改写 */
//	Visit( S );
//	Visited[S] = true; /* 标记S已访问 */
//	AddQ(Q, S); /* S入队列 */
//	while ( !IsEmpty(Q) ) {
//		V = DeleteQ(Q);  /* 弹出V */
//		for( W=0; W<Graph->Nv; W++ ) /* 对图中的每个顶点W */
//			/* 若W是V的邻接点并且未访问过 */
//			if ( !Visited[W] && IsEdge(Graph, V, W) ) {
//				/* 访问顶点W */
//				Visit( W );
//				Visited[W] = true; /* 标记W已访问 */
//				AddQ(Q, W); /* W入队列 */
//			}
//	} /* while结束*/
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 邻接表存储的图 - DFS */
//void Visit( Vertex V ) {
//	printf("正在访问顶点%d\n", V);
//} /* Visited[]为全局变量，已经初始化为false */
//void DFS( LGraph Graph, Vertex V, void (*Visit)(Vertex) ) {
//	/* 以V为出发点对邻接表存储的图Graph进行DFS搜索 */
//	PtrToAdjVNode W;
//	Visit( V ); /* 访问第V个顶点 */
//	Visited[V] = true; /* 标记V已访问 */
//	for( W=Graph->G[V].FirstEdge; W; W=W->Next ) /* 对V的每个邻接点W->AdjV */
//		if ( !Visited[W->AdjV] )    /* 若W->AdjV未被访问 */
//			DFS( Graph, W->AdjV, Visit );    /* 则递归访问之 */
//}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//																图的邻接表表示法

///* 图的邻接表表示法 */
//#define MaxVertexNum 100
///* 最大顶点数设为100 */
//typedef int Vertex;         	/* 用顶点下标表示顶点,为整型 */
//typedef int WeightType;       	 /* 边的权值设为整型 */
//typedef char DataType;       	 /* 顶点存储的数据类型设为字符型 */
///* 边的定义 */
//typedef struct ENode *PtrToENode;
//struct ENode {
//	Vertex V1, V2;      /* 有向边<V1, V2> */
//	WeightType Weight;  /* 权重 */
//};
//typedef PtrToENode Edge; /* 邻接点的定义 */
//typedef struct AdjVNode *PtrToAdjVNode;
//struct AdjVNode {
//	Vertex AdjV;        /* 邻接点下标 */
//	WeightType Weight;  /* 边权重 */
//	PtrToAdjVNode Next;    /* 指向下一个邻接点的指针 */
//}; /* 顶点表头结点的定义 */
//typedef struct Vnode {
//	PtrToAdjVNode FirstEdge;/* 边表头指针 */
//	DataType Data;            /* 存顶点的数据 */     /* 注意：很多情况下，顶点无数据，此时Data可以不用出现 */
//} AdjList[MaxVertexNum];    /* AdjList是邻接表类型 */
///* 图结点的定义 */
//typedef struct GNode *PtrToGNode;
//struct GNode {
//	int Nv;     /* 顶点数 */
//	int Ne;     /* 边数   */
//	AdjList G;  /* 邻接表 */
//};
//typedef PtrToGNode LGraph; /* 以邻接表方式存储的图类型 */
//LGraph CreateGraph( int VertexNum ) {
//	/* 初始化一个有VertexNum个顶点但没有边的图 */
//	Vertex V;
//	LGraph Graph;
//	Graph = (LGraph)malloc( sizeof(struct GNode) ); /* 建立图 */
//	Graph->Nv = VertexNum;
//	Graph->Ne = 0;     /* 初始化邻接表头指针 */     /* 注意：这里默认顶点编号从0开始，到(Graph->Nv - 1) */
//	for (V=0; V<Graph->Nv; V++)
//		Graph->G[V].FirstEdge = NULL;
//	return Graph;
//}
//void InsertEdge( LGraph Graph, Edge E ) {
//	PtrToAdjVNode NewNode;          /* 插入边 <V1, V2> */     /* 为V2建立新的邻接点 */
//	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
//	NewNode->AdjV = E->V2;
//	NewNode->Weight = E->Weight;     /* 将V2插入V1的表头 */
//	NewNode->Next = Graph->G[E->V1].FirstEdge;
//	Graph->G[E->V1].FirstEdge = NewNode;              /* 若是无向图，还要插入边 <V2, V1> */
///* 为V1建立新的邻接点 */
//	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
//	NewNode->AdjV = E->V1;
//	NewNode->Weight = E->Weight;     /* 将V1插入V2的表头 */
//	NewNode->Next = Graph->G[E->V2].FirstEdge;
//	Graph->G[E->V2].FirstEdge = NewNode;
//}
//LGraph BuildGraph() {
//	LGraph Graph;
//	Edge E;
//	Vertex V;
//	int Nv, i;
//	scanf("%d", &Nv);   /* 读入顶点个数 */
//	Graph = CreateGraph(Nv); /* 初始化有Nv个顶点但没有边的图 */
//	scanf("%d", &(Graph->Ne));   /* 读入边数 */
//	if ( Graph->Ne != 0 ) {
//		/* 如果有边 */
//		E = (Edge)malloc( sizeof(struct ENode) ); /* 建立边结点 */
//		/* 读入边，格式为"起点 终点 权重"，插入邻接矩阵 */
//		for (i=0; i<Graph->Ne; i++) {
//			scanf("%d %d %d", &E->V1, &E->V2, &E->Weight);              /* 注意：如果权重不是整型，Weight的读入格式要改 */
//			InsertEdge( Graph, E );
//		}
//	}      /* 如果顶点有数据的话，读入数据 */
//	for (V=0; V<Graph->Nv; V++)
//		scanf(" %c", &(Graph->G[V].Data));
//	return Graph;
//}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////																图的邻接矩阵表示法
//
///* 图的邻接矩阵表示法 */
//#define MaxVertexNum 100    /* 最大顶点数设为100 */
//#define INFINITY 65535        /* ∞设为双字节无符号整数的最大值65535*/
//typedef int Vertex;         /* 用顶点下标表示顶点,为整型 */
//typedef int WeightType;        /* 边的权值设为整型 */
//typedef char DataType;        /* 顶点存储的数据类型设为字符型 */
///* 边的定义 */
//typedef struct ENode *PtrToENode;
//struct ENode {
//	Vertex V1, V2;      /* 有向边<V1, V2> */
//	WeightType Weight;  /* 权重 */
//};
//typedef PtrToENode Edge;         /* 图结点的定义 */
//typedef struct GNode *PtrToGNode;
//struct GNode {
//	int Nv;  	/* 顶点数 */
//	int Ne;  	/* 边数   */
//	WeightType G[MaxVertexNum][MaxVertexNum];	 /* 邻接矩阵 */
//	DataType Data[MaxVertexNum];     	 /* 存顶点的数据 */
//	/* 注意：很多情况下，顶点无数据，此时Data[]可以不用出现 */
//};
//typedef PtrToGNode MGraph; 		/* 以邻接矩阵存储的图类型 */
//
//MGraph CreateGraph( int VertexNum ) {
//	/* 初始化一个有VertexNum个顶点但没有边的图 */
//	Vertex V, W;
//	MGraph Graph;
//	Graph = (MGraph)malloc(sizeof(struct GNode)); 		/* 建立图 */
//	Graph->Nv = VertexNum;
//	Graph->Ne = 0;     /* 初始化邻接矩阵 */     /* 注意：这里默认顶点编号从0开始，到(Graph->Nv - 1) */
//	for (V=0; V<Graph->Nv; V++)
//		for (W=0; W<Graph->Nv; W++)
//			Graph->G[V][W] = INFINITY;
//	return Graph;
//}
//
//void InsertEdge( MGraph Graph, Edge E ) {
//	/* 插入边 <V1, V2> */
//	Graph->G[E->V1][E->V2] = E->Weight;
//	/* 若是无向图，还要插入边<V2, V1> */
//	Graph->G[E->V2][E->V1] = E->Weight;
//}
//
//MGraph BuildGraph() {
//	MGraph Graph;
//	Edge E;
//	Vertex V;
//	int Nv, i;
//	scanf("%d", &Nv);   /* 读入顶点个数 */
//	Graph = CreateGraph(Nv); /* 初始化有Nv个顶点但没有边的图 */
//	scanf("%d", &(Graph->Ne));   /* 读入边数 */
//	if ( Graph->Ne != 0 ) {
//		/* 如果有边 */
//		E = (Edge)malloc(sizeof(struct ENode)); /* 建立边结点 */
//		/* 读入边，格式为"起点 终点 权重"，插入邻接矩阵 */
//		for (i=0; i<Graph->Ne; i++) {
//			scanf("%d %d %d", &E->V1, &E->V2, &E->Weight);
//			/* 注意：如果权重不是整型，Weight的读入格式要改 */
//			InsertEdge( Graph, E );
//		}
//	}      /* 如果顶点有数据的话，读入数据 */
//	for (V=0; V<Graph->Nv; V++)
//		scanf(" %c", &(Graph->Data[V]));
//	return Graph;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//														集合及运算

//#define MAXN 1000
///* 集合最大元素个数 */
//typedef int ElementType;           /* 默认元素可以用非负整数表示 */
//typedef int SetName;               /* 默认用根结点的下标作为集合名称 */
//typedef ElementType SetType[MAXN]; /* 假设集合元素下标从0开始 */
//void Union( SetType S, SetName Root1, SetName Root2 ) {
//	/* 这里默认Root1和Root2是不同集合的根结点 */
//	/* 保证小集合并入大集合 */
//	if ( S[Root2] < S[Root1] ) {
//		/* 如果集合2比较大 */
//		S[Root2] += S[Root1];     /* 集合1并入集合2  */
//		S[Root1] = Root2;
//	}     else {
//		/* 如果集合1比较大 */
//		S[Root1] += S[Root2];     /* 集合2并入集合1  */
//		S[Root2] = Root1;
//	}
//}
//SetName Find( SetType S, ElementType X ) {
//	/* 默认集合元素全部初始化为-1 */
//	if ( S[X] < 0 ) /* 找到集合的根 */
//		return X;
//	else
//		return S[X] = Find( S, S[X] ); /* 路径压缩 */
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//													堆的定义与操作

//typedef struct HNode *Heap; /* 堆的类型定义 */
//struct HNode {
//	ElementType *Data; /* 存储元素的数组 */
//	int Size;          /* 堆中当前元素个数 */
//	int Capacity;      /* 堆的最大容量 */
//};
//typedef Heap MaxHeap; /* 最大堆 */
//typedef Heap MinHeap; /* 最小堆 */
//#define MAXDATA 1000  /* 该值应根据具体情况定义为大于堆中所有可能元素的值 */
//MaxHeap CreateHeap( int MaxSize ) { /* 创建容量为MaxSize的空的最大堆 */
//	MaxHeap H = (MaxHeap)malloc(sizeof(struct HNode));
//	H->Data = (ElementType *)malloc((MaxSize+1)*sizeof(ElementType));
//	H->Size = 0;
//	H->Capacity = MaxSize;
//	H->Data[0] = MAXDATA; /* 定义"哨兵"为大于堆中所有可能元素的值*/
//	return H;
//}
//bool IsFull( MaxHeap H ) {
//	return (H->Size == H->Capacity);
//}
//bool Insert( MaxHeap H, ElementType X ) {
//	/* 将元素X插入最大堆H，其中H->Data[0]已经定义为哨兵 */
//	int i;
//	if ( IsFull(H) ) {
//		printf("最大堆已满");
//		return false;
//	}
//	i = ++H->Size; /* i指向插入后堆中的最后一个元素的位置 */
//	for ( ; H->Data[i/2] < X; i/=2 )
//		H->Data[i] = H->Data[i/2]; /* 上滤X */
//	H->Data[i] = X; /* 将X插入 */
//	return true;
//}
//#define ERROR -1 /* 错误标识应根据具体情况定义为堆中不可能出现的元素值 */
//bool IsEmpty( MaxHeap H ) {
//	return (H->Size == 0);
//}
//ElementType DeleteMax( MaxHeap H ) {
//	/* 从最大堆H中取出键值为最大的元素，并删除一个结点 */
//	int Parent, Child;
//	ElementType MaxItem, X;
//	if ( IsEmpty(H) ) {
//		printf("最大堆已为空");
//		return ERROR;
//	}
//	MaxItem = H->Data[1]; /* 取出根结点存放的最大值 */
//	/* 用最大堆中最后一个元素从根结点开始向上过滤下层结点 */
//	X = H->Data[H->Size--]; /* 注意当前堆的规模要减小 */
//	for( Parent=1; Parent*2<=H->Size; Parent=Child ) {
//		Child = Parent * 2;
//		if( (Child!=H->Size) && (H->Data[Child]<H->Data[Child+1]) )
//			Child++;  /* Child指向左右子结点的较大者 */
//		if( X >= H->Data[Child] ) break; /* 找到了合适位置 */
//		else  /* 下滤X */
//			H->Data[Parent] = H->Data[Child];
//	}
//	H->Data[Parent] = X;
//	return MaxItem;
//}  /*----------- 建造最大堆 -----------*/
//void PercDown( MaxHeap H, int p ) {
//	/* 下滤：将H中以H->Data[p]为根的子堆调整为最大堆 */
//	int Parent, Child;
//	ElementType X;
//	X = H->Data[p]; /* 取出根结点存放的值 */
//	for( Parent=p; Parent*2<=H->Size; Parent=Child ) {
//		Child = Parent * 2;
//		if( (Child!=H->Size) && (H->Data[Child]<H->Data[Child+1]) )
//			Child++;  /* Child指向左右子结点的较大者 */
//		if( X >= H->Data[Child] ) break; /* 找到了合适位置 */
//		else  /* 下滤X */
//			H->Data[Parent] = H->Data[Child];
//	}
//	H->Data[Parent] = X;
//}
//void BuildHeap( MaxHeap H ) {
//	/* 调整H->Data[]中的元素，使满足最大堆的有序性  */
//	/* 这里假设所有H->Size个元素已经存在H->Data[]中 */
//	int i;     /* 从最后一个结点的父节点开始，到根结点1 */
//	for( i = H->Size/2; i>0; i-- )
//		PercDown( H, i );
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//											平衡二叉树的旋转与插入

//typedef struct AVLNode *Position;
//typedef Position AVLTree; /* AVL树类型 */
//struct AVLNode {
//	ElementType Data; /* 结点数据 */
//	AVLTree Left;     /* 指向左子树 */
//	AVLTree Right;    /* 指向右子树 */
//	int Height;       /* 树高 */
//};
//int Max ( int a, int b ) {
//	return a > b ? a : b;
//}
//AVLTree SingleLeftRotation ( AVLTree A ) {
//	/* 注意：A必须有一个左子结点B */
//	/* 将A与B做左单旋，更新A与B的高度，返回新的根结点B */
//	AVLTree B = A->Left;
//	A->Left = B->Right;
//	B->Right = A;
//	A->Height = Max( GetHeight(A->Left), GetHeight(A->Right) ) + 1;
//	B->Height = Max( GetHeight(B->Left), A->Height ) + 1;
//	return B;
//}
//AVLTree DoubleLeftRightRotation ( AVLTree A ) {
//	/* 注意：A必须有一个左子结点B，且B必须有一个右子结点C */
//	/* 将A、B与C做两次单旋，返回新的根结点C */
//	/* 将B与C做右单旋，C被返回 */
//	A->Left = SingleRightRotation(A->Left);
//	/* 将A与C做左单旋，C被返回 */
//	return SingleLeftRotation(A);
//} /*************************************/ /* 对称的右单旋与右-左双旋请自己实现 */ /*************************************/
//AVLTree Insert( AVLTree T, ElementType X ) {
//	/* 将X插入AVL树T中，并且返回调整后的AVL树 */
//	if ( !T ) {
//		/* 若插入空树，则新建包含一个结点的树 */
//		T = (AVLTree)malloc(sizeof(struct AVLNode));
//		T->Data = X;
//		T->Height = 0;
//		T->Left = T->Right = NULL;
//	} /* if (插入空树) 结束 */
//	else if ( X < T->Data ) {
//		/* 插入T的左子树 */
//		T->Left = Insert( T->Left, X);
//		/* 如果需要左旋 */
//		if ( GetHeight(T->Left)-GetHeight(T->Right) == 2 )
//			if ( X < T->Left->Data )
//				T = SingleLeftRotation(T);      /* 左单旋 */
//			else
//				T = DoubleLeftRightRotation(T); /* 左-右双旋 */
//	} /* else if (插入左子树) 结束 */
//	else if ( X > T->Data ) {
//		/* 插入T的右子树 */
//		T->Right = Insert( T->Right, X );
//		/* 如果需要右旋 */
//		if ( GetHeight(T->Left)-GetHeight(T->Right) == -2 )
//			if ( X > T->Right->Data )
//				T = SingleRightRotation(T);     /* 右单旋 */
//			else
//				T = DoubleRightLeftRotation(T); /* 右-左双旋 */
//	} /* else if (插入右子树) 结束 */
//	/* else X == T->Data，无须插入 */
//	/* 别忘了更新树高 */
//	T->Height = Max( GetHeight(T->Left), GetHeight(T->Right) ) + 1;
//	return T;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//									二叉搜索树的插入与删除

//BinTree Insert( BinTree BST, ElementType X ) {
//	if( !BST ) {
//		/* 若原树为空，生成并返回一个结点的二叉搜索树 */
//		BST = (BinTree)malloc(sizeof(struct TNode));
//		BST->Data = X;
//		BST->Left = BST->Right = NULL;
//	}     else {
//		/* 开始找要插入元素的位置 */
//		if( X < BST->Data )
//			BST->Left = Insert( BST->Left, X );   /*递归插入左子树*/
//		else  if( X > BST->Data )
//			BST->Right = Insert( BST->Right, X ); /*递归插入右子树*/
//		/* else X已经存在，什么都不做 */
//	}
//	return BST;
//}
//BinTree Delete( BinTree BST, ElementType X )  {
//	Position Tmp;
//	if( !BST )
//		printf("要删除的元素未找到");
//	else {
//		if( X < BST->Data )
//			BST->Left = Delete( BST->Left, X );   /* 从左子树递归删除 */
//		else if( X > BST->Data )
//			BST->Right = Delete( BST->Right, X ); /* 从右子树递归删除 */
//		else {
//			/* BST就是要删除的结点 */
//			/* 如果被删除结点有左右两个子结点 */
//			if( BST->Left && BST->Right ) {
//				/* 从右子树中找最小的元素填充删除结点 */
//				Tmp = FindMin( BST->Right );
//				BST->Data = Tmp->Data;                 /* 从右子树中删除最小元素 */
//				BST->Right = Delete( BST->Right, BST->Data );
//			}             else {
//				/* 被删除结点有一个或无子结点 */
//				Tmp = BST;
//				if( !BST->Left )       /* 只有右孩子或无子结点 */
//					BST = BST->Right;
//				else                   /* 只有左孩子 */
//					BST = BST->Left;
//				free( Tmp );
//			}
//		}
//	}
//	return BST;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//树的同构 3/31

//#include<stdio.h>
//#define MaxTree 10
//#define Null -1     //将Null定义为-1而不能是0，因为数组下标为0的地方仍保存有节点
//typedef char ElementType;
//typedef int Tree;
//struct TreeNode {   //定义二叉树节点
//	ElementType Data;
//	Tree Left;
//	Tree Right;
//} T1[MaxTree],T2[MaxTree];
//int N,check[MaxTree];   //check数组用于寻找树的根节点
//
//Tree BuildTree(struct TreeNode T[]) {
//	int Root=Null,i;    //刚开始将节点置为空，若为空树的时候可返回Null
//	char cl,cr;
//	scanf("%d",&N);
//	if(N) {             //如果不为空树的话
//		for(i=0; i<N; i++) check[i]=0;  //将check数组置为0
//		for(i=0; i<N; i++) {
//			scanf("\n%c %c %c",&T[i].Data,&cl,&cr); 	//把换行符放在前面吃掉前面scanf后的回车，而最后一个scanf不能有回车，一举两得
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
//	if((R1==Null)&&(R2==Null))      //如果为空树则是同构的
//		return 1;
//	if(((R1==Null)&&(R2!=Null))||((R1!=Null)&&(R2==Null)))	//如果一个为空一个不为空则不是同构的
//		return 0;
//	if((T1[R1].Data)!=(T2[R2].Data))	//如果数据不同则不是同构的
//		return 0;
//	//如果左儿子都为空判断右儿子是否同构：主要看以上三个方面（1）右儿子是否都为空（2）是否一个有右儿子一个没有（3）右儿子数据是否相同
//	if((T1[R1].Left==Null)&&(T2[R2].Left==Null))
//		return Isomorphic(T1[R1].Right,T2[R2].Right);
//	/* 如果两棵树左儿子都不为空并且数据还是一样的，对左儿子进行递归*/
//	if ( ((T1[R1].Left!=Null)&&(T2[R2].Left!=Null))&&((T1[T1[R1].Left].Data)==(T2[T2[R2].Left].Data)) )
//		return ( Isomorphic( T1[R1].Left, T2[R2].Left )&&Isomorphic( T1[R1].Right, T2[R2].Right ) );
//	//如果两棵树左儿子（一个空一个不空或者都不空）并且数据不一样，那么判断第一棵树的左（右）儿子是否跟第二棵树的右（左）儿子同构
//	else
//		return ( Isomorphic( T1[R1].Left, T2[R2].Right)&&Isomorphic( T1[R1].Right, T2[R2].Left ) );
//
//}
//
//
//int main() {
//	freopen("C:\\Users\\fxc\\Documents\\geren\\devc\\ceshi.txt","r",stdin);
//	Tree R1,R2;     //首先建立两棵树，R1，R2为树的根节点
//	R1=BuildTree(T1);
//	R2=BuildTree(T2);
//	if(Isomorphic(R1,R2))   //Isomorphic函数判断是否同构
//		printf("Yes\n");
//	else printf("No\n");
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//											二叉树的四种遍历
//中序遍历
//void InorderTraversal( BinTree BT ) {
//	if( BT ) {
//		InorderTraversal( BT->Left );         /* 此处假设对BT结点的访问就是打印数据 */
//		printf("%d ", BT->Data); 		/* 假设数据为整型 */
//		InorderTraversal( BT->Right );
//	}
//}
////先序遍历
//void PreorderTraversal( BinTree BT ) {
//	if( BT ) {
//		printf("%d ", BT->Data );
//		PreorderTraversal( BT->Left );
//		PreorderTraversal( BT->Right );
//	}
//}
////后序遍历
//void PostorderTraversal( BinTree BT ) {
//	if( BT ) {
//		PostorderTraversal( BT->Left );
//		PostorderTraversal( BT->Right );
//		printf("%d ", BT->Data);
//	}
//}
////层序遍历
//void LevelorderTraversal ( BinTree BT ) {
//	Queue Q;
//	BinTree T;
//	if ( !BT ) return; /* 若是空树则直接返回 */
//	Q = CreatQueue(); /* 创建空队列Q */
//	AddQ( Q, BT );
//	while ( !IsEmpty(Q) ) {
//		T = DeleteQ( Q );
//		printf("%d ", T->Data); /* 访问取出队列的结点 */
//		if ( T->Left )
//			AddQ( Q, T->Left );
//		if ( T->Right )
//			AddQ( Q, T->Right );
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//												二叉树的链表结构

//typedef struct TNode *Position;
//typedef Position BinTree; /* 二叉树类型 */
//struct TNode {
//	/* 树结点定义 */
//	ElementType Data; /* 结点数据 */
//	BinTree Left;     /* 指向左子树 */
//	BinTree Right;    /* 指向右子树 */
//};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//										队列的定义与操作，链式存储

//typedef struct Node *PtrToNode;
//struct Node {
//	/* 队列中的结点 */
//	ElementType Data;
//	PtrToNode Next;
//};
//typedef PtrToNode Position;
//struct QNode {
//	Position Front, Rear;  /* 队列的头、尾指针 */
//	int MaxSize;           /* 队列最大容量 */
//};
//typedef struct QNode *Queue;
//bool IsEmpty( Queue Q ) {
//	return ( Q->Front == NULL);
//}
//ElementType DeleteQ( Queue Q ) {
//	Position FrontCell;
//	ElementType FrontElem;
//	if  ( IsEmpty(Q) ) {
//		printf("队列空");
//		return ERROR;
//	}     else {
//		FrontCell = Q->Front;
//		if ( Q->Front == Q->Rear ) /* 若队列只有一个元素 */
//			Q->Front = Q->Rear = NULL; /* 删除后队列置为空 */
//		else
//			Q->Front = Q->Front->Next;
//		FrontElem = FrontCell->Data;
//		free( FrontCell );  /* 释放被删除结点空间  */
//		return  FrontElem;
//	}
//}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//										队列的定义与操作，顺序存储

//typedef int Position;
//struct QNode {
//	ElementType *Data;     /* 存储元素的数组 */
//	Position Front, Rear;  /* 队列的头、尾指针 */
//	int MaxSize;           /* 队列最大容量 */
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
//		printf("队列满");
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
//		printf("队列空");
//		return ERROR;
//	}     else  {
//		Q->Front =(Q->Front+1)%Q->MaxSize;
//		return  Q->Data[Q->Front];
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//											堆栈的定义与操作，链式存储

//typedef struct SNode *PtrToSNode;
//struct SNode {
//	ElementType Data;
//	PtrToSNode Next;
//};
//typedef PtrToSNode Stack;
//Stack CreateStack( )  {
//	/* 构建一个堆栈的头结点，返回该结点指针 */
//	Stack S;
//	S = (Stack)malloc(sizeof(struct SNode));
//	S->Next = NULL;
//	return S;
//}
//bool IsEmpty ( Stack S ) {
//	/* 判断堆栈S是否为空，若是返回true；否则返回false */
//	return ( S->Next == NULL );
//}
//bool Push( Stack S, ElementType X ) {
//	/* 将元素X压入堆栈S */
//	PtrToSNode TmpCell;
//	TmpCell = (PtrToSNode)malloc(sizeof(struct SNode));
//	TmpCell->Data = X;
//	TmpCell->Next = S->Next;
//	S->Next = TmpCell;
//	return true;
//}
//ElementType Pop( Stack S )   {
//	/* 删除并返回堆栈S的栈顶元素 */
//	PtrToSNode FirstCell;
//	ElementType TopElem;
//	if( IsEmpty(S) ) {
//		printf("堆栈空");
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

//											堆栈的定义与操作，顺序存储

//typedef int Position;
//struct SNode {
//	ElementType *Data; /* 存储元素的数组 */
//	Position Top;      /* 栈顶指针 */
//	int MaxSize;       /* 堆栈最大容量 */
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
////入栈
//bool Push( Stack S, ElementType X ) {
//	if ( IsFull(S) ) {
//		printf("堆栈满");
//		return false;
//	}     else {
//		S->Data[++(S->Top)] = X;
//		return true;
//	}
//}
//bool IsEmpty( Stack S ) {
//	return (S->Top == -1);
//}
////出栈
//ElementType Pop( Stack S ) {
//	if ( IsEmpty(S) ) {
//		printf("堆栈空");
//		return ERROR; 	/* ERROR是ElementType的特殊值，标志错误 */
//	} else
//		return ( S->Data[(S->Top)--] );
//}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////								线性表的定义与操作，链式表

//typedef struct LNode *PtrToLNode;
//struct LNode {
//	ElementType Data;
//	PtrToLNode Next;
//};
//typedef PtrToLNode Position;
//typedef PtrToLNode List;
//
////求表长
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
///* 查找 */
//#define ERROR NULL
//Position Find( List L, ElementType X ) {
//	Position p = L; /* p指向L的第1个结点 */
//	while ( p && p->Data!=X )
//		p = p->Next;
//	/* 下列语句可以用 return p; 替换 */
//	if ( p )
//		return p;
//	else
//		return ERROR;
//}
//
///* 带头结点的插入 */
///*注意:在插入位置参数P上与课程视频有所不同，课程视频中i是序列位序（从1开始），这里P是链表结点指针，在P之前插入新结点 */
//bool Insert( List L, ElementType X, Position P ) {
//	/* 这里默认L有头结点 */
//	Position tmp, pre;     /* 查找P的前一个结点 */
//	for ( pre=L; pre&&pre->Next!=P; pre=pre->Next ) ;
//	if ( pre==NULL ) {
//		/* P所指的结点不在L中 */
//		printf("插入位置参数错误\n");
//		return false;
//	}     else {
//		/* 找到了P的前一个结点pre */         /* 在P前插入新结点 */
//		tmp = (Position)malloc(sizeof(struct LNode)); /* 申请、填装结点 */
//		tmp->Data = X;
//		tmp->Next = P;
//		pre->Next = tmp;
//		return true;
//	}
//}
//
///* 带头结点的删除 */ /*注意:在删除位置参数P上与课程视频有所不同，课程视频中i是序列位序（从1开始），这里P是拟删除结点指针 */
//bool Delete( List L, Position P ) {
//	/* 这里默认L有头结点 */
//	Position tmp, pre;     /* 查找P的前一个结点 */
//	for ( pre=L; pre&&pre->Next!=P; pre=pre->Next ) ;
//	if ( pre==NULL || P==NULL) {
//		/* P所指的结点不在L中 */
//		printf("删除位置参数错误\n");
//		return false;
//	}     else {
//		/* 找到了P的前一个结点pre */
//		/* 将P位置的结点删除 */
//		pre->Next = P->Next;
//		free(P);
//		return true;
//	}
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////                     线性表的定义与操作，顺序表

//typedef int Position;
//typedef struct LNode *List;
//struct LNode {
//	ElementType Data[MAXSIZE];
//	Position Last;
//};
//
///* 初始化 */
//List MakeEmpty() {
//	List L;
//	L = (List)malloc(sizeof(struct LNode));
//	L->Last = -1;
//	return L;
//}
//
///* 查找 */
//#define ERROR -1
//Position Find( List L, ElementType X ) {
//	Position i = 0;
//	while( i <= L->Last && L->Data[i]!= X )
//		i++;
//	if ( i > L->Last )
//		return ERROR; /* 如果没找到，返回错误信息 */
//	else  return i;  /* 找到后返回的是存储位置 */
//}
//
///* 插入 */ /*注意:在插入位置参数P上与课程视频有所不同，课程视频中i是序列位序（从1开始），这里P是存储下标位置（从0开始），两者差1*/
//bool Insert( List L, ElementType X, Position P )  {
//	/* 在L的指定位置P前插入一个新元素X */
//	Position i;
//	if ( L->Last == MAXSIZE-1) {
//		/* 表空间已满，不能插入 */
//		printf("表满");
//		return false;
//	}
//	if ( P<0 || P>L->Last+1 ) {
//		/* 检查插入位置的合法性 */
//		printf("位置不合法");
//		return false;
//	}
//	for( i=L->Last; i>=P; i-- )
//		L->Data[i+1] = L->Data[i]; /* 将位置P及以后的元素顺序向后移动 */
//	L->Data[P] = X;  /* 新元素插入 */
//	L->Last++;
//	/* Last仍指向最后元素 */
//	return true;
//}
//
///* 删除 */ /*注意:在删除位置参数P上与课程视频有所不同，课程视频中i是序列位序（从1开始），这里P是存储下标位置（从0开始），两者差1*/
//bool Delete( List L, Position P ) {
//	/* 从L中删除指定位置P的元素 */
//	Position i;
//	if( P<0 || P>L->Last ) {
//		/* 检查空表及删除位置的合法性 */
//		printf("位置%d不存在元素", P );
//		return false;
//	}
//	for( i=P+1; i<=L->Last; i++ )
//		L->Data[i-1] = L->Data[i]; /* 将位置P+1及以后的元素顺序向前移动 */
//	L->Last--; /* Last仍指向最后元素 */
//	return true;
//}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//分而治之法求最大子列和
//#include<stdio.h>
//int Max3( int A, int B, int C )
//{
//	 //返回3个整数中的最大值
// 	return A > B ? A > C ? A : C : B > C ? B : C;
// }
//
// int DivideAndConquer( int List[], int left, int right )
// {
// 	//分治法求List[left]到List[right]的最大子列和
//  	int MaxLeftSum, MaxRightSum; 		// 存放左右子问题的解
// 	int MaxLeftBorderSum, MaxRightBorderSum; 		//存放跨分界线的结果
//   	int LeftBorderSum, RightBorderSum;
//    int center, i;
//		if( left == right )
//	   		{
//	   		//递归的终止条件，子列只有1个数字
//	   		 if( List[left] > 0 )
//				return List[left];
//			 else return 0;
//			}
//
//		// 下面是"分"的过程
//	center = ( left + right ) / 2;		 // 找到中分点
//	 //递归求得两边子列的最大和
//	MaxLeftSum = DivideAndConquer( List, left, center );
//	MaxRightSum = DivideAndConquer( List, center+1, right );
//
//	 //下面求跨分界线的最大子列和
//	  MaxLeftBorderSum = 0;
//	   LeftBorderSum = 0;
//	for( i=center; i>=left; i-- )
//	{
//		//从中线向左扫描
//		LeftBorderSum += List[i];
//		if( LeftBorderSum > MaxLeftBorderSum )
//	      MaxLeftBorderSum = LeftBorderSum;
//	} // 左边扫描结束
//
//	MaxRightBorderSum = 0;
//	RightBorderSum = 0;
//	for( i=center+1; i<=right; i++ )
//	{
//		//从中线向右扫描
//		RightBorderSum += List[i];
//		if( RightBorderSum > MaxRightBorderSum )
//		MaxRightBorderSum = RightBorderSum;
//	} //右边扫描结束
//
//	 //下面返回"治"的结果
//	return Max3( MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum );
//}
//
//int MaxSubseqSum3( int List[], int N )
//{
//	//保持与前2种算法相同的函数接口
//	return DivideAndConquer( List, 0, N );
//}
//
//int main()
//{
//	int A[8]={4,-3,5,-2,-1,2,6,-2};
//	printf("最大子列和=%d",MaxSubseqSum3(A,7));
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//在线处理求最大子列和
//#include<stdio.h>
//int MaxSubseqSum4( int A[], int N )
//{
// 		int ThisSum, MaxSum;
//		int i;
//		ThisSum = MaxSum = 0;
//		 for( i = 0; i < N; i++ )
// 			{
//			 ThisSum += A[i]; 					//向右累加
// 			if( ThisSum > MaxSum )
//			 	MaxSum = ThisSum;			//发现更大和则更新当前结果
// 			else if( ThisSum < 0 ) 					//如果当前子列和为负，则不可能使后面的部分和增大，抛弃之
// 				ThisSum = 0;
//			}
//return MaxSum;
//}
//
//int main()
//{
//	int A[8]={4,-3,5,-2,-1,2,6,-2};
//	printf("最大子列和=%d",MaxSubseqSum4(A,7));
// }



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//对比普通与秦九韶算法计算100项多项式100000次
//#include <stdio.h>
//#include <time.h>
//#include <math.h>
//clock_t start,stop;			//clock_t是clock()函数返回的变量类型
//double duration;			//记录被测函数运行时间，以秒为单位
//
//double fun_normal(double x)  	//一般实现
//{
//    int i , n=101;
//    double y=1.0;
//    for(i = 1 ; i < n ; i++){
//        y = y + pow( x , i )/i;
//    }
//    return y;
//}
//
//double fun_9shao(double x)  	//秦九韶
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
//void outcome(double result, clock_t start, clock_t stop, const char* fun_name) 		//输出函数
//{
//    duration = ((double)(stop-start))/CLK_TCK;			//常数CLK_TCK(或CLOCKS_PER_SEC)：机器时钟每秒所走的时钟打点数
//    printf("The output of %s(1.1) is: %.5f\n", fun_name, result);
//    printf("100000 cycles duration of the %s  : %.5fs\n\n", fun_name, duration);
//}
//
//int main()  					//主程序
//{
//    int i,n=100000;
//    start = clock();
//    for(i = 0; i < n; i++) 		 //重复计算100000次
//    {
//        fun_normal(1.1);
//    }
//    stop = clock();
//    outcome(fun_normal(1.1), start, stop, "function_normal");
//    start = clock();
//    for(i = 0; i < n; i++)  	//重复计算100000次
//    {
//        fun_9shao(1.1);
//    }
//    stop = clock();
//    outcome(fun_9shao(1.1), start, stop, "function_9shao");
//    return 0;
//
//}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//递归打印整数
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
