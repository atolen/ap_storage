public class LLNode {
    
    private String _cargo;    //cargo may only be of type String
    private LLNode _nextNode; //pointer to next LLNode


    //constructor -- initializes instance vars
    public LLNode( String value, LLNode next ) {
	_cargo = value;
	_nextNode = next;
    }
       
    //mutators
    public String setCargo( String newCargo ) {
	String foo = getCargo();
	_cargo = newCargo;
	return foo;
    }

    public LLNode setNext( LLNode newNext ) {
	LLNode foo = getNext();
	_nextNode = newNext;
	return foo;
    }
    //---------------------------------------------

    
    //accessors
    public String getCargo() { return _cargo; }

    public LLNode getNext() { return _nextNode; }
    
}