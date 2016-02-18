/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTreeAreaViewWrap.h"
#include "vtkTreeRingViewWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTreeRingViewWrap::ptpl;

VtkTreeRingViewWrap::VtkTreeRingViewWrap()
{ }

VtkTreeRingViewWrap::VtkTreeRingViewWrap(vtkSmartPointer<vtkTreeRingView> _native)
{ native = _native; }

VtkTreeRingViewWrap::~VtkTreeRingViewWrap()
{ }

void VtkTreeRingViewWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTreeRingView").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TreeRingView").ToLocalChecked(), ConstructorGetter);
}

void VtkTreeRingViewWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTreeRingViewWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAreaViewWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAreaViewWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTreeRingViewWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInteriorLogSpacingValue", GetInteriorLogSpacingValue);
	Nan::SetPrototypeMethod(tpl, "getInteriorLogSpacingValue", GetInteriorLogSpacingValue);

	Nan::SetPrototypeMethod(tpl, "GetInteriorRadius", GetInteriorRadius);
	Nan::SetPrototypeMethod(tpl, "getInteriorRadius", GetInteriorRadius);

	Nan::SetPrototypeMethod(tpl, "GetLayerThickness", GetLayerThickness);
	Nan::SetPrototypeMethod(tpl, "getLayerThickness", GetLayerThickness);

	Nan::SetPrototypeMethod(tpl, "GetRootAtCenter", GetRootAtCenter);
	Nan::SetPrototypeMethod(tpl, "getRootAtCenter", GetRootAtCenter);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RootAtCenterOff", RootAtCenterOff);
	Nan::SetPrototypeMethod(tpl, "rootAtCenterOff", RootAtCenterOff);

	Nan::SetPrototypeMethod(tpl, "RootAtCenterOn", RootAtCenterOn);
	Nan::SetPrototypeMethod(tpl, "rootAtCenterOn", RootAtCenterOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInteriorLogSpacingValue", SetInteriorLogSpacingValue);
	Nan::SetPrototypeMethod(tpl, "setInteriorLogSpacingValue", SetInteriorLogSpacingValue);

	Nan::SetPrototypeMethod(tpl, "SetInteriorRadius", SetInteriorRadius);
	Nan::SetPrototypeMethod(tpl, "setInteriorRadius", SetInteriorRadius);

	Nan::SetPrototypeMethod(tpl, "SetLayerThickness", SetLayerThickness);
	Nan::SetPrototypeMethod(tpl, "setLayerThickness", SetLayerThickness);

	Nan::SetPrototypeMethod(tpl, "SetRootAngles", SetRootAngles);
	Nan::SetPrototypeMethod(tpl, "setRootAngles", SetRootAngles);

	Nan::SetPrototypeMethod(tpl, "SetRootAtCenter", SetRootAtCenter);
	Nan::SetPrototypeMethod(tpl, "setRootAtCenter", SetRootAtCenter);

#ifdef VTK_NODE_PLUS_VTKTREERINGVIEWWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTREERINGVIEWWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTreeRingViewWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTreeRingView> native = vtkSmartPointer<vtkTreeRingView>::New();
		VtkTreeRingViewWrap* obj = new VtkTreeRingViewWrap(native);
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

void VtkTreeRingViewWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTreeRingViewWrap::GetInteriorLogSpacingValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteriorLogSpacingValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeRingViewWrap::GetInteriorRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteriorRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeRingViewWrap::GetLayerThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayerThickness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeRingViewWrap::GetRootAtCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRootAtCenter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeRingViewWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
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

void VtkTreeRingViewWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	vtkTreeRingView * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTreeRingViewWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeRingViewWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeRingViewWrap *w = new VtkTreeRingViewWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeRingViewWrap::RootAtCenterOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RootAtCenterOff();
}

void VtkTreeRingViewWrap::RootAtCenterOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RootAtCenterOn();
}

void VtkTreeRingViewWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTreeRingView * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTreeRingViewWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTreeRingViewWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTreeRingViewWrap *w = new VtkTreeRingViewWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeRingViewWrap::SetInteriorLogSpacingValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteriorLogSpacingValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeRingViewWrap::SetInteriorRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteriorRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeRingViewWrap::SetLayerThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLayerThickness(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeRingViewWrap::SetRootAngles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetRootAngles(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeRingViewWrap::SetRootAtCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRootAtCenter(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

