/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEEUCLIDEANDISTANCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEEUCLIDEANDISTANCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageEuclideanDistance.h>

#include "vtkImageDecomposeFilterWrap.h"

class VtkImageEuclideanDistanceWrap : public VtkImageDecomposeFilterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageEuclideanDistanceWrap(vtkSmartPointer<vtkImageEuclideanDistance>);
		VtkImageEuclideanDistanceWrap();
		~VtkImageEuclideanDistanceWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ConsiderAnisotropyOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConsiderAnisotropyOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConsiderAnisotropy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInitialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlgorithmToSaito(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlgorithmToSaitoCached(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConsiderAnisotropy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInitialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
