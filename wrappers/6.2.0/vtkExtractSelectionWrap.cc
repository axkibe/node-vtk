/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkExtractSelectionBaseWrap.h"
#include "vtkExtractSelectionWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractSelectionWrap::ptpl;

VtkExtractSelectionWrap::VtkExtractSelectionWrap()
{ }

VtkExtractSelectionWrap::VtkExtractSelectionWrap(vtkSmartPointer<vtkExtractSelection> _native)
{ native = _native; }

VtkExtractSelectionWrap::~VtkExtractSelectionWrap()
{ }

void VtkExtractSelectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractSelection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractSelection").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractSelectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractSelectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExtractSelectionBaseWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExtractSelectionBaseWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractSelectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetShowBounds", GetShowBounds);
	Nan::SetPrototypeMethod(tpl, "getShowBounds", GetShowBounds);

	Nan::SetPrototypeMethod(tpl, "GetUseProbeForLocations", GetUseProbeForLocations);
	Nan::SetPrototypeMethod(tpl, "getUseProbeForLocations", GetUseProbeForLocations);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetShowBounds", SetShowBounds);
	Nan::SetPrototypeMethod(tpl, "setShowBounds", SetShowBounds);

	Nan::SetPrototypeMethod(tpl, "SetUseProbeForLocations", SetUseProbeForLocations);
	Nan::SetPrototypeMethod(tpl, "setUseProbeForLocations", SetUseProbeForLocations);

	Nan::SetPrototypeMethod(tpl, "ShowBoundsOff", ShowBoundsOff);
	Nan::SetPrototypeMethod(tpl, "showBoundsOff", ShowBoundsOff);

	Nan::SetPrototypeMethod(tpl, "ShowBoundsOn", ShowBoundsOn);
	Nan::SetPrototypeMethod(tpl, "showBoundsOn", ShowBoundsOn);

	Nan::SetPrototypeMethod(tpl, "UseProbeForLocationsOff", UseProbeForLocationsOff);
	Nan::SetPrototypeMethod(tpl, "useProbeForLocationsOff", UseProbeForLocationsOff);

	Nan::SetPrototypeMethod(tpl, "UseProbeForLocationsOn", UseProbeForLocationsOn);
	Nan::SetPrototypeMethod(tpl, "useProbeForLocationsOn", UseProbeForLocationsOn);

	ptpl.Reset( tpl );
}

void VtkExtractSelectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractSelection> native = vtkSmartPointer<vtkExtractSelection>::New();
		VtkExtractSelectionWrap* obj = new VtkExtractSelectionWrap(native);
		obj->Wrap(info.This());
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

void VtkExtractSelectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractSelectionWrap::GetShowBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowBounds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractSelectionWrap::GetUseProbeForLocations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseProbeForLocations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractSelectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
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

void VtkExtractSelectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	vtkExtractSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExtractSelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractSelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractSelectionWrap *w = new VtkExtractSelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractSelectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractSelection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExtractSelectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractSelectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractSelectionWrap *w = new VtkExtractSelectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractSelectionWrap::SetShowBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowBounds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractSelectionWrap::SetUseProbeForLocations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseProbeForLocations(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractSelectionWrap::ShowBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowBoundsOff();
}

void VtkExtractSelectionWrap::ShowBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowBoundsOn();
}

void VtkExtractSelectionWrap::UseProbeForLocationsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseProbeForLocationsOff();
}

void VtkExtractSelectionWrap::UseProbeForLocationsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info.Holder());
	vtkExtractSelection *native = (vtkExtractSelection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseProbeForLocationsOn();
}

