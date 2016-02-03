/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkProgressObserverWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProgressObserverWrap::ptpl;

VtkProgressObserverWrap::VtkProgressObserverWrap()
{ }

VtkProgressObserverWrap::VtkProgressObserverWrap(vtkSmartPointer<vtkProgressObserver> _native)
{ native = _native; }

VtkProgressObserverWrap::~VtkProgressObserverWrap()
{ }

void VtkProgressObserverWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProgressObserver").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProgressObserver").ToLocalChecked(), ConstructorGetter);
}

void VtkProgressObserverWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProgressObserverWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProgressObserverWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetProgress", GetProgress);
	Nan::SetPrototypeMethod(tpl, "getProgress", GetProgress);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "UpdateProgress", UpdateProgress);
	Nan::SetPrototypeMethod(tpl, "updateProgress", UpdateProgress);

	ptpl.Reset( tpl );
}

void VtkProgressObserverWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProgressObserver> native = vtkSmartPointer<vtkProgressObserver>::New();
		VtkProgressObserverWrap* obj = new VtkProgressObserverWrap(native);
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

void VtkProgressObserverWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgressObserverWrap *wrapper = ObjectWrap::Unwrap<VtkProgressObserverWrap>(info.Holder());
	vtkProgressObserver *native = (vtkProgressObserver *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProgressObserverWrap::GetProgress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgressObserverWrap *wrapper = ObjectWrap::Unwrap<VtkProgressObserverWrap>(info.Holder());
	vtkProgressObserver *native = (vtkProgressObserver *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProgress();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProgressObserverWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgressObserverWrap *wrapper = ObjectWrap::Unwrap<VtkProgressObserverWrap>(info.Holder());
	vtkProgressObserver *native = (vtkProgressObserver *)wrapper->native.GetPointer();
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

void VtkProgressObserverWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgressObserverWrap *wrapper = ObjectWrap::Unwrap<VtkProgressObserverWrap>(info.Holder());
	vtkProgressObserver *native = (vtkProgressObserver *)wrapper->native.GetPointer();
	vtkProgressObserver * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkProgressObserverWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProgressObserverWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProgressObserverWrap *w = new VtkProgressObserverWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProgressObserverWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgressObserverWrap *wrapper = ObjectWrap::Unwrap<VtkProgressObserverWrap>(info.Holder());
	vtkProgressObserver *native = (vtkProgressObserver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProgressObserver * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkProgressObserverWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProgressObserverWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProgressObserverWrap *w = new VtkProgressObserverWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProgressObserverWrap::UpdateProgress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgressObserverWrap *wrapper = ObjectWrap::Unwrap<VtkProgressObserverWrap>(info.Holder());
	vtkProgressObserver *native = (vtkProgressObserver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UpdateProgress(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
