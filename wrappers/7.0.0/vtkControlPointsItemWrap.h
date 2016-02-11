/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTROLPOINTSITEMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTROLPOINTSITEMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkControlPointsItem.h>

#include "vtkPlotWrap.h"

class VtkControlPointsItemWrap : public VtkPlotWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkControlPointsItemWrap(vtkSmartPointer<vtkControlPointsItem>);
		VtkControlPointsItemWrap();
		~VtkControlPointsItemWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeselectAllPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetControlPointsIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPointsMovable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPointsRemovable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPointsXMovable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPointsYMovable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedPointBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedPointPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStrokeMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSwitchPointsMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValidBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveCurrentPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectAllPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEndPointsRemovable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEndPointsXMovable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEndPointsYMovable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSwitchPointsMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUserBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValidBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
