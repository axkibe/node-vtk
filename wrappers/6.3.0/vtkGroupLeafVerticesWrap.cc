/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTreeAlgorithmWrap.h"
#include "vtkGroupLeafVerticesWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGroupLeafVerticesWrap::ptpl;

VtkGroupLeafVerticesWrap::VtkGroupLeafVerticesWrap()
{ }

VtkGroupLeafVerticesWrap::VtkGroupLeafVerticesWrap(vtkSmartPointer<vtkGroupLeafVertices> _native)
{ native = _native; }

VtkGroupLeafVerticesWrap::~VtkGroupLeafVerticesWrap()
{ }

void VtkGroupLeafVerticesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGroupLeafVertices").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GroupLeafVertices").ToLocalChecked(), ConstructorGetter);
}

void VtkGroupLeafVerticesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGroupLeafVerticesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGroupLeafVerticesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGroupDomain", GetGroupDomain);
	Nan::SetPrototypeMethod(tpl, "getGroupDomain", GetGroupDomain);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGroupDomain", SetGroupDomain);
	Nan::SetPrototypeMethod(tpl, "setGroupDomain", SetGroupDomain);

	ptpl.Reset( tpl );
}

void VtkGroupLeafVerticesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGroupLeafVertices> native = vtkSmartPointer<vtkGroupLeafVertices>::New();
		VtkGroupLeafVerticesWrap* obj = new VtkGroupLeafVerticesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGroupLeafVerticesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGroupLeafVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkGroupLeafVerticesWrap>(info.Holder());
	vtkGroupLeafVertices *native = (vtkGroupLeafVertices *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGroupLeafVerticesWrap::GetGroupDomain(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGroupLeafVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkGroupLeafVerticesWrap>(info.Holder());
	vtkGroupLeafVertices *native = (vtkGroupLeafVertices *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGroupDomain();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGroupLeafVerticesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGroupLeafVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkGroupLeafVerticesWrap>(info.Holder());
	vtkGroupLeafVertices *native = (vtkGroupLeafVertices *)wrapper->native.GetPointer();
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

void VtkGroupLeafVerticesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGroupLeafVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkGroupLeafVerticesWrap>(info.Holder());
	vtkGroupLeafVertices *native = (vtkGroupLeafVertices *)wrapper->native.GetPointer();
	vtkGroupLeafVertices * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGroupLeafVerticesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGroupLeafVerticesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGroupLeafVerticesWrap *w = new VtkGroupLeafVerticesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGroupLeafVerticesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGroupLeafVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkGroupLeafVerticesWrap>(info.Holder());
	vtkGroupLeafVertices *native = (vtkGroupLeafVertices *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGroupLeafVertices * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGroupLeafVerticesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGroupLeafVerticesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGroupLeafVerticesWrap *w = new VtkGroupLeafVerticesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGroupLeafVerticesWrap::SetGroupDomain(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGroupLeafVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkGroupLeafVerticesWrap>(info.Holder());
	vtkGroupLeafVertices *native = (vtkGroupLeafVertices *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGroupDomain(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

