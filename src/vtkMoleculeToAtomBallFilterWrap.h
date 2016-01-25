/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMOLECULETOATOMBALLFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMOLECULETOATOMBALLFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMoleculeToAtomBallFilter.h>

#include "vtkMoleculeToPolyDataFilterWrap.h"

class VtkMoleculeToAtomBallFilterWrap : public VtkMoleculeToPolyDataFilterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkMoleculeToAtomBallFilterWrap(vtkSmartPointer<vtkMoleculeToAtomBallFilter>);
		VtkMoleculeToAtomBallFilterWrap();
		~VtkMoleculeToAtomBallFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusSource(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadiusScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadiusSource(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif