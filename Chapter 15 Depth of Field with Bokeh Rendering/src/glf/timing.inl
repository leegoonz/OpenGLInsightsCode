//------------------------------------------------------------------------------
// Include
//------------------------------------------------------------------------------

namespace glf
{
	namespace section
	{
		//----------------------------------------------------------------------
		inline bool IsGPUSection(int _section)
		{
			return (_section & GPUSection) != 0;
		}
		//----------------------------------------------------------------------
		inline bool IsCPUSection(int _section)
		{
			return (_section & CPUSection) != 0;
		}
		//----------------------------------------------------------------------
		inline int  ToIndex(int _section)
		{
			return _section & MaskSection;
		}
		//----------------------------------------------------------------------
	}
}
