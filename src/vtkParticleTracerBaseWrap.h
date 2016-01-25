/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARTICLETRACERBASEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARTICLETRACERBASEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParticleTracerBase.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkParticleTracerBaseWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkParticleTracerBaseWrap(vtkSmartPointer<vtkParticleTracerBase>);
		VtkParticleTracerBaseWrap();
		~VtkParticleTracerBaseWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisableResetCacheOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisableResetCacheOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableParticleWritingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableParticleWritingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisableResetCache(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableParticleWriting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetForceReinjectionEveryNSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIgnorePipelineTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegratorType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParticleFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParticleWriter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRotationScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStaticMesh(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStaticSeeds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTerminalSpeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTerminationTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IgnorePipelineTimeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IgnorePipelineTimeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PrintParticleHistories(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllSources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisableResetCache(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableParticleWriting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetForceReinjectionEveryNSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIgnorePipelineTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegratorType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParticleFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParticleWriter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRotationScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStartTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStaticMesh(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStaticSeeds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTerminalSpeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTerminationTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif