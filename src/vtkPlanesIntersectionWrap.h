/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLANESINTERSECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLANESINTERSECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlanesIntersection.h>

#include "vtkPlanesWrap.h"

class VtkPlanesIntersectionWrap : public VtkPlanesWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlanesIntersectionWrap(vtkSmartPointer<vtkPlanesIntersection>);
		VtkPlanesIntersectionWrap();
		~VtkPlanesIntersectionWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Convert3DCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumRegionVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectsRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRegionVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
