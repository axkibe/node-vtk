/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELLDISTANCESELECTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELLDISTANCESELECTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCellDistanceSelector.h>

#include "vtkSelectionAlgorithmWrap.h"

class VtkCellDistanceSelectorWrap : public VtkSelectionAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkCellDistanceSelectorWrap(vtkSmartPointer<vtkCellDistanceSelector>);
		VtkCellDistanceSelectorWrap();
		~VtkCellDistanceSelectorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddIntermediateOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddIntermediateOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAddIntermediate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIncludeSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IncludeSeedOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IncludeSeedOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAddIntermediate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIncludeSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputMesh(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputMeshConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputSelectionConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif