class item{
  int value, weight;
  Item(int x, int y){
    this.value = x;
    this.weight = y;
  }
}

class itemComparator implements Comparator<Item>{
  @Override
  public int compare(Item a, Item b){
    double r1 = (double)a.value/(double)a.weight;
    double r2 = (double)b.value/(double)b.weight;
    return (int)(r2-r1);
  }
}

class solve{
  double fractionalKnapsack(int W, Item arr[], int n){
    Arrays.sort(arr, new itemComparator());
    int curWeight = 0;
    double finalvalue = 0.0;
    for(int i=0; i<n; i++){
      if(curWeight+arr[i].weight <= W){
        curWeight += arr[i].weight;
        finalvalue += arr[i].value;
      }
      else{
        int remain = W - curWeight;
        finalvalue += arr[i].value*(double)remain/(double)arr[i].weight;
        break;
      }
    }
    return finalvalue;
  }
  return finalvalue;
}
