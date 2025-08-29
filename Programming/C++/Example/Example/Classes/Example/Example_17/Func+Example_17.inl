namespace E01Example
{
	template<typename T>
	void SwapVal_E17(T& a_rtLhs, T& a_rtRhs)
	{
		T tTemp = a_rtLhs;
		a_rtLhs = a_rtRhs;
		a_rtRhs = tTemp;
	}
}
