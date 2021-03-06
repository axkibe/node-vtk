/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkRenderPassWrap.h"
#include "vtkClearZPassWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkClearZPassWrap::ptpl;

VtkClearZPassWrap::VtkClearZPassWrap()
{ }

VtkClearZPassWrap::VtkClearZPassWrap(vtkSmartPointer<vtkClearZPass> _native)
{ native = _native; }

VtkClearZPassWrap::~VtkClearZPassWrap()
{ }

void VtkClearZPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkClearZPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ClearZPass").ToLocalChecked(), ConstructorGetter);
}

void VtkClearZPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkClearZPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkClearZPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDepth", GetDepth);
	Nan::SetPrototypeMethod(tpl, "getDepth", GetDepth);

	Nan::SetPrototypeMethod(tpl, "GetDepthMaxValue", GetDepthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDepthMaxValue", GetDepthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDepthMinValue", GetDepthMinValue);
	Nan::SetPrototypeMethod(tpl, "getDepthMinValue", GetDepthMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDepth", SetDepth);
	Nan::SetPrototypeMethod(tpl, "setDepth", SetDepth);

#ifdef VTK_NODE_PLUS_VTKCLEARZPASSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCLEARZPASSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkClearZPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkClearZPass> native = vtkSmartPointer<vtkClearZPass>::New();
		VtkClearZPassWrap* obj = new VtkClearZPassWrap(native);
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

void VtkClearZPassWrap::GetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClearZPassWrap *wrapper = ObjectWrap::Unwrap<VtkClearZPassWrap>(info.Holder());
	vtkClearZPass *native = (vtkClearZPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClearZPassWrap::GetDepthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClearZPassWrap *wrapper = ObjectWrap::Unwrap<VtkClearZPassWrap>(info.Holder());
	vtkClearZPass *native = (vtkClearZPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClearZPassWrap::GetDepthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClearZPassWrap *wrapper = ObjectWrap::Unwrap<VtkClearZPassWrap>(info.Holder());
	vtkClearZPass *native = (vtkClearZPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClearZPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClearZPassWrap *wrapper = ObjectWrap::Unwrap<VtkClearZPassWrap>(info.Holder());
	vtkClearZPass *native = (vtkClearZPass *)wrapper->native.GetPointer();
	vtkClearZPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkClearZPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkClearZPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkClearZPassWrap *w = new VtkClearZPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClearZPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClearZPassWrap *wrapper = ObjectWrap::Unwrap<VtkClearZPassWrap>(info.Holder());
	vtkClearZPass *native = (vtkClearZPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkClearZPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkClearZPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkClearZPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkClearZPassWrap *w = new VtkClearZPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClearZPassWrap::SetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClearZPassWrap *wrapper = ObjectWrap::Unwrap<VtkClearZPassWrap>(info.Holder());
	vtkClearZPass *native = (vtkClearZPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

