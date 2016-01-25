/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDEFORMPOINTSETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDEFORMPOINTSETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDeformPointSet.h>

#include "vtkPointSetAlgorithmWrap.h"

class VtkDeformPointSetWrap : public VtkPointSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkDeformPointSetWrap(vtkSmartPointer<vtkDeformPointSet>);
		VtkDeformPointSetWrap();
		~VtkDeformPointSetWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetControlMeshData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInitializeWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeWeightsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeWeightsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetControlMeshConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetControlMeshData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInitializeWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
