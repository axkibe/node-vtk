/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKASSIGNCOORDINATESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKASSIGNCOORDINATESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAssignCoordinates.h>

#include "vtkPassInputTypeAlgorithmWrap.h"

class VtkAssignCoordinatesWrap : public VtkPassInputTypeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkAssignCoordinatesWrap(vtkSmartPointer<vtkAssignCoordinates>);
		VtkAssignCoordinatesWrap();
		~VtkAssignCoordinatesWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
