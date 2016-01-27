/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPropCollectionWrap.h"
#include "vtkProp3DCollectionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkProp3DWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProp3DCollectionWrap::ptpl;

VtkProp3DCollectionWrap::VtkProp3DCollectionWrap()
{ }

VtkProp3DCollectionWrap::VtkProp3DCollectionWrap(vtkSmartPointer<vtkProp3DCollection> _native)
{ native = _native; }

VtkProp3DCollectionWrap::~VtkProp3DCollectionWrap()
{ }

void VtkProp3DCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProp3DCollection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Prop3DCollection").ToLocalChecked(), ConstructorGetter);
}

void VtkProp3DCollectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProp3DCollectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPropCollectionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPropCollectionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProp3DCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLastProp3D", GetLastProp3D);
	Nan::SetPrototypeMethod(tpl, "getLastProp3D", GetLastProp3D);

	Nan::SetPrototypeMethod(tpl, "GetNextProp3D", GetNextProp3D);
	Nan::SetPrototypeMethod(tpl, "getNextProp3D", GetNextProp3D);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkProp3DCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProp3DCollection> native = vtkSmartPointer<vtkProp3DCollection>::New();
		VtkProp3DCollectionWrap* obj = new VtkProp3DCollectionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProp3DCollectionWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DCollectionWrap>(info.Holder());
	vtkProp3DCollection *native = (vtkProp3DCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProp3DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkProp3DWrap *a0 = ObjectWrap::Unwrap<VtkProp3DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkProp3D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DCollectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DCollectionWrap>(info.Holder());
	vtkProp3DCollection *native = (vtkProp3DCollection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProp3DCollectionWrap::GetLastProp3D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DCollectionWrap>(info.Holder());
	vtkProp3DCollection *native = (vtkProp3DCollection *)wrapper->native.GetPointer();
	vtkProp3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastProp3D();
		VtkProp3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProp3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DWrap *w = new VtkProp3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DCollectionWrap::GetNextProp3D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DCollectionWrap>(info.Holder());
	vtkProp3DCollection *native = (vtkProp3DCollection *)wrapper->native.GetPointer();
	vtkProp3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextProp3D();
		VtkProp3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProp3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DWrap *w = new VtkProp3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DCollectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DCollectionWrap>(info.Holder());
	vtkProp3DCollection *native = (vtkProp3DCollection *)wrapper->native.GetPointer();
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

void VtkProp3DCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DCollectionWrap>(info.Holder());
	vtkProp3DCollection *native = (vtkProp3DCollection *)wrapper->native.GetPointer();
	vtkProp3DCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkProp3DCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProp3DCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DCollectionWrap *w = new VtkProp3DCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DCollectionWrap>(info.Holder());
	vtkProp3DCollection *native = (vtkProp3DCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProp3DCollection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkProp3DCollectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProp3DCollectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProp3DCollectionWrap *w = new VtkProp3DCollectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

