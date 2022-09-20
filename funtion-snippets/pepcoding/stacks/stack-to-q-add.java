import java.io.*;
import java.util.*;

public class Main {

  public static class StackToQueueAdapter {
    Stack<Integer> mainS;
    Stack<Integer> helperS;

    public StackToQueueAdapter() {
      mainS = new Stack<>();
      helperS = new Stack<>();
    }

    int size() {
      return this.mainS.size();
    }

    void add(int val) {
      this.mainS.push(val);
    }

    int remove() {
      if(this.mainS.size()==0){
          System.out.println("Queue underflow");
          return -1;
      }
      
      while(this.mainS.size()>1){
          this.helperS.push(this.mainS.pop());
      }
      
      int tmp = this.mainS.pop();
      while(this.helperS.size()>0){
         this.mainS.push(this.helperS.pop());
      }
      
      return tmp;
    }

    int peek() {
      if(this.mainS.size()==0){
          System.out.println("Queue underflow");
          return -1;
      }
      
      while(this.mainS.size()>0){
          this.helperS.push(this.mainS.pop());
      }
      
      int tmp = this.helperS.peek();
      while(this.helperS.size()>0){
         this.mainS.push(this.helperS.pop());
      }
      
      return tmp;
    }
  }

  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StackToQueueAdapter qu = new StackToQueueAdapter();

    String str = br.readLine();
    while (str.equals("quit") == false) {
      if (str.startsWith("add")) {
        int val = Integer.parseInt(str.split(" ")[1]);
        qu.add(val);
      } else if (str.startsWith("remove")) {
        int val = qu.remove();
        if (val != -1) {
          System.out.println(val);
        }
      } else if (str.startsWith("peek")) {
        int val = qu.peek();
        if (val != -1) {
          System.out.println(val);
        }
      } else if (str.startsWith("size")) {
        System.out.println(qu.size());
      }
      str = br.readLine();
    }
  }
}