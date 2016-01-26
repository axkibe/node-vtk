/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkChartLegendWrap.h"
#include "vtkCategoryLegendWrap.h"
#include "vtkObjectWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "vtkVariantArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCategoryLegendWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCategoryLegendWrap::ptpl;

VtkCategoryLegendWrap::VtkCategoryLegendWrap()
{ }

VtkCategoryLegendWrap::VtkCategoryLegendWrap(vtkSmartPointer<vtkCategoryLegend> _native)
{ native = _native; }

VtkCategoryLegendWrap::~VtkCategoryLegendWrap()
{ }

void VtkCategoryLegendWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCategoryLegend").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CategoryLegend").ToLocalChecked(), ConstructorGetter);
}

void VtkCategoryLegendWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCategoryLegendWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkChartLegendWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkChartLegendWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCategoryLegendWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetScalarsToColors", GetScalarsToColors);
	Nan::SetPrototypeMethod(tpl, "getScalarsToColors", GetScalarsToColors);

	Nan::SetPrototypeMethod(tpl, "GetValues", GetValues);
	Nan::SetPrototypeMethod(tpl, "getValues", GetValues);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetScalarsToColors", SetScalarsToColors);
	Nan::SetPrototypeMethod(tpl, "setScalarsToColors", SetScalarsToColors);

	Nan::SetPrototypeMethod(tpl, "SetValues", SetValues);
	Nan::SetPrototypeMethod(tpl, "setValues", SetValues);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkCategoryLegendWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCategoryLegend> native = vtkSmartPointer<vtkCategoryLegend>::New();
		VtkCategoryLegendWrap* obj = new VtkCategoryLegendWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCategoryLegendWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCategoryLegendWrap *wrapper = ObjectWrap::Unwrap<VtkCategoryLegendWrap>(info.Holder());
	vtkCategoryLegend *native = (vtkCategoryLegend *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCategoryLegendWrap::GetScalarsToColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCategoryLegendWrap *wrapper = ObjectWrap::Unwrap<VtkCategoryLegendWrap>(info.Holder());
	vtkCategoryLegend *native = (vtkCategoryLegend *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarsToColors();
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

void VtkCategoryLegendWrap::GetValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCategoryLegendWrap *wrapper = ObjectWrap::Unwrap<VtkCategoryLegendWrap>(info.Holder());
	vtkCategoryLegend *native = (vtkCategoryLegend *)wrapper->native.GetPointer();
	vtkVariantArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValues();
		VtkVariantArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkVariantArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVariantArrayWrap *w = new VtkVariantArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCategoryLegendWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCategoryLegendWrap *wrapper = ObjectWrap::Unwrap<VtkCategoryLegendWrap>(info.Holder());
	vtkCategoryLegend *native = (vtkCategoryLegend *)wrapper->native.GetPointer();
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

void VtkCategoryLegendWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCategoryLegendWrap *wrapper = ObjectWrap::Unwrap<VtkCategoryLegendWrap>(info.Holder());
	vtkCategoryLegend *native = (vtkCategoryLegend *)wrapper->native.GetPointer();
	vtkCategoryLegend * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCategoryLegendWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCategoryLegendWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCategoryLegendWrap *w = new VtkCategoryLegendWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCategoryLegendWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCategoryLegendWrap *wrapper = ObjectWrap::Unwrap<VtkCategoryLegendWrap>(info.Holder());
	vtkCategoryLegend *native = (vtkCategoryLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCategoryLegend * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCategoryLegendWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCategoryLegendWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCategoryLegendWrap *w = new VtkCategoryLegendWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCategoryLegendWrap::SetScalarsToColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCategoryLegendWrap *wrapper = ObjectWrap::Unwrap<VtkCategoryLegendWrap>(info.Holder());
	vtkCategoryLegend *native = (vtkCategoryLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarsToColors(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCategoryLegendWrap::SetValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCategoryLegendWrap *wrapper = ObjectWrap::Unwrap<VtkCategoryLegendWrap>(info.Holder());
	vtkCategoryLegend *native = (vtkCategoryLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkVariantArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkVariantArrayWrap *a0 = ObjectWrap::Unwrap<VtkVariantArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValues(
			(vtkVariantArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

