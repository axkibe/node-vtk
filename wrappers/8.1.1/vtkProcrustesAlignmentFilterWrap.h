/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROCRUSTESALIGNMENTFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROCRUSTESALIGNMENTFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProcrustesAlignmentFilter.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkProcrustesAlignmentFilterWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkProcrustesAlignmentFilterWrap(vtkSmartPointer<vtkProcrustesAlignmentFilter>);
		VtkProcrustesAlignmentFilterWrap();
		~VtkProcrustesAlignmentFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetLandmarkTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMeanPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartFromCentroid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStartFromCentroid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartFromCentroidOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartFromCentroidOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPROCRUSTESALIGNMENTFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPROCRUSTESALIGNMENTFILTERWRAP_CLASSDEF
#endif
};

#endif
