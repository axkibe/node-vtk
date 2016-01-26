/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFORCEDIRECTEDLAYOUTSTRATEGYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFORCEDIRECTEDLAYOUTSTRATEGYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkForceDirectedLayoutStrategy.h>

#include "vtkGraphLayoutStrategyWrap.h"

class VtkForceDirectedLayoutStrategyWrap : public VtkGraphLayoutStrategyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkForceDirectedLayoutStrategyWrap(vtkSmartPointer<vtkForceDirectedLayoutStrategy>);
		VtkForceDirectedLayoutStrategyWrap();
		~VtkForceDirectedLayoutStrategyWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutomaticBoundsComputationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutomaticBoundsComputationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutomaticBoundsComputation(const Nan::FunctionCallbackInfo<v8::Value>& info);
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
		static void GetRandomInitialPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomSeedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomSeedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThreeDimensionalLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsLayoutComplete(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Layout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RandomInitialPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RandomInitialPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutomaticBoundsComputation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGraphBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIterationsPerLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRandomInitialPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThreeDimensionalLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThreeDimensionalLayoutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThreeDimensionalLayoutOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
