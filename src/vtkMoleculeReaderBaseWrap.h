/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMOLECULEREADERBASEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMOLECULEREADERBASEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMoleculeReaderBase.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkMoleculeReaderBaseWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkMoleculeReaderBaseWrap(vtkSmartPointer<vtkMoleculeReaderBase>);
		VtkMoleculeReaderBaseWrap();
		~VtkMoleculeReaderBaseWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHBScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfAtoms(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHBScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
