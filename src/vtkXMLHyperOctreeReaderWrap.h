/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLHYPEROCTREEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLHYPEROCTREEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLHyperOctreeReader.h>

#include "vtkXMLDataReaderWrap.h"

class VtkXMLHyperOctreeReaderWrap : public VtkXMLDataReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkXMLHyperOctreeReaderWrap(vtkSmartPointer<vtkXMLHyperOctreeReader>);
		VtkXMLHyperOctreeReaderWrap();
		~VtkXMLHyperOctreeReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
