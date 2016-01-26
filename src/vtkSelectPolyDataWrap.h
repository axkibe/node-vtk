/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSELECTPOLYDATAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSELECTPOLYDATAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSelectPolyData.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkSelectPolyDataWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSelectPolyDataWrap(vtkSmartPointer<vtkSelectPolyData>);
		VtkSelectPolyDataWrap();
		~VtkSelectPolyDataWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GenerateSelectionScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateSelectionScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateUnselectedOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateUnselectedOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateSelectionScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateUnselectedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLoop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnselectedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClosestPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateSelectionScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateUnselectedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLoop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionModeToClosestPointRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionModeToLargestRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionModeToSmallestRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
