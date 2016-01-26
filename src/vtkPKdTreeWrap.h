/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPKDTREEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPKDTREEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPKdTree.h>

#include "vtkKdTreeWrap.h"

class VtkPKdTreeWrap : public VtkKdTreeWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPKdTreeWrap(vtkSmartPointer<vtkPKdTree>);
		VtkPKdTreeWrap();
		~VtkPKdTreeWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AssignRegionsContiguous(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AssignRegionsRoundRobin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateGlobalDataArrayBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateProcessCellCountData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessAssignedToRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessCellCountForRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessListForRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRegionAssignment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRegionAssignmentList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRegionAssignmentMapLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRegionListForProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTotalProcessesInRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTotalRegionsForProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
