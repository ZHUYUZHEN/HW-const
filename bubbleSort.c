void bubbleSort( int const *array,int size)
{
	void swap(int *element1,int *element2);
	unsigned int pass;
	int i;
	for(pass=1;pass<10;++pass){
		for(i=0;i<10;++i){
			if(array[i]>array[i+1]){
				swap(&array[i],&array[i+1]);
				
			}
		}
	}

}

void swap(int *element1,int *element2){
	int hold=*element1;
	*element1=*element2;
	*element2=hold;
}
