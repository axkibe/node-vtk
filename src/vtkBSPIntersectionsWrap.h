/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBSPINTERSECTIONSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBSPINTERSECTIONSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBSPIntersections.h>

#include "vtkObjectWrap.h"

class VtkBSPIntersectionsWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBSPIntersectionsWrap(vtkSmartPointer<vtkBSPIntersections>);
		VtkBSPIntersectionsWrap();
		~VtkBSPIntersectionsWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeIntersectionsUsingDataBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeIntersectionsUsingDataBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeIntersectionsUsingDataBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCuts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfRegions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectsBox(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectsCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectsSphere2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeIntersectionsUsingDataBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCuts(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
