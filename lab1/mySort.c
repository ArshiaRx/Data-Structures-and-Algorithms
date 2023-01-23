//InsertionSort
void mySort(int d[], unsigned int n){
  
for (int j = 1; j < n; j++){
  int key = d[j];
  int i = j - 1;
  while (i > 0 && d[i] > key){
	d[i+1] = d[i];
	i = i - 1;
  	}
  d[i + 1] = key;
  }
}
