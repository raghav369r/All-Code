class stbuffer2{
	public static void main(String args[]){
		//str.capacity()-->capacity=(old*2)+2
		StringBuffer str=new StringBuffer();
		System.out.println("capacity= "+str.capacity());
		//str.append(str1)
		str.append("Raghav");
		System.out.println(str);
		System.out.println("capacity= "+str.capacity());
		str.append("Reddy");
		System.out.println(str);
		System.out.println("capacity= "+str.capacity());
		//str.insert(index,str1);
		str.insert(6,":)");
		System.out.println(str);
		//str.replace(start,end+1,str1)
		str.replace(6,8,"_");
		System.out.println(str);
		//str.delete(start,end+1)
		str.delete(6,11);
		System.out.println(str);
		System.out.println("capacity= "+str.capacity());
		//str.reverse()
		str.reverse();
		System.out.println(str);
		str.reverse();
		str.append(" CSE 1-D ROLL  NO:36");
		System.out.println(str);
		System.out.println("capacity= "+str.capacity());
		//str.ensureCapacity(int)
		StringBuffer st=new StringBuffer();
		System.out.println(st.capacity());//default 16
		st.ensureCapacity(20);//as 20>16 need extra so (16*2)+2=34
		System.out.println(st.capacity());
	}
}
