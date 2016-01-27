/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXPANDSELECTEDGRAPHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXPANDSELECTEDGRAPHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExpandSelectedGraph.h>

#include "vtkSelectionAlgorithmWrap.h"

class VtkExpandSelectedGraphWrap : public VtkSelectionAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExpandSelectedGraphWrap(vtkSmartPointer<vtkExpandSelectedGraph>);
		VtkExpandSelectedGraphWrap();
		~VtkExpandSelectedGraphWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBFSDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDomain(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IncludeShortestPathsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IncludeShortestPathsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBFSDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDomain(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGraphConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDomainOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDomainOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif