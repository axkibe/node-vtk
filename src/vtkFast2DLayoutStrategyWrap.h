/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFAST2DLAYOUTSTRATEGYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFAST2DLAYOUTSTRATEGYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFast2DLayoutStrategy.h>

#include "vtkGraphLayoutStrategyWrap.h"

class VtkFast2DLayoutStrategyWrap : public VtkGraphLayoutStrategyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFast2DLayoutStrategyWrap(vtkSmartPointer<vtkFast2DLayoutStrategy>);
		VtkFast2DLayoutStrategyWrap();
		~VtkFast2DLayoutStrategyWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCoolDownRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCoolDownRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIterationsPerLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIterationsPerLayoutMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIterationsPerLayoutMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxNumberOfIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxNumberOfIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomSeedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomSeedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsLayoutComplete(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Layout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIterationsPerLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
