/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHEATMAPITEMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHEATMAPITEMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHeatmapItem.h>

#include "vtkContextItemWrap.h"
#include "../../plus/plus.h"

class VtkHeatmapItemWrap : public VtkContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHeatmapItemWrap(vtkSmartPointer<vtkHeatmapItem>);
		VtkHeatmapItemWrap();
		~VtkHeatmapItemWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRowNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextAngleForOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTable(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKHEATMAPITEMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKHEATMAPITEMWRAP_CLASSDEF
#endif
};

#endif
