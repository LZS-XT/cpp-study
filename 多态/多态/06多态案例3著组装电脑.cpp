//#include<iostream>
//using namespace std;
//
////三个零件抽象类
//
//// CPU抽象类
//class CPU
//{
//public:	//计算
//	virtual void calculate() = 0;
//};
//
////显卡抽象类
//class GPU
//{
//public:	
//	//显示
//	virtual void display() = 0;
//};
//
////内存抽象类
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
////电脑类
//class Computer
//{
//public :
//	Computer(CPU* cpu, GPU* gpu, Memory* mem)
//	{
//		this->cpu = cpu;
//		this->gpu = gpu;
//		this->mem = mem;
//	}
//	~Computer()
//	{
//		if (cpu != NULL)
//		{
//			delete cpu;
//			cpu = NULL;
//		}
//		if (gpu != NULL)
//		{
//			delete gpu;
//			gpu = NULL;
//		}
//		if (mem != NULL)
//		{
//			delete mem;
//			mem = NULL;
//		}
//	}
//	void work()
//	{
//		cpu->calculate();
//		gpu->display();
//		mem->storage();
//	}
//	CPU* cpu;
//	GPU* gpu;
//	Memory* mem;
//
//
//};
//
////具体零件类
////具体CPU类
//class IntelCPU :public CPU
//{
//	public:
//	void calculate()
//	{
//		cout << "Intel CPU 计算" << endl;
//	}
//};
//
//class AMDCPU :public CPU
//{
//	public:
//	void calculate()
//	{
//		cout << "AMD CPU 计算" << endl;
//	}
//};
//
////具体显卡类
//class NvidiaGPU :public GPU
//{
//	public:
//	void display()
//	{
//		cout << "Nvidia GPU 显示" << endl;
//	}
//};
//
//class AMDGPU :public GPU
//{
//	public:
//	void display()
//	{
//		cout << "AMD GPU 显示" << endl;
//	}
//};
//
////具体内存类
//class KingstonMemory :public Memory
//{
//	public:
//	void storage()
//	{
//		cout << "Kingston Memory 存储" << endl;
//	}
//};
//
//class SamsungMemory :public Memory
//{
//	public:
//	void storage()
//	{
//		cout << "Samsung Memory 存储" << endl;
//	}
//};
//
//void test01()
//{
//	//第一台
//	cout << "第一台电脑" << endl;
//	Computer c1(new IntelCPU, new NvidiaGPU, new KingstonMemory);
//	c1.work();
//	//第二台
//	cout << "第二台电脑" << endl;
//	Computer c2(new AMDCPU, new AMDGPU, new SamsungMemory);
//	c2.work();
//	//第三台
//	cout << "第三台电脑" << endl;
//	Computer c3(new AMDCPU, new NvidiaGPU, new KingstonMemory);
//	c3.work();
//}
//
//int main()
//{
//		test01();
//
//	system("pause");
//	return 0;
//}