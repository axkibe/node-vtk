/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTTEMPORALFIELDDATAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTTEMPORALFIELDDATAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractTemporalFieldData.h>

#include "vtkTableAlgorithmWrap.h"

class VtkExtractTemporalFieldDataWrap : public VtkTableAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtractTemporalFieldDataWrap(vtkSmartPointer<vtkExtractTemporalFieldData>);
		VtkExtractTemporalFieldDataWrap();
		~VtkExtractTemporalFieldDataWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
