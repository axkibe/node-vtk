/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLINEAREXTRUSIONFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLINEAREXTRUSIONFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLinearExtrusionFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkLinearExtrusionFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLinearExtrusionFilterWrap(vtkSmartPointer<vtkLinearExtrusionFilter>);
		VtkLinearExtrusionFilterWrap();
		~VtkLinearExtrusionFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtrusionType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtrusionTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtrusionTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtrusionPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtrusionType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtrusionTypeToNormalExtrusion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtrusionTypeToPointExtrusion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtrusionTypeToVectorExtrusion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
