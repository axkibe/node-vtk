/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELLCENTERSPOINTPLACERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELLCENTERSPOINTPLACERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCellCentersPointPlacer.h>

#include "vtkPointPlacerWrap.h"

class VtkCellCentersPointPlacerWrap : public VtkPointPlacerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCellCentersPointPlacerWrap(vtkSmartPointer<vtkCellCentersPointPlacer>);
		VtkCellCentersPointPlacerWrap();
		~VtkCellCentersPointPlacerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellPicker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfProps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllProps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ValidateDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ValidateWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
