/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEMAPPER3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEMAPPER3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageMapper3D.h>

#include "vtkAbstractMapper3DWrap.h"

class VtkImageMapper3DWrap : public VtkAbstractMapper3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageMapper3DWrap(vtkSmartPointer<vtkImageMapper3D>);
		VtkImageMapper3DWrap();
		~VtkImageMapper3DWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BackgroundOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BackgroundOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BorderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BorderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreadsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreadsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceAtFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceFacesCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlicePlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceAtFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceFacesCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SliceAtFocalPointOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SliceAtFocalPointOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SliceFacesCameraOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SliceFacesCameraOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
