import java.io.*;
import java.util.*;

public class Main {

  public static class CustomQueue {
    int[] data;
    int front;
    int size;

    public CustomQueue(int cap) {
      data = new int[cap];
      front = 0;
      size = 0;
    }

    int size() {
      return this.size;
    }

    void display() {
      for(int i=0;i<this.size;i++){
        System.out.print(this.data[(this.front+i)%this.data.length]+" ");
      }
      System.out.println();
    }

    void add(int val) {
      if(this.size==this.data.length){
          System.out.println("Queue overflow");
          return;
      }
      
      this.data[(this.front+this.size)%this.data.length]=val;
      this.size+=1;
    }

    int remove() {
      if(this.size==0){
          System.out.println("Queue underflow");
          return -1;
      }
      
      int temp = this.data[this.front];
      this.data[this.front] = 0;
      this.front = (this.front+1)%this.data.length;
      this.size-=1;
      return temp;
    }

    int peek() {
        if(this.size==0){
          System.out.println("Queue underflow");
          return -1;
        }
        
        return this.data[this.front];
    }
  }

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    CustomQueue qu = new CustomQueue(n);

    String str = br.readLine();
    while(str.equals("quit") == false){
      if(str.startsWith("add")){
        int val = Integer.parseInt(str.split(" ")[1]);
        qu.add(val);
      } else if(str.startsWith("remove")){
        int val = qu.remove();
        if(val != -1){
          System.out.println(val);
        }
      } else if(str.startsWith("peek")){
        int val = qu.peek();
        if(val != -1){
          System.out.println(val);
        }
      } else if(str.startsWith("size")){
        System.out.println(qu.size());
      } else if(str.startsWith("display")){
        qu.display();
      }
      str = br.readLine();
    }
  }
}