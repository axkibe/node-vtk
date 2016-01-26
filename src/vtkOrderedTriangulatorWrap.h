/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKORDEREDTRIANGULATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKORDEREDTRIANGULATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOrderedTriangulator.h>

#include "vtkObjectWrap.h"

class VtkOrderedTriangulatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOrderedTriangulatorWrap(vtkSmartPointer<vtkOrderedTriangulator>);
		VtkOrderedTriangulatorWrap();
		~VtkOrderedTriangulatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextTetra(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreSorted(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseTemplates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseTwoSortIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitTetraTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitTriangulation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PreSortedOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PreSortedOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPreSorted(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseTemplates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseTwoSortIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TemplateTriangulate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseTemplatesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseTemplatesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseTwoSortIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseTwoSortIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
