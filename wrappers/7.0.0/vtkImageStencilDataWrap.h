/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESTENCILDATAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESTENCILDATAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageStencilData.h>

#include "vtkDataObjectWrap.h"
#include "../../plus/plus.h"

class VtkImageStencilDataWrap : public VtkDataObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageStencilDataWrap(vtkSmartPointer<vtkImageStencilData>);
		VtkImageStencilDataWrap();
		~VtkImageStencilDataWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Add(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllocateExtents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Clip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyInformationFromPipeline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyInformationToPipeline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Fill(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtentType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertAndMergeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertNextExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InternalImageStencilDataCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsInside(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Replace(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Subtract(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGESTENCILDATAWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGESTENCILDATAWRAP_CLASSDEF
#endif
};

#endif
