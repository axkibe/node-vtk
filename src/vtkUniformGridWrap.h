/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKUNIFORMGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKUNIFORMGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkUniformGrid.h>

#include "vtkImageDataWrap.h"

class VtkUniformGridWrap : public VtkImageDataWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkUniformGridWrap(vtkSmartPointer<vtkUniformGrid>);
		VtkUniformGridWrap();
		~VtkUniformGridWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AttachCellVisibilityToCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AttachPointVisibilityToPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BlankCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BlankPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewImageDataCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnBlankCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnBlankPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
