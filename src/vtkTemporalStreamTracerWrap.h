/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEMPORALSTREAMTRACERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEMPORALSTREAMTRACERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTemporalStreamTracer.h>

#include "vtkStreamTracerWrap.h"

class VtkTemporalStreamTracerWrap : public VtkStreamTracerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTemporalStreamTracerWrap(vtkSmartPointer<vtkTemporalStreamTracer>);
		VtkTemporalStreamTracerWrap();
		~VtkTemporalStreamTracerWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableParticleWritingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableParticleWritingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableParticleWriting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetForceReinjectionEveryNSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIgnorePipelineTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParticleFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParticleWriter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStaticMesh(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStaticSeeds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTerminationTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTerminationTimeUnit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeStepResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IgnorePipelineTimeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IgnorePipelineTimeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllSources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableParticleWriting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetForceReinjectionEveryNSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIgnorePipelineTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParticleFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParticleWriter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStaticMesh(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStaticSeeds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTerminationTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTerminationTimeUnit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTerminationTimeUnitToStepUnit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTerminationTimeUnitToTimeUnit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeStepResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StaticMeshOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StaticMeshOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StaticSeedsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StaticSeedsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
