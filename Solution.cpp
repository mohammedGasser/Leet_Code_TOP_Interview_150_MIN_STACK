class MinStack {
public:
   int  arr[50]={0};
    stack <long > MinStack1;
    long min=260;
    int index=0;
    int pop_index=0;
     int t=0;
    MinStack() {
        
    }
     
    void push(int val) {
        MinStack1.push(val);
        arr[index]=val;
        t=index++;
         
        

    }
    
    void pop() {
        pop_index++;
        MinStack1.pop();
        t=index-pop_index ;
        min=arr[0];
      
      for(int q=1 ; q<t;q++)
        {
                 
            if(min>arr[q])
              min=arr[q];
             
        }  
    }
    
    int top() {

      return  MinStack1.top();  
    }
    
    int getMin() {
          if(!pop_index)
     for(int q=0 ; q<=t;q++)
        {
             if(min>arr[q])
              min=arr[q];

             }               
         else
         { 
         
         }

 return min; 
          

    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
