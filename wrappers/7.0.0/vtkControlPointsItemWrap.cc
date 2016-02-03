/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPlotWrap.h"
#include "vtkControlPointsItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkPenWrap.h"
#include "vtkBrushWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkControlPointsItemWrap::ptpl;

VtkControlPointsItemWrap::VtkControlPointsItemWrap()
{ }

VtkControlPointsItemWrap::VtkControlPointsItemWrap(vtkSmartPointer<vtkControlPointsItem> _native)
{ native = _native; }

VtkControlPointsItemWrap::~VtkControlPointsItemWrap()
{ }

void VtkControlPointsItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkControlPointsItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ControlPointsItem").ToLocalChecked(), ConstructorGetter);
}

void VtkControlPointsItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkControlPointsItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlotWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlotWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkControlPointsItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeselectAllPoints", DeselectAllPoints);
	Nan::SetPrototypeMethod(tpl, "deselectAllPoints", DeselectAllPoints);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetControlPointsIds", GetControlPointsIds);
	Nan::SetPrototypeMethod(tpl, "getControlPointsIds", GetControlPointsIds);

	Nan::SetPrototypeMethod(tpl, "GetEndPointsMovable", GetEndPointsMovable);
	Nan::SetPrototypeMethod(tpl, "getEndPointsMovable", GetEndPointsMovable);

	Nan::SetPrototypeMethod(tpl, "GetEndPointsRemovable", GetEndPointsRemovable);
	Nan::SetPrototypeMethod(tpl, "getEndPointsRemovable", GetEndPointsRemovable);

	Nan::SetPrototypeMethod(tpl, "GetEndPointsXMovable", GetEndPointsXMovable);
	Nan::SetPrototypeMethod(tpl, "getEndPointsXMovable", GetEndPointsXMovable);

	Nan::SetPrototypeMethod(tpl, "GetEndPointsYMovable", GetEndPointsYMovable);
	Nan::SetPrototypeMethod(tpl, "getEndPointsYMovable", GetEndPointsYMovable);

	Nan::SetPrototypeMethod(tpl, "GetLabelFormat", GetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "getLabelFormat", GetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "GetSelectedPointBrush", GetSelectedPointBrush);
	Nan::SetPrototypeMethod(tpl, "getSelectedPointBrush", GetSelectedPointBrush);

	Nan::SetPrototypeMethod(tpl, "GetSelectedPointPen", GetSelectedPointPen);
	Nan::SetPrototypeMethod(tpl, "getSelectedPointPen", GetSelectedPointPen);

	Nan::SetPrototypeMethod(tpl, "GetShowLabels", GetShowLabels);
	Nan::SetPrototypeMethod(tpl, "getShowLabels", GetShowLabels);

	Nan::SetPrototypeMethod(tpl, "GetStrokeMode", GetStrokeMode);
	Nan::SetPrototypeMethod(tpl, "getStrokeMode", GetStrokeMode);

	Nan::SetPrototypeMethod(tpl, "GetSwitchPointsMode", GetSwitchPointsMode);
	Nan::SetPrototypeMethod(tpl, "getSwitchPointsMode", GetSwitchPointsMode);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "RemoveCurrentPoint", RemoveCurrentPoint);
	Nan::SetPrototypeMethod(tpl, "removeCurrentPoint", RemoveCurrentPoint);

	Nan::SetPrototypeMethod(tpl, "ResetBounds", ResetBounds);
	Nan::SetPrototypeMethod(tpl, "resetBounds", ResetBounds);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SelectAllPoints", SelectAllPoints);
	Nan::SetPrototypeMethod(tpl, "selectAllPoints", SelectAllPoints);

	Nan::SetPrototypeMethod(tpl, "SetEndPointsRemovable", SetEndPointsRemovable);
	Nan::SetPrototypeMethod(tpl, "setEndPointsRemovable", SetEndPointsRemovable);

	Nan::SetPrototypeMethod(tpl, "SetEndPointsXMovable", SetEndPointsXMovable);
	Nan::SetPrototypeMethod(tpl, "setEndPointsXMovable", SetEndPointsXMovable);

	Nan::SetPrototypeMethod(tpl, "SetEndPointsYMovable", SetEndPointsYMovable);
	Nan::SetPrototypeMethod(tpl, "setEndPointsYMovable", SetEndPointsYMovable);

	Nan::SetPrototypeMethod(tpl, "SetLabelFormat", SetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "setLabelFormat", SetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "SetShowLabels", SetShowLabels);
	Nan::SetPrototypeMethod(tpl, "setShowLabels", SetShowLabels);

	Nan::SetPrototypeMethod(tpl, "SetSwitchPointsMode", SetSwitchPointsMode);
	Nan::SetPrototypeMethod(tpl, "setSwitchPointsMode", SetSwitchPointsMode);

	Nan::SetPrototypeMethod(tpl, "SetUserBounds", SetUserBounds);
	Nan::SetPrototypeMethod(tpl, "setUserBounds", SetUserBounds);

	Nan::SetPrototypeMethod(tpl, "SetValidBounds", SetValidBounds);
	Nan::SetPrototypeMethod(tpl, "setValidBounds", SetValidBounds);

	ptpl.Reset( tpl );
}

void VtkControlPointsItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkControlPointsItemWrap::DeselectAllPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeselectAllPoints();
}

void VtkControlPointsItemWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkControlPointsItemWrap::GetControlPointsIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsBoolean())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetControlPointsIds(
				(vtkIdTypeArray *) a0->native.GetPointer(),
				info[1]->BooleanValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::GetEndPointsMovable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndPointsMovable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkControlPointsItemWrap::GetEndPointsRemovable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndPointsRemovable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkControlPointsItemWrap::GetEndPointsXMovable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndPointsXMovable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkControlPointsItemWrap::GetEndPointsYMovable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndPointsYMovable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkControlPointsItemWrap::GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelFormat();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkControlPointsItemWrap::GetSelectedPointBrush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	vtkBrush * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedPointBrush();
		VtkBrushWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBrushWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBrushWrap *w = new VtkBrushWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkControlPointsItemWrap::GetSelectedPointPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	vtkPen * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedPointPen();
		VtkPenWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPenWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPenWrap *w = new VtkPenWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkControlPointsItemWrap::GetShowLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowLabels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkControlPointsItemWrap::GetStrokeMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStrokeMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkControlPointsItemWrap::GetSwitchPointsMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSwitchPointsMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkControlPointsItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	vtkControlPointsItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkControlPointsItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkControlPointsItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkControlPointsItemWrap *w = new VtkControlPointsItemWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkControlPointsItemWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Paint(
			(vtkContext2D *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::RemoveCurrentPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveCurrentPoint();
}

void VtkControlPointsItemWrap::ResetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetBounds();
}

void VtkControlPointsItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkControlPointsItem * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkControlPointsItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkControlPointsItemWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkControlPointsItemWrap *w = new VtkControlPointsItemWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::SelectAllPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SelectAllPoints();
}

void VtkControlPointsItemWrap::SetEndPointsRemovable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndPointsRemovable(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::SetEndPointsXMovable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndPointsXMovable(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::SetEndPointsYMovable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndPointsYMovable(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelFormat(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::SetShowLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowLabels(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::SetSwitchPointsMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSwitchPointsMode(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::SetUserBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUserBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUserBounds(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetUserBounds(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkControlPointsItemWrap::SetValidBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkControlPointsItemWrap>(info.Holder());
	vtkControlPointsItem *native = (vtkControlPointsItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValidBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValidBounds(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetValidBounds(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}
