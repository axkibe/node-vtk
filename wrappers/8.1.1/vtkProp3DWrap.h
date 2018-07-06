/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROP3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROP3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProp3D.h>

#include "vtkPropWrap.h"
#include "../../plus/plus.h"

class VtkProp3DWrap : public VtkPropWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkProp3DWrap(vtkSmartPointer<vtkProp3D>);
		VtkProp3DWrap();
		~VtkProp3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIsIdentity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationWXYZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitPathTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PokeMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotateWXYZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotateX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotateY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotateZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUserMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUserTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPROP3DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPROP3DWRAP_CLASSDEF
#endif
};

#endif
