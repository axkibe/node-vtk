/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGETOAMRWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGETOAMRWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageToAMR.h>

#include "vtkOverlappingAMRAlgorithmWrap.h"

class VtkImageToAMRWrap : public VtkOverlappingAMRAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageToAMRWrap(vtkSmartPointer<vtkImageToAMR>);
		VtkImageToAMRWrap();
		~VtkImageToAMRWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfBlocksMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfBlocksMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLevelsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLevelsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRefinementRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRefinementRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRefinementRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumNumberOfBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRefinementRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
