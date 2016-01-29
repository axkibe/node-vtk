/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkCoordinateWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCoordinateWrap::ptpl;

VtkCoordinateWrap::VtkCoordinateWrap()
{ }

VtkCoordinateWrap::VtkCoordinateWrap(vtkSmartPointer<vtkCoordinate> _native)
{ native = _native; }

VtkCoordinateWrap::~VtkCoordinateWrap()
{ }

void VtkCoordinateWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCoordinate").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Coordinate").ToLocalChecked(), ConstructorGetter);
}

void VtkCoordinateWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCoordinateWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCoordinateWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCoordinateSystem", GetCoordinateSystem);
	Nan::SetPrototypeMethod(tpl, "getCoordinateSystem", GetCoordinateSystem);

	Nan::SetPrototypeMethod(tpl, "GetCoordinateSystemAsString", GetCoordinateSystemAsString);
	Nan::SetPrototypeMethod(tpl, "getCoordinateSystemAsString", GetCoordinateSystemAsString);

	Nan::SetPrototypeMethod(tpl, "GetReferenceCoordinate", GetReferenceCoordinate);
	Nan::SetPrototypeMethod(tpl, "getReferenceCoordinate", GetReferenceCoordinate);

	Nan::SetPrototypeMethod(tpl, "GetViewport", GetViewport);
	Nan::SetPrototypeMethod(tpl, "getViewport", GetViewport);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCoordinateSystem", SetCoordinateSystem);
	Nan::SetPrototypeMethod(tpl, "setCoordinateSystem", SetCoordinateSystem);

	Nan::SetPrototypeMethod(tpl, "SetCoordinateSystemToDisplay", SetCoordinateSystemToDisplay);
	Nan::SetPrototypeMethod(tpl, "setCoordinateSystemToDisplay", SetCoordinateSystemToDisplay);

	Nan::SetPrototypeMethod(tpl, "SetCoordinateSystemToNormalizedDisplay", SetCoordinateSystemToNormalizedDisplay);
	Nan::SetPrototypeMethod(tpl, "setCoordinateSystemToNormalizedDisplay", SetCoordinateSystemToNormalizedDisplay);

	Nan::SetPrototypeMethod(tpl, "SetCoordinateSystemToNormalizedViewport", SetCoordinateSystemToNormalizedViewport);
	Nan::SetPrototypeMethod(tpl, "setCoordinateSystemToNormalizedViewport", SetCoordinateSystemToNormalizedViewport);

	Nan::SetPrototypeMethod(tpl, "SetCoordinateSystemToView", SetCoordinateSystemToView);
	Nan::SetPrototypeMethod(tpl, "setCoordinateSystemToView", SetCoordinateSystemToView);

	Nan::SetPrototypeMethod(tpl, "SetCoordinateSystemToViewport", SetCoordinateSystemToViewport);
	Nan::SetPrototypeMethod(tpl, "setCoordinateSystemToViewport", SetCoordinateSystemToViewport);

	Nan::SetPrototypeMethod(tpl, "SetCoordinateSystemToWorld", SetCoordinateSystemToWorld);
	Nan::SetPrototypeMethod(tpl, "setCoordinateSystemToWorld", SetCoordinateSystemToWorld);

	Nan::SetPrototypeMethod(tpl, "SetReferenceCoordinate", SetReferenceCoordinate);
	Nan::SetPrototypeMethod(tpl, "setReferenceCoordinate", SetReferenceCoordinate);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	Nan::SetPrototypeMethod(tpl, "SetViewport", SetViewport);
	Nan::SetPrototypeMethod(tpl, "setViewport", SetViewport);

	ptpl.Reset( tpl );
}

void VtkCoordinateWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCoordinate> native = vtkSmartPointer<vtkCoordinate>::New();
		VtkCoordinateWrap* obj = new VtkCoordinateWrap(native);
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

void VtkCoordinateWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCoordinateWrap::GetCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoordinateSystem();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCoordinateWrap::GetCoordinateSystemAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoordinateSystemAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCoordinateWrap::GetReferenceCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	vtkCoordinate * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReferenceCoordinate();
		VtkCoordinateWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCoordinateWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCoordinateWrap *w = new VtkCoordinateWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCoordinateWrap::GetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	vtkViewport * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewport();
		VtkViewportWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkViewportWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewportWrap *w = new VtkViewportWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCoordinateWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
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

void VtkCoordinateWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	vtkCoordinate * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCoordinateWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCoordinateWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCoordinateWrap *w = new VtkCoordinateWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCoordinateWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCoordinate * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCoordinateWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCoordinateWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCoordinateWrap *w = new VtkCoordinateWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCoordinateWrap::SetCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCoordinateSystem(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCoordinateWrap::SetCoordinateSystemToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCoordinateSystemToDisplay();
}

void VtkCoordinateWrap::SetCoordinateSystemToNormalizedDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCoordinateSystemToNormalizedDisplay();
}

void VtkCoordinateWrap::SetCoordinateSystemToNormalizedViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCoordinateSystemToNormalizedViewport();
}

void VtkCoordinateWrap::SetCoordinateSystemToView(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCoordinateSystemToView();
}

void VtkCoordinateWrap::SetCoordinateSystemToViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCoordinateSystemToViewport();
}

void VtkCoordinateWrap::SetCoordinateSystemToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCoordinateSystemToWorld();
}

void VtkCoordinateWrap::SetReferenceCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCoordinateWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCoordinateWrap *a0 = ObjectWrap::Unwrap<VtkCoordinateWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReferenceCoordinate(
			(vtkCoordinate *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCoordinateWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
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
				native->SetValue(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetValue(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCoordinateWrap::SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCoordinateWrap *wrapper = ObjectWrap::Unwrap<VtkCoordinateWrap>(info.Holder());
	vtkCoordinate *native = (vtkCoordinate *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetViewport(
			(vtkViewport *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

