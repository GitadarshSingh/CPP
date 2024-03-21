class generic1<T,U> {
    T obj;
    U obj1;
    
    generic1(T obj,U obj1){
        this.obj=obj;
        this.obj1=obj1;
    }
    public void display(){
        System.out.println("the type of obj"+obj.getClass());
        System.out.println("the type of obj"+obj1.getClass());
    }

    public T getobj(){
        return obj;
    }
    public U getObj1(){
        return obj1;
    } 
    
}
class generic{
    public static void main(String[] args) {
        generic1<String,Integer> s = new generic1<String,Integer>("Hello",123);
        s.display();
        
        System.out.println(s.getobj());
        System.out.println(s.getObj1());

        generic1<String,Integer> i=new generic1<String,Integer>("Hello2",1225);
        i.display();
        
        System.out.println(i.getobj());
        System.out.println(i.getObj1());

    }
}
