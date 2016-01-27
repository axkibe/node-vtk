/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLABELHIERARCHYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLABELHIERARCHYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLabelHierarchy.h>

#include "vtkPointSetWrap.h"

class VtkLabelHierarchyWrap : public VtkPointSetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLabelHierarchyWrap(vtkSmartPointer<vtkLabelHierarchy>);
		VtkLabelHierarchyWrap();
		~VtkLabelHierarchyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeHierarchy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBoundedSizes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenterPts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCoincidentPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIconIndices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDepth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPriorities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSizes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetLabelCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBoundedSizes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconIndices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumDepth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPriorities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSizes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTargetLabelCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
