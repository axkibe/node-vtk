/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROBEPOLYHEDRONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROBEPOLYHEDRONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProbePolyhedron.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkProbePolyhedronWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkProbePolyhedronWrap(vtkSmartPointer<vtkProbePolyhedron>);
		VtkProbePolyhedronWrap();
		~VtkProbePolyhedronWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProbeCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProbePointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProbeCellDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProbeCellDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProbePointDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProbePointDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProbeCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProbePointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
