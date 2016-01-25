/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTreeAreaViewWrap.h"
#include "vtkTreeRingViewWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTreeRingViewWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTreeRingViewWrap::ptpl;

VtkTreeRingViewWrap::VtkTreeRingViewWrap()
{ }

VtkTreeRingViewWrap::VtkTreeRingViewWrap(vtkSmartPointer<vtkTreeRingView> _native)
{ native = _native; }

VtkTreeRingViewWrap::~VtkTreeRingViewWrap()
{ }

void VtkTreeRingViewWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAreaViewWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAreaViewWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkTreeRingViewWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkTreeRingView").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("TreeRingView").ToLocalChecked(),tpl->GetFunction());
}

void VtkTreeRingViewWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInteriorLogSpacingValue", GetInteriorLogSpacingValue);
	Nan::SetPrototypeMethod(tpl, "getInteriorLogSpacingValue", GetInteriorLogSpacingValue);

	Nan::SetPrototypeMethod(tpl, "GetInteriorRadius", GetInteriorRadius);
	Nan::SetPrototypeMethod(tpl, "getInteriorRadius", GetInteriorRadius);

	Nan::SetPrototypeMethod(tpl, "GetLayerThickness", GetLayerThickness);
	Nan::SetPrototypeMethod(tpl, "getLayerThickness", GetLayerThickness);

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
		VtkTreeRingViewWrap* obj = new VtkTreeRingViewWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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

void VtkTreeRingViewWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeRingViewWrap *wrapper = ObjectWrap::Unwrap<VtkTreeRingViewWrap>(info.Holder());
	vtkTreeRingView *native = (vtkTreeRingView *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTreeRingViewWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeRingViewWrap *w = new VtkTreeRingViewWrap();
	w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTreeRingViewWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTreeRingViewWrap *w = new VtkTreeRingViewWrap();
		w->native.TakeReference(r);
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

