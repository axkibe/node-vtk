/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphAlgorithmWrap.h"
#include "vtkCollectGraphWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "vtkSocketControllerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCollectGraphWrap::ptpl;

VtkCollectGraphWrap::VtkCollectGraphWrap()
{ }

VtkCollectGraphWrap::VtkCollectGraphWrap(vtkSmartPointer<vtkCollectGraph> _native)
{ native = _native; }

VtkCollectGraphWrap::~VtkCollectGraphWrap()
{ }

void VtkCollectGraphWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCollectGraph").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CollectGraph").ToLocalChecked(), ConstructorGetter);
}

void VtkCollectGraphWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCollectGraphWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCollectGraphWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetOutputType", GetOutputType);
	Nan::SetPrototypeMethod(tpl, "getOutputType", GetOutputType);

	Nan::SetPrototypeMethod(tpl, "GetPassThrough", GetPassThrough);
	Nan::SetPrototypeMethod(tpl, "getPassThrough", GetPassThrough);

	Nan::SetPrototypeMethod(tpl, "GetSocketController", GetSocketController);
	Nan::SetPrototypeMethod(tpl, "getSocketController", GetSocketController);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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

	Nan::SetPrototypeMethod(tpl, "SetOutputType", SetOutputType);
	Nan::SetPrototypeMethod(tpl, "setOutputType", SetOutputType);

	Nan::SetPrototypeMethod(tpl, "SetPassThrough", SetPassThrough);
	Nan::SetPrototypeMethod(tpl, "setPassThrough", SetPassThrough);

	Nan::SetPrototypeMethod(tpl, "SetSocketController", SetSocketController);
	Nan::SetPrototypeMethod(tpl, "setSocketController", SetSocketController);

	ptpl.Reset( tpl );
}

void VtkCollectGraphWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCollectGraph> native = vtkSmartPointer<vtkCollectGraph>::New();
		VtkCollectGraphWrap* obj = new VtkCollectGraphWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCollectGraphWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCollectGraphWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCollectGraphWrap::GetOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCollectGraphWrap::GetPassThrough(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassThrough();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCollectGraphWrap::GetSocketController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCollectGraphWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
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

void VtkCollectGraphWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
	vtkCollectGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCollectGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCollectGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCollectGraphWrap *w = new VtkCollectGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCollectGraphWrap::PassThroughOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughOff();
}

void VtkCollectGraphWrap::PassThroughOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughOn();
}

void VtkCollectGraphWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCollectGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCollectGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCollectGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCollectGraphWrap *w = new VtkCollectGraphWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCollectGraphWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
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

void VtkCollectGraphWrap::SetOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCollectGraphWrap::SetPassThrough(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
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

void VtkCollectGraphWrap::SetSocketController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectGraphWrap *wrapper = ObjectWrap::Unwrap<VtkCollectGraphWrap>(info.Holder());
	vtkCollectGraph *native = (vtkCollectGraph *)wrapper->native.GetPointer();
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

