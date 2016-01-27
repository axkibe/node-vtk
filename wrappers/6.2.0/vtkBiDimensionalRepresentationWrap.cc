/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkBiDimensionalRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkHandleRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBiDimensionalRepresentationWrap::ptpl;

VtkBiDimensionalRepresentationWrap::VtkBiDimensionalRepresentationWrap()
{ }

VtkBiDimensionalRepresentationWrap::VtkBiDimensionalRepresentationWrap(vtkSmartPointer<vtkBiDimensionalRepresentation> _native)
{ native = _native; }

VtkBiDimensionalRepresentationWrap::~VtkBiDimensionalRepresentationWrap()
{ }

void VtkBiDimensionalRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBiDimensionalRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BiDimensionalRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkBiDimensionalRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBiDimensionalRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBiDimensionalRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLabelFormat", GetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "getLabelFormat", GetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "GetLabelText", GetLabelText);
	Nan::SetPrototypeMethod(tpl, "getLabelText", GetLabelText);

	Nan::SetPrototypeMethod(tpl, "GetLength1", GetLength1);
	Nan::SetPrototypeMethod(tpl, "getLength1", GetLength1);

	Nan::SetPrototypeMethod(tpl, "GetLength2", GetLength2);
	Nan::SetPrototypeMethod(tpl, "getLength2", GetLength2);

	Nan::SetPrototypeMethod(tpl, "GetLine1Visibility", GetLine1Visibility);
	Nan::SetPrototypeMethod(tpl, "getLine1Visibility", GetLine1Visibility);

	Nan::SetPrototypeMethod(tpl, "GetLine2Visibility", GetLine2Visibility);
	Nan::SetPrototypeMethod(tpl, "getLine2Visibility", GetLine2Visibility);

	Nan::SetPrototypeMethod(tpl, "GetPoint1Representation", GetPoint1Representation);
	Nan::SetPrototypeMethod(tpl, "getPoint1Representation", GetPoint1Representation);

	Nan::SetPrototypeMethod(tpl, "GetPoint2Representation", GetPoint2Representation);
	Nan::SetPrototypeMethod(tpl, "getPoint2Representation", GetPoint2Representation);

	Nan::SetPrototypeMethod(tpl, "GetPoint3Representation", GetPoint3Representation);
	Nan::SetPrototypeMethod(tpl, "getPoint3Representation", GetPoint3Representation);

	Nan::SetPrototypeMethod(tpl, "GetPoint4Representation", GetPoint4Representation);
	Nan::SetPrototypeMethod(tpl, "getPoint4Representation", GetPoint4Representation);

	Nan::SetPrototypeMethod(tpl, "GetShowLabelAboveWidget", GetShowLabelAboveWidget);
	Nan::SetPrototypeMethod(tpl, "getShowLabelAboveWidget", GetShowLabelAboveWidget);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "InstantiateHandleRepresentation", InstantiateHandleRepresentation);
	Nan::SetPrototypeMethod(tpl, "instantiateHandleRepresentation", InstantiateHandleRepresentation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Line1VisibilityOff", Line1VisibilityOff);
	Nan::SetPrototypeMethod(tpl, "line1VisibilityOff", Line1VisibilityOff);

	Nan::SetPrototypeMethod(tpl, "Line1VisibilityOn", Line1VisibilityOn);
	Nan::SetPrototypeMethod(tpl, "line1VisibilityOn", Line1VisibilityOn);

	Nan::SetPrototypeMethod(tpl, "Line2VisibilityOff", Line2VisibilityOff);
	Nan::SetPrototypeMethod(tpl, "line2VisibilityOff", Line2VisibilityOff);

	Nan::SetPrototypeMethod(tpl, "Line2VisibilityOn", Line2VisibilityOn);
	Nan::SetPrototypeMethod(tpl, "line2VisibilityOn", Line2VisibilityOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHandleRepresentation", SetHandleRepresentation);
	Nan::SetPrototypeMethod(tpl, "setHandleRepresentation", SetHandleRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetLabelFormat", SetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "setLabelFormat", SetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "SetLine1Visibility", SetLine1Visibility);
	Nan::SetPrototypeMethod(tpl, "setLine1Visibility", SetLine1Visibility);

	Nan::SetPrototypeMethod(tpl, "SetLine2Visibility", SetLine2Visibility);
	Nan::SetPrototypeMethod(tpl, "setLine2Visibility", SetLine2Visibility);

	Nan::SetPrototypeMethod(tpl, "SetShowLabelAboveWidget", SetShowLabelAboveWidget);
	Nan::SetPrototypeMethod(tpl, "setShowLabelAboveWidget", SetShowLabelAboveWidget);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "ShowLabelAboveWidgetOff", ShowLabelAboveWidgetOff);
	Nan::SetPrototypeMethod(tpl, "showLabelAboveWidgetOff", ShowLabelAboveWidgetOff);

	Nan::SetPrototypeMethod(tpl, "ShowLabelAboveWidgetOn", ShowLabelAboveWidgetOn);
	Nan::SetPrototypeMethod(tpl, "showLabelAboveWidgetOn", ShowLabelAboveWidgetOn);

	ptpl.Reset( tpl );
}

void VtkBiDimensionalRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBiDimensionalRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBiDimensionalRepresentationWrap::GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelFormat();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBiDimensionalRepresentationWrap::GetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBiDimensionalRepresentationWrap::GetLength1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLength1();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiDimensionalRepresentationWrap::GetLength2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLength2();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiDimensionalRepresentationWrap::GetLine1Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLine1Visibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiDimensionalRepresentationWrap::GetLine2Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLine2Visibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiDimensionalRepresentationWrap::GetPoint1Representation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	vtkHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint1Representation();
		VtkHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBiDimensionalRepresentationWrap::GetPoint2Representation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	vtkHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint2Representation();
		VtkHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBiDimensionalRepresentationWrap::GetPoint3Representation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	vtkHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint3Representation();
		VtkHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBiDimensionalRepresentationWrap::GetPoint4Representation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	vtkHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint4Representation();
		VtkHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBiDimensionalRepresentationWrap::GetShowLabelAboveWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowLabelAboveWidget();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiDimensionalRepresentationWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiDimensionalRepresentationWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiDimensionalRepresentationWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiDimensionalRepresentationWrap::InstantiateHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InstantiateHandleRepresentation();
}

void VtkBiDimensionalRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
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

void VtkBiDimensionalRepresentationWrap::Line1VisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Line1VisibilityOff();
}

void VtkBiDimensionalRepresentationWrap::Line1VisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Line1VisibilityOn();
}

void VtkBiDimensionalRepresentationWrap::Line2VisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Line2VisibilityOff();
}

void VtkBiDimensionalRepresentationWrap::Line2VisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Line2VisibilityOn();
}

void VtkBiDimensionalRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	vtkBiDimensionalRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBiDimensionalRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBiDimensionalRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBiDimensionalRepresentationWrap *w = new VtkBiDimensionalRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBiDimensionalRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBiDimensionalRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBiDimensionalRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBiDimensionalRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBiDimensionalRepresentationWrap *w = new VtkBiDimensionalRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiDimensionalRepresentationWrap::SetHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHandleRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHandleRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleRepresentation(
			(vtkHandleRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiDimensionalRepresentationWrap::SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
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

void VtkBiDimensionalRepresentationWrap::SetLine1Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLine1Visibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiDimensionalRepresentationWrap::SetLine2Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLine2Visibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiDimensionalRepresentationWrap::SetShowLabelAboveWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowLabelAboveWidget(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiDimensionalRepresentationWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiDimensionalRepresentationWrap::ShowLabelAboveWidgetOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowLabelAboveWidgetOff();
}

void VtkBiDimensionalRepresentationWrap::ShowLabelAboveWidgetOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info.Holder());
	vtkBiDimensionalRepresentation *native = (vtkBiDimensionalRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowLabelAboveWidgetOn();
}

