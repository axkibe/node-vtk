/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCommunicatorWrap.h"
#include "vtkSubCommunicatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkProcessGroupWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSubCommunicatorWrap::ptpl;

VtkSubCommunicatorWrap::VtkSubCommunicatorWrap()
{ }

VtkSubCommunicatorWrap::VtkSubCommunicatorWrap(vtkSmartPointer<vtkSubCommunicator> _native)
{ native = _native; }

VtkSubCommunicatorWrap::~VtkSubCommunicatorWrap()
{ }

void VtkSubCommunicatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSubCommunicator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SubCommunicator").ToLocalChecked(), ConstructorGetter);
}

void VtkSubCommunicatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSubCommunicatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCommunicatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCommunicatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSubCommunicatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGroup", GetGroup);
	Nan::SetPrototypeMethod(tpl, "getGroup", GetGroup);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGroup", SetGroup);
	Nan::SetPrototypeMethod(tpl, "setGroup", SetGroup);

	ptpl.Reset( tpl );
}

void VtkSubCommunicatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSubCommunicator> native = vtkSmartPointer<vtkSubCommunicator>::New();
		VtkSubCommunicatorWrap* obj = new VtkSubCommunicatorWrap(native);
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

void VtkSubCommunicatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSubCommunicatorWrap>(info.Holder());
	vtkSubCommunicator *native = (vtkSubCommunicator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSubCommunicatorWrap::GetGroup(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSubCommunicatorWrap>(info.Holder());
	vtkSubCommunicator *native = (vtkSubCommunicator *)wrapper->native.GetPointer();
	vtkProcessGroup * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGroup();
	VtkProcessGroupWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProcessGroupWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProcessGroupWrap *w = new VtkProcessGroupWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSubCommunicatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSubCommunicatorWrap>(info.Holder());
	vtkSubCommunicator *native = (vtkSubCommunicator *)wrapper->native.GetPointer();
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

void VtkSubCommunicatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSubCommunicatorWrap>(info.Holder());
	vtkSubCommunicator *native = (vtkSubCommunicator *)wrapper->native.GetPointer();
	vtkSubCommunicator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSubCommunicatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSubCommunicatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSubCommunicatorWrap *w = new VtkSubCommunicatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSubCommunicatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSubCommunicatorWrap>(info.Holder());
	vtkSubCommunicator *native = (vtkSubCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSubCommunicator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSubCommunicatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSubCommunicatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSubCommunicatorWrap *w = new VtkSubCommunicatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSubCommunicatorWrap::SetGroup(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSubCommunicatorWrap>(info.Holder());
	vtkSubCommunicator *native = (vtkSubCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProcessGroupWrap::ptpl))->HasInstance(info[0]))
	{
		VtkProcessGroupWrap *a0 = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGroup(
			(vtkProcessGroup *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

