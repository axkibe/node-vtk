/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGRAPHHIERARCHICALBUNDLEEDGESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGRAPHHIERARCHICALBUNDLEEDGESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGraphHierarchicalBundleEdges.h>

#include "vtkGraphAlgorithmWrap.h"

class VtkGraphHierarchicalBundleEdgesWrap : public VtkGraphAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGraphHierarchicalBundleEdgesWrap(vtkSmartPointer<vtkGraphHierarchicalBundleEdges>);
		VtkGraphHierarchicalBundleEdgesWrap();
		~VtkGraphHierarchicalBundleEdgesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DirectMappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DirectMappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBundlingStrength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBundlingStrengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBundlingStrengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDirectMapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBundlingStrength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirectMapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
