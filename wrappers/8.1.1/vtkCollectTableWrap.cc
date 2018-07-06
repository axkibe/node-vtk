/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTableAlgorithmWrap.h"
#include "vtkCollectTableWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "vtkSocketControllerWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCollectTableWrap::ptpl;

VtkCollectTableWrap::VtkCollectTableWrap()
{ }

VtkCollectTableWrap::VtkCollectTableWrap(vtkSmartPointer<vtkCollectTable> _native)
{ native = _native; }

VtkCollectTableWrap::~VtkCollectTableWrap()
{ }

void VtkCollectTableWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCollectTable").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CollectTable").ToLocalChecked(), ConstructorGetter);
}

void VtkCollectTableWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCollectTableWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCollectTableWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetPassThrough", GetPassThrough);
	Nan::SetPrototypeMethod(tpl, "getPassThrough", GetPassThrough);

	Nan::SetPrototypeMethod(tpl, "GetSocketController", GetSocketController);
	Nan::SetPrototypeMethod(tpl, "getSocketController", GetSocketController);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassThroughOff", PassThroughOff);
	Nan::SetPrototypeMethod(tpl, "passThroughOff", PassThroughOff);

	Nan::SetPrototypeMethod(tpl, "PassThroughOn", PassThroughOn);
	Nan::SetPrototypeMethod(tpl, "passThroughOn", PassThroughOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetPassThrough", SetPassThrough);
	Nan::SetPrototypeMethod(tpl, "setPassThrough", SetPassThrough);

	Nan::SetPrototypeMethod(tpl, "SetSocketController", SetSocketController);
	Nan::SetPrototypeMethod(tpl, "setSocketController", SetSocketController);

#ifdef VTK_NODE_PLUS_VTKCOLLECTTABLEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCOLLECTTABLEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCollectTableWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCollectTable> native = vtkSmartPointer<vtkCollectTable>::New();
		VtkCollectTableWrap* obj = new VtkCollectTableWrap(native);
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

void VtkCollectTableWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectTableWrap *wrapper = ObjectWrap::Unwrap<VtkCollectTableWrap>(info.Holder());
	vtkCollectTable *native = (vtkCollectTable *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
	VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCollectTableWrap::GetPassThrough(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectTableWrap *wrapper = ObjectWrap::Unwrap<VtkCollectTableWrap>(info.Holder());
	vtkCollectTable *native = (vtkCollectTable *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassThrough();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCollectTableWrap::GetSocketController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectTableWrap *wrapper = ObjectWrap::Unwrap<VtkCollectTableWrap>(info.Holder());
	vtkCollectTable *native = (vtkCollectTable *)wrapper->native.GetPointer();
	vtkSocketController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSocketController();
	VtkSocketControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSocketControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSocketControllerWrap *w = new VtkSocketControllerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCollectTableWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectTableWrap *wrapper = ObjectWrap::Unwrap<VtkCollectTableWrap>(info.Holder());
	vtkCollectTable *native = (vtkCollectTable *)wrapper->native.GetPointer();
	vtkCollectTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCollectTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCollectTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCollectTableWrap *w = new VtkCollectTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCollectTableWrap::PassThroughOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectTableWrap *wrapper = ObjectWrap::Unwrap<VtkCollectTableWrap>(info.Holder());
	vtkCollectTable *native = (vtkCollectTable *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughOff();
}

void VtkCollectTableWrap::PassThroughOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectTableWrap *wrapper = ObjectWrap::Unwrap<VtkCollectTableWrap>(info.Holder());
	vtkCollectTable *native = (vtkCollectTable *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughOn();
}

void VtkCollectTableWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectTableWrap *wrapper = ObjectWrap::Unwrap<VtkCollectTableWrap>(info.Holder());
	vtkCollectTable *native = (vtkCollectTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCollectTable * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCollectTableWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCollectTableWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCollectTableWrap *w = new VtkCollectTableWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCollectTableWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectTableWrap *wrapper = ObjectWrap::Unwrap<VtkCollectTableWrap>(info.Holder());
	vtkCollectTable *native = (vtkCollectTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCollectTableWrap::SetPassThrough(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectTableWrap *wrapper = ObjectWrap::Unwrap<VtkCollectTableWrap>(info.Holder());
	vtkCollectTable *native = (vtkCollectTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassThrough(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCollectTableWrap::SetSocketController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectTableWrap *wrapper = ObjectWrap::Unwrap<VtkCollectTableWrap>(info.Holder());
	vtkCollectTable *native = (vtkCollectTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSocketControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSocketControllerWrap *a0 = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSocketController(
			(vtkSocketController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
