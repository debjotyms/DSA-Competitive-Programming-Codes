fun main()=repeat(readLine()!!.toInt()){
  val (x,y)=readLine()!!.split(" ").map{ it.toInt()}
  var k=y/x
  var ans=0
  while(k>0){
    ans+=k%10
    k/=10 
  }
  println(ans+y%x)
}