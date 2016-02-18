/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkExtractSelectionBaseWrap.h"
#include "vtkProbeSelectedLocationsWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProbeSelectedLocationsWrap::ptpl;

VtkProbeSelectedLocationsWrap::VtkProbeSelectedLocationsWrap()
{ }

VtkProbeSelectedLocationsWrap::VtkProbeSelectedLocationsWrap(vtkSmartPointer<vtkProbeSelectedLocations> _native)
{ native = _native; }

VtkProbeSelectedLocationsWrap::~VtkProbeSelectedLocationsWrap()
{ }

void VtkProbeSelectedLocationsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProbeSelectedLocations").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProbeSelectedLocations").ToLocalChecked(), ConstructorGetter);
}

void VtkProbeSelectedLocationsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProbeSelectedLocationsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExtractSelectionBaseWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExtractSelectionBaseWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProbeSelectedLocationsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKPROBESELECTEDLOCATIONSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPROBESELECTEDLOCATIONSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkProbeSelectedLocationsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProbeSelectedLocations> native = vtkSmartPointer<vtkProbeSelectedLocations>::New();
		VtkProbeSelectedLocationsWrap* obj = new VtkProbeSelectedLocationsWrap(native);
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

void VtkProbeSelectedLocationsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeSelectedLocationsWrap *wrapper = ObjectWrap::Unwrap<VtkProbeSelectedLocationsWrap>(info.Holder());
	vtkProbeSelectedLocations *native = (vtkProbeSelectedLocations *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProbeSelectedLocationsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeSelectedLocationsWrap *wrapper = ObjectWrap::Unwrap<VtkProbeSelectedLocationsWrap>(info.Holder());
	vtkProbeSelectedLocations *native = (vtkProbeSelectedLocations *)wrapper->native.GetPointer();
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

void VtkProbeSelectedLocationsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeSelectedLocationsWrap *wrapper = ObjectWrap::Unwrap<VtkProbeSelectedLocationsWrap>(info.Holder());
	vtkProbeSelectedLocations *native = (vtkProbeSelectedLocations *)wrapper->native.GetPointer();
	vtkProbeSelectedLocations * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkProbeSelectedLocationsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProbeSelectedLocationsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProbeSelectedLocationsWrap *w = new VtkProbeSelectedLocationsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProbeSelectedLocationsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeSelectedLocationsWrap *wrapper = ObjectWrap::Unwrap<VtkProbeSelectedLocationsWrap>(info.Holder());
	vtkProbeSelectedLocations *native = (vtkProbeSelectedLocations *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProbeSelectedLocations * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkProbeSelectedLocationsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProbeSelectedLocationsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProbeSelectedLocationsWrap *w = new VtkProbeSelectedLocationsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

