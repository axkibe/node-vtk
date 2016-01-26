/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPlotWrap.h"
#include "vtkPlotPointsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkScalarsToColorsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlotPointsWrap::ptpl;

VtkPlotPointsWrap::VtkPlotPointsWrap()
{ }

VtkPlotPointsWrap::VtkPlotPointsWrap(vtkSmartPointer<vtkPlotPoints> _native)
{ native = _native; }

VtkPlotPointsWrap::~VtkPlotPointsWrap()
{ }

void VtkPlotPointsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlotPoints").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlotPoints").ToLocalChecked(), ConstructorGetter);
}

void VtkPlotPointsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlotPointsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlotWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlotWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlotPointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLookupTable", CreateDefaultLookupTable);
	Nan::SetPrototypeMethod(tpl, "createDefaultLookupTable", CreateDefaultLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLookupTable", GetLookupTable);
	Nan::SetPrototypeMethod(tpl, "getLookupTable", GetLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetMarkerStyle", GetMarkerStyle);
	Nan::SetPrototypeMethod(tpl, "getMarkerStyle", GetMarkerStyle);

	Nan::SetPrototypeMethod(tpl, "GetScalarVisibility", GetScalarVisibility);
	Nan::SetPrototypeMethod(tpl, "getScalarVisibility", GetScalarVisibility);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalarVisibilityOff", ScalarVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "scalarVisibilityOff", ScalarVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "ScalarVisibilityOn", ScalarVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "scalarVisibilityOn", ScalarVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "SetLookupTable", SetLookupTable);
	Nan::SetPrototypeMethod(tpl, "setLookupTable", SetLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetMarkerStyle", SetMarkerStyle);
	Nan::SetPrototypeMethod(tpl, "setMarkerStyle", SetMarkerStyle);

	Nan::SetPrototypeMethod(tpl, "SetScalarVisibility", SetScalarVisibility);
	Nan::SetPrototypeMethod(tpl, "setScalarVisibility", SetScalarVisibility);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkPlotPointsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlotPoints> native = vtkSmartPointer<vtkPlotPoints>::New();
		VtkPlotPointsWrap* obj = new VtkPlotPointsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPlotPointsWrap::CreateDefaultLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLookupTable();
}

void VtkPlotPointsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlotPointsWrap::GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLookupTable();
		VtkScalarsToColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotPointsWrap::GetMarkerStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMarkerStyle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlotPointsWrap::GetScalarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlotPointsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
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

void VtkPlotPointsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	vtkPlotPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPlotPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlotPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotPointsWrap *w = new VtkPlotPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotPointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlotPoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPlotPointsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlotPointsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotPointsWrap *w = new VtkPlotPointsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotPointsWrap::ScalarVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarVisibilityOff();
}

void VtkPlotPointsWrap::ScalarVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarVisibilityOn();
}

void VtkPlotPointsWrap::SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLookupTable(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotPointsWrap::SetMarkerStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMarkerStyle(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotPointsWrap::SetScalarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotPointsWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPointsWrap>(info.Holder());
	vtkPlotPoints *native = (vtkPlotPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

