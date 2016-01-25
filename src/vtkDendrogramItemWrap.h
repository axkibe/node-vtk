/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDENDROGRAMITEMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDENDROGRAMITEMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDendrogramItem.h>

#include "vtkContextItemWrap.h"

class VtkDendrogramItemWrap : public VtkContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkDendrogramItemWrap(vtkSmartPointer<vtkDendrogramItem>);
		VtkDendrogramItemWrap();
		~VtkDendrogramItemWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeLabelWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayNumberOfCollapsedLeafNodesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayNumberOfCollapsedLeafNodesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawLabelsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawLabelsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtendLeafNodesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtendLeafNodesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAngleForOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeafSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPrunedTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextAngleForOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PrepareToPaint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeafSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
