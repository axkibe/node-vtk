/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKREGULARPOLYGONSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKREGULARPOLYGONSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRegularPolygonSource.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkRegularPolygonSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRegularPolygonSourceWrap(vtkSmartPointer<vtkRegularPolygonSource>);
		VtkRegularPolygonSourceWrap();
		~VtkRegularPolygonSourceWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GeneratePolygonOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GeneratePolygonOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GeneratePolylineOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GeneratePolylineOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGeneratePolygon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGeneratePolyline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSides(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSidesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSidesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGeneratePolygon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGeneratePolyline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfSides(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
