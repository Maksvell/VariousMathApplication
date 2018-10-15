#pragma once

#ifdef VARIOUSMATH_EXPORTS
#define VARIOUSMATH_API _declspec(dllexport)
#else
#define VAROUSMATH_API _declspec(dllimport)
#endif

namespace VariousMath {
	class PiDigitGenerator {
	public:
		static VAROUSMATH_API int getNthDigit(long n);
	private:
		static double seriesSubSumm(int denominatorParam, long n);
	};
}