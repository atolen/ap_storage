public interface DequeIntr<T> extends Queue<T> {
    
    public void addFirst( T x );
    public void addLast( T x );

    public T peekFirst();
    public T peekLast();

    public T removeFirst();
    public T removeLast();

    public boolean isEmpty();
}
