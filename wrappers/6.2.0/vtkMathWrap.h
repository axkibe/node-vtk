/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMATHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMATHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMath.h>

#include "vtkObjectWrap.h"

class VtkMathWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMathWrap(vtkSmartPointer<vtkMath>);
		VtkMathWrap();
		~VtkMathWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Ceil(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DegreesFromRadians(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Determinant2x2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Determinant3x3(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DoublePi(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DoubleTwoPi(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Floor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Gaussian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GaussianAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GaussianWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarTypeFittingRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Inf(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsFinite(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsInf(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsNan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Nan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NearestPowerOfTwo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NegInf(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pi(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RadiansFromDegrees(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Random(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Round(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
