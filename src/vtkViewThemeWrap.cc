/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkViewThemeWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "vtkTextPropertyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkViewThemeWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkViewThemeWrap::ptpl;

VtkViewThemeWrap::VtkViewThemeWrap()
{ }

VtkViewThemeWrap::VtkViewThemeWrap(vtkSmartPointer<vtkViewTheme> _native)
{ native = _native; }

VtkViewThemeWrap::~VtkViewThemeWrap()
{ }

void VtkViewThemeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkViewTheme").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ViewTheme").ToLocalChecked(), ConstructorGetter);
}

void VtkViewThemeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkViewThemeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkViewThemeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateMellowTheme", CreateMellowTheme);
	Nan::SetPrototypeMethod(tpl, "createMellowTheme", CreateMellowTheme);

	Nan::SetPrototypeMethod(tpl, "CreateNeonTheme", CreateNeonTheme);
	Nan::SetPrototypeMethod(tpl, "createNeonTheme", CreateNeonTheme);

	Nan::SetPrototypeMethod(tpl, "CreateOceanTheme", CreateOceanTheme);
	Nan::SetPrototypeMethod(tpl, "createOceanTheme", CreateOceanTheme);

	Nan::SetPrototypeMethod(tpl, "GetCellLookupTable", GetCellLookupTable);
	Nan::SetPrototypeMethod(tpl, "getCellLookupTable", GetCellLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetCellOpacity", GetCellOpacity);
	Nan::SetPrototypeMethod(tpl, "getCellOpacity", GetCellOpacity);

	Nan::SetPrototypeMethod(tpl, "GetCellTextProperty", GetCellTextProperty);
	Nan::SetPrototypeMethod(tpl, "getCellTextProperty", GetCellTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLineWidth", GetLineWidth);
	Nan::SetPrototypeMethod(tpl, "getLineWidth", GetLineWidth);

	Nan::SetPrototypeMethod(tpl, "GetPointLookupTable", GetPointLookupTable);
	Nan::SetPrototypeMethod(tpl, "getPointLookupTable", GetPointLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetPointOpacity", GetPointOpacity);
	Nan::SetPrototypeMethod(tpl, "getPointOpacity", GetPointOpacity);

	Nan::SetPrototypeMethod(tpl, "GetPointSize", GetPointSize);
	Nan::SetPrototypeMethod(tpl, "getPointSize", GetPointSize);

	Nan::SetPrototypeMethod(tpl, "GetPointTextProperty", GetPointTextProperty);
	Nan::SetPrototypeMethod(tpl, "getPointTextProperty", GetPointTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedCellOpacity", GetSelectedCellOpacity);
	Nan::SetPrototypeMethod(tpl, "getSelectedCellOpacity", GetSelectedCellOpacity);

	Nan::SetPrototypeMethod(tpl, "GetSelectedPointOpacity", GetSelectedPointOpacity);
	Nan::SetPrototypeMethod(tpl, "getSelectedPointOpacity", GetSelectedPointOpacity);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScaleCellLookupTableOff", ScaleCellLookupTableOff);
	Nan::SetPrototypeMethod(tpl, "scaleCellLookupTableOff", ScaleCellLookupTableOff);

	Nan::SetPrototypeMethod(tpl, "ScaleCellLookupTableOn", ScaleCellLookupTableOn);
	Nan::SetPrototypeMethod(tpl, "scaleCellLookupTableOn", ScaleCellLookupTableOn);

	Nan::SetPrototypeMethod(tpl, "ScalePointLookupTableOff", ScalePointLookupTableOff);
	Nan::SetPrototypeMethod(tpl, "scalePointLookupTableOff", ScalePointLookupTableOff);

	Nan::SetPrototypeMethod(tpl, "ScalePointLookupTableOn", ScalePointLookupTableOn);
	Nan::SetPrototypeMethod(tpl, "scalePointLookupTableOn", ScalePointLookupTableOn);

	Nan::SetPrototypeMethod(tpl, "SetBackgroundColor", SetBackgroundColor);
	Nan::SetPrototypeMethod(tpl, "setBackgroundColor", SetBackgroundColor);

	Nan::SetPrototypeMethod(tpl, "SetBackgroundColor2", SetBackgroundColor2);
	Nan::SetPrototypeMethod(tpl, "setBackgroundColor2", SetBackgroundColor2);

	Nan::SetPrototypeMethod(tpl, "SetCellAlphaRange", SetCellAlphaRange);
	Nan::SetPrototypeMethod(tpl, "setCellAlphaRange", SetCellAlphaRange);

	Nan::SetPrototypeMethod(tpl, "SetCellColor", SetCellColor);
	Nan::SetPrototypeMethod(tpl, "setCellColor", SetCellColor);

	Nan::SetPrototypeMethod(tpl, "SetCellHueRange", SetCellHueRange);
	Nan::SetPrototypeMethod(tpl, "setCellHueRange", SetCellHueRange);

	Nan::SetPrototypeMethod(tpl, "SetCellLookupTable", SetCellLookupTable);
	Nan::SetPrototypeMethod(tpl, "setCellLookupTable", SetCellLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetCellOpacity", SetCellOpacity);
	Nan::SetPrototypeMethod(tpl, "setCellOpacity", SetCellOpacity);

	Nan::SetPrototypeMethod(tpl, "SetCellSaturationRange", SetCellSaturationRange);
	Nan::SetPrototypeMethod(tpl, "setCellSaturationRange", SetCellSaturationRange);

	Nan::SetPrototypeMethod(tpl, "SetCellTextProperty", SetCellTextProperty);
	Nan::SetPrototypeMethod(tpl, "setCellTextProperty", SetCellTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetCellValueRange", SetCellValueRange);
	Nan::SetPrototypeMethod(tpl, "setCellValueRange", SetCellValueRange);

	Nan::SetPrototypeMethod(tpl, "SetEdgeLabelColor", SetEdgeLabelColor);
	Nan::SetPrototypeMethod(tpl, "setEdgeLabelColor", SetEdgeLabelColor);

	Nan::SetPrototypeMethod(tpl, "SetLineWidth", SetLineWidth);
	Nan::SetPrototypeMethod(tpl, "setLineWidth", SetLineWidth);

	Nan::SetPrototypeMethod(tpl, "SetOutlineColor", SetOutlineColor);
	Nan::SetPrototypeMethod(tpl, "setOutlineColor", SetOutlineColor);

	Nan::SetPrototypeMethod(tpl, "SetPointAlphaRange", SetPointAlphaRange);
	Nan::SetPrototypeMethod(tpl, "setPointAlphaRange", SetPointAlphaRange);

	Nan::SetPrototypeMethod(tpl, "SetPointColor", SetPointColor);
	Nan::SetPrototypeMethod(tpl, "setPointColor", SetPointColor);

	Nan::SetPrototypeMethod(tpl, "SetPointHueRange", SetPointHueRange);
	Nan::SetPrototypeMethod(tpl, "setPointHueRange", SetPointHueRange);

	Nan::SetPrototypeMethod(tpl, "SetPointLookupTable", SetPointLookupTable);
	Nan::SetPrototypeMethod(tpl, "setPointLookupTable", SetPointLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetPointOpacity", SetPointOpacity);
	Nan::SetPrototypeMethod(tpl, "setPointOpacity", SetPointOpacity);

	Nan::SetPrototypeMethod(tpl, "SetPointSaturationRange", SetPointSaturationRange);
	Nan::SetPrototypeMethod(tpl, "setPointSaturationRange", SetPointSaturationRange);

	Nan::SetPrototypeMethod(tpl, "SetPointSize", SetPointSize);
	Nan::SetPrototypeMethod(tpl, "setPointSize", SetPointSize);

	Nan::SetPrototypeMethod(tpl, "SetPointTextProperty", SetPointTextProperty);
	Nan::SetPrototypeMethod(tpl, "setPointTextProperty", SetPointTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetPointValueRange", SetPointValueRange);
	Nan::SetPrototypeMethod(tpl, "setPointValueRange", SetPointValueRange);

	Nan::SetPrototypeMethod(tpl, "SetSelectedCellColor", SetSelectedCellColor);
	Nan::SetPrototypeMethod(tpl, "setSelectedCellColor", SetSelectedCellColor);

	Nan::SetPrototypeMethod(tpl, "SetSelectedCellOpacity", SetSelectedCellOpacity);
	Nan::SetPrototypeMethod(tpl, "setSelectedCellOpacity", SetSelectedCellOpacity);

	Nan::SetPrototypeMethod(tpl, "SetSelectedPointColor", SetSelectedPointColor);
	Nan::SetPrototypeMethod(tpl, "setSelectedPointColor", SetSelectedPointColor);

	Nan::SetPrototypeMethod(tpl, "SetSelectedPointOpacity", SetSelectedPointOpacity);
	Nan::SetPrototypeMethod(tpl, "setSelectedPointOpacity", SetSelectedPointOpacity);

	Nan::SetPrototypeMethod(tpl, "SetVertexLabelColor", SetVertexLabelColor);
	Nan::SetPrototypeMethod(tpl, "setVertexLabelColor", SetVertexLabelColor);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkViewThemeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkViewTheme> native = vtkSmartPointer<vtkViewTheme>::New();
		VtkViewThemeWrap* obj = new VtkViewThemeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkViewThemeWrap::CreateMellowTheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	vtkViewTheme * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CreateMellowTheme();
		VtkViewThemeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkViewThemeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewThemeWrap *w = new VtkViewThemeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewThemeWrap::CreateNeonTheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	vtkViewTheme * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CreateNeonTheme();
		VtkViewThemeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkViewThemeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewThemeWrap *w = new VtkViewThemeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewThemeWrap::CreateOceanTheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	vtkViewTheme * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CreateOceanTheme();
		VtkViewThemeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkViewThemeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewThemeWrap *w = new VtkViewThemeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewThemeWrap::GetCellLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellLookupTable();
		VtkScalarsToColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkScalarsToColorsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewThemeWrap::GetCellOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewThemeWrap::GetCellTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellTextProperty();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTextPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewThemeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkViewThemeWrap::GetLineWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewThemeWrap::GetPointLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointLookupTable();
		VtkScalarsToColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkScalarsToColorsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewThemeWrap::GetPointOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewThemeWrap::GetPointSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewThemeWrap::GetPointTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointTextProperty();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTextPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewThemeWrap::GetSelectedCellOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedCellOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewThemeWrap::GetSelectedPointOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedPointOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewThemeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkViewThemeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	vtkViewTheme * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkViewThemeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkViewThemeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewThemeWrap *w = new VtkViewThemeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewThemeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkViewTheme * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkViewThemeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkViewThemeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkViewThemeWrap *w = new VtkViewThemeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::ScaleCellLookupTableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScaleCellLookupTableOff();
}

void VtkViewThemeWrap::ScaleCellLookupTableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScaleCellLookupTableOn();
}

void VtkViewThemeWrap::ScalePointLookupTableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalePointLookupTableOff();
}

void VtkViewThemeWrap::ScalePointLookupTableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalePointLookupTableOn();
}

void VtkViewThemeWrap::SetBackgroundColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetBackgroundColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetBackgroundColor2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetBackgroundColor2(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetCellAlphaRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCellAlphaRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetCellColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetCellColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetCellHueRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCellHueRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetCellLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellLookupTable(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetCellOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetCellSaturationRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCellSaturationRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetCellTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetCellValueRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCellValueRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetEdgeLabelColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetEdgeLabelColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetLineWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLineWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetOutlineColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOutlineColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetPointAlphaRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPointAlphaRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetPointColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetPointColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetPointHueRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPointHueRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetPointLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointLookupTable(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetPointOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetPointSaturationRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPointSaturationRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetPointSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetPointTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetPointValueRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPointValueRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetSelectedCellColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetSelectedCellColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetSelectedCellOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedCellOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetSelectedPointColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetSelectedPointColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetSelectedPointOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedPointOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewThemeWrap::SetVertexLabelColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewThemeWrap *wrapper = ObjectWrap::Unwrap<VtkViewThemeWrap>(info.Holder());
	vtkViewTheme *native = (vtkViewTheme *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetVertexLabelColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

