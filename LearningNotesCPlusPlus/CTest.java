package arithmetic;

import java.util.Scanner;

//定义圆柱对象
class Clinder{
	private double r;
	private double h;
	//初始化圆柱
	public Clinder(double r, double h){
		this.r = r;
		this.h = h;
	}
	//计算体积
	public double Volume(){
		return 3.14159*r*r*h;
	}
}
//测试类
public class CTest {
	public static void main(String[] args){
		double r, h, v;
		Scanner input = new Scanner(System.in);		//创建输入对象
		r = input.nextDouble();			//从键盘上读取半径
		h = input.nextDouble();			//读取高
		Clinder c = new Clinder(r, h);	//创建圆柱对象	
		v = c.Volume();					//调用圆柱对象的求体积的方法
		System.out.println(v);			//输出体积v
		input.close();					//关闭scanner对象
	}
}
