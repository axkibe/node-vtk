/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAMRENZOPARTICLESREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAMRENZOPARTICLESREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAMREnzoParticlesReader.h>

#include "vtkAMRBaseParticlesReaderWrap.h"
#include "../../plus/plus.h"

class VtkAMREnzoParticlesReaderWrap : public VtkAMRBaseParticlesReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAMREnzoParticlesReaderWrap(vtkSmartPointer<vtkAMREnzoParticlesReader>);
		VtkAMREnzoParticlesReaderWrap();
		~VtkAMREnzoParticlesReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetParticleType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTotalNumberOfParticles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParticleType(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKAMRENZOPARTICLESREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKAMRENZOPARTICLESREADERWRAP_CLASSDEF
#endif
};

#endif
