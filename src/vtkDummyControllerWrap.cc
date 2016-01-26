/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiProcessControllerWrap.h"
#include "vtkDummyControllerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCommunicatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDummyControllerWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDummyControllerWrap::ptpl;

VtkDummyControllerWrap::VtkDummyControllerWrap()
{ }

VtkDummyControllerWrap::VtkDummyControllerWrap(vtkSmartPointer<vtkDummyController> _native)
{ native = _native; }

VtkDummyControllerWrap::~VtkDummyControllerWrap()
{ }

void VtkDummyControllerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDummyController").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DummyController").ToLocalChecked(), ConstructorGetter);
}

void VtkDummyControllerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDummyControllerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiProcessControllerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDummyControllerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateOutputWindow", CreateOutputWindow);
	Nan::SetPrototypeMethod(tpl, "createOutputWindow", CreateOutputWindow);

	Nan::SetPrototypeMethod(tpl, "Finalize", Finalize);
	Nan::SetPrototypeMethod(tpl, "finalize", Finalize);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCommunicator", GetCommunicator);
	Nan::SetPrototypeMethod(tpl, "getCommunicator", GetCommunicator);

	Nan::SetPrototypeMethod(tpl, "GetLocalProcessId", GetLocalProcessId);
	Nan::SetPrototypeMethod(tpl, "getLocalProcessId", GetLocalProcessId);

	Nan::SetPrototypeMethod(tpl, "GetRMICommunicator", GetRMICommunicator);
	Nan::SetPrototypeMethod(tpl, "getRMICommunicator", GetRMICommunicator);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MultipleMethodExecute", MultipleMethodExecute);
	Nan::SetPrototypeMethod(tpl, "multipleMethodExecute", MultipleMethodExecute);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCommunicator", SetCommunicator);
	Nan::SetPrototypeMethod(tpl, "setCommunicator", SetCommunicator);

	Nan::SetPrototypeMethod(tpl, "SetRMICommunicator", SetRMICommunicator);
	Nan::SetPrototypeMethod(tpl, "setRMICommunicator", SetRMICommunicator);

	Nan::SetPrototypeMethod(tpl, "SingleMethodExecute", SingleMethodExecute);
	Nan::SetPrototypeMethod(tpl, "singleMethodExecute", SingleMethodExecute);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkDummyControllerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDummyController> native = vtkSmartPointer<vtkDummyController>::New();
		VtkDummyControllerWrap* obj = new VtkDummyControllerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDummyControllerWrap::CreateOutputWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateOutputWindow();
}

void VtkDummyControllerWrap::Finalize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Finalize(
			info[0]->Int32Value()
		);
		return;
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Finalize();
}

void VtkDummyControllerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDummyControllerWrap::GetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	vtkCommunicator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCommunicator();
		VtkCommunicatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCommunicatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCommunicatorWrap *w = new VtkCommunicatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDummyControllerWrap::GetLocalProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocalProcessId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDummyControllerWrap::GetRMICommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	vtkCommunicator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRMICommunicator();
		VtkCommunicatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCommunicatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCommunicatorWrap *w = new VtkCommunicatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDummyControllerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
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

void VtkDummyControllerWrap::MultipleMethodExecute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MultipleMethodExecute();
}

void VtkDummyControllerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	vtkDummyController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDummyControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDummyControllerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDummyControllerWrap *w = new VtkDummyControllerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDummyControllerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDummyController * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDummyControllerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDummyControllerWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDummyControllerWrap *w = new VtkDummyControllerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDummyControllerWrap::SetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCommunicatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCommunicatorWrap *a0 = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCommunicator(
			(vtkCommunicator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDummyControllerWrap::SetRMICommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCommunicatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCommunicatorWrap *a0 = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRMICommunicator(
			(vtkCommunicator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDummyControllerWrap::SingleMethodExecute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDummyControllerWrap *wrapper = ObjectWrap::Unwrap<VtkDummyControllerWrap>(info.Holder());
	vtkDummyController *native = (vtkDummyController *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SingleMethodExecute();
}

