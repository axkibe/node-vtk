/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkColorSeriesWrap.h"
#include "vtkLookupTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkColorSeriesWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkColorSeriesWrap::ptpl;

VtkColorSeriesWrap::VtkColorSeriesWrap()
{ }

VtkColorSeriesWrap::VtkColorSeriesWrap(vtkSmartPointer<vtkColorSeries> _native)
{ native = _native; }

VtkColorSeriesWrap::~VtkColorSeriesWrap()
{ }

void VtkColorSeriesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkColorSeries").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ColorSeries").ToLocalChecked(), ConstructorGetter);
}

void VtkColorSeriesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkColorSeriesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkColorSeriesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildLookupTable", BuildLookupTable);
	Nan::SetPrototypeMethod(tpl, "buildLookupTable", BuildLookupTable);

	Nan::SetPrototypeMethod(tpl, "ClearColors", ClearColors);
	Nan::SetPrototypeMethod(tpl, "clearColors", ClearColors);

	Nan::SetPrototypeMethod(tpl, "CreateLookupTable", CreateLookupTable);
	Nan::SetPrototypeMethod(tpl, "createLookupTable", CreateLookupTable);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorScheme", GetColorScheme);
	Nan::SetPrototypeMethod(tpl, "getColorScheme", GetColorScheme);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfColorSchemes", GetNumberOfColorSchemes);
	Nan::SetPrototypeMethod(tpl, "getNumberOfColorSchemes", GetNumberOfColorSchemes);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfColors", GetNumberOfColors);
	Nan::SetPrototypeMethod(tpl, "getNumberOfColors", GetNumberOfColors);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveColor", RemoveColor);
	Nan::SetPrototypeMethod(tpl, "removeColor", RemoveColor);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorScheme", SetColorScheme);
	Nan::SetPrototypeMethod(tpl, "setColorScheme", SetColorScheme);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfColors", SetNumberOfColors);
	Nan::SetPrototypeMethod(tpl, "setNumberOfColors", SetNumberOfColors);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkColorSeriesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkColorSeries> native = vtkSmartPointer<vtkColorSeries>::New();
		VtkColorSeriesWrap* obj = new VtkColorSeriesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkColorSeriesWrap::BuildLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkLookupTableWrap::ptpl))->HasInstance(info[0]))
	{
		VtkLookupTableWrap *a0 = ObjectWrap::Unwrap<VtkLookupTableWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->BuildLookupTable(
			(vtkLookupTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkColorSeriesWrap::ClearColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearColors();
}

void VtkColorSeriesWrap::CreateLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	vtkLookupTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CreateLookupTable();
		VtkLookupTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLookupTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLookupTableWrap *w = new VtkLookupTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkColorSeriesWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkColorSeriesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkColorSeriesWrap *a0 = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkColorSeries *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkColorSeriesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkColorSeriesWrap::GetColorScheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorScheme();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkColorSeriesWrap::GetNumberOfColorSchemes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfColorSchemes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkColorSeriesWrap::GetNumberOfColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfColors();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkColorSeriesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
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

void VtkColorSeriesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	vtkColorSeries * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkColorSeriesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkColorSeriesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkColorSeriesWrap *w = new VtkColorSeriesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkColorSeriesWrap::RemoveColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveColor(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkColorSeriesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkColorSeries * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkColorSeriesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkColorSeriesWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkColorSeriesWrap *w = new VtkColorSeriesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkColorSeriesWrap::SetColorScheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorScheme(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkColorSeriesWrap::SetNumberOfColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorSeriesWrap *wrapper = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info.Holder());
	vtkColorSeries *native = (vtkColorSeries *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfColors(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

